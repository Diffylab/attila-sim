////////////////////////////////////////////////////////////////////////////////

#pragma once

////////////////////////////////////////////////////////////////////////////////

#ifndef __AFXWIN_H__
#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"

////////////////////////////////////////////////////////////////////////////////

struct RunInformation
{
  std::string m_pathProgramToLoad;
  std::string m_pathDllToLoad;
};

////////////////////////////////////////////////////////////////////////////////

class DXLoader : public CWinApp
{
public:
	
  RunInformation m_runInfo;

  DXLoader();	
  virtual BOOL InitInstance();

  DECLARE_MESSAGE_MAP()

private:

  DWORD LoadProgramWithDll();

};

////////////////////////////////////////////////////////////////////////////////

extern DXLoader gApp;

////////////////////////////////////////////////////////////////////////////////