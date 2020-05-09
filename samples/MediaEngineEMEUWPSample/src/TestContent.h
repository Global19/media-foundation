// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

#pragma once

namespace TestContent
{

// Sample fragmented MP4 CBCS Protected Content
constexpr wchar_t c_contentUrl[] = L"https://test.playready.microsoft.com/media/test/cbcs/bbb.main.30fps.1920x1080.h264.aac.cbcs.sameKeys.mp4";

// Sample init data with PlayReady PSSH box
// Contains the following PlayReady Header: 
// <WRMHEADER xmlns="http://schemas.microsoft.com/DRM/2007/03/PlayReadyHeader" version="4.3.0.0"><DATA><LA_URL>http://experimental1.azurewebsites.net/rightsmanager.asmx?cfg=(playenablers:(786627d8-c2a6-44be-8f88-08ae255b01a7),sl:150,ck:W31bfVt9W31bfVt9W31bfQ==,ckt:AES128BitCBC)</LA_URL><PROTECTINFO><KIDS><KID ALGID="AESCBC" VALUE="AAAAEAAQABAQABAAAAAAAQ=="></KID></KIDS></PROTECTINFO></DATA></WRMHEADER>
constexpr uint8_t c_initData[] = {
    0x00, 0x00, 0x03, 0x44, 0x70, 0x73, 0x73, 0x68, 0x00, 0x00, 0x01, 0x00, 0x9A, 0x04, 0xF0, 0x79, 0x98, 0x40, 0x42, 0x86, 0xAB, 0x92, 0xE6, 0x5B, 0xE0, 0x88, 0x5F, 0x95, 0x00, 0x00, 0x03, 0x24, 0x3C, 0x00, 0x57, 0x00, 0x52, 0x00, 0x4D, 0x00, 0x48, 0x00, 0x45, 0x00, 0x41, 0x00, 0x44, 0x00, 0x45, 0x00, 0x52, 0x00, 0x20, 0x00, 0x78, 0x00, 0x6D, 0x00, 0x6C, 0x00, 0x6E, 0x00, 0x73, 0x00, 0x3D, 0x00, 0x22, 0x00, 0x68, 0x00, 0x74, 0x00, 0x74, 0x00, 0x70, 0x00, 0x3A, 0x00, 0x2F, 0x00, 0x2F, 0x00, 0x73, 0x00, 0x63, 0x00, 0x68, 0x00, 0x65, 0x00, 0x6D, 0x00, 0x61, 0x00, 0x73, 0x00, 0x2E, 0x00, 0x6D, 0x00, 0x69, 0x00, 0x63, 0x00, 0x72, 0x00, 0x6F, 0x00, 0x73, 0x00, 0x6F, 0x00, 0x66, 0x00, 0x74, 0x00, 0x2E, 0x00, 0x63, 0x00, 0x6F, 0x00, 0x6D, 0x00, 0x2F, 0x00, 0x44, 0x00, 0x52, 0x00, 0x4D, 0x00, 0x2F, 0x00, 0x32, 0x00, 0x30, 0x00, 0x30, 0x00, 0x37, 0x00, 0x2F, 0x00, 0x30, 0x00, 0x33, 0x00, 0x2F, 0x00, 0x50, 0x00, 0x6C, 0x00, 0x61, 0x00, 0x79, 0x00, 0x52, 0x00, 0x65, 0x00, 0x61, 0x00, 0x64, 0x00, 0x79, 0x00, 0x48, 0x00, 0x65, 0x00, 0x61, 0x00, 0x64, 0x00, 0x65, 0x00, 0x72, 0x00, 0x22, 0x00, 0x20, 0x00, 0x76, 0x00, 0x65, 0x00, 0x72, 0x00, 0x73, 0x00, 0x69, 0x00, 0x6F, 0x00, 0x6E, 0x00, 0x3D, 0x00, 0x22, 0x00, 0x34, 0x00, 0x2E, 0x00, 0x33, 0x00, 0x2E, 0x00, 0x30, 0x00, 0x2E, 0x00, 0x30, 0x00, 0x22, 0x00, 0x3E, 0x00, 0x3C, 0x00, 0x44, 0x00, 0x41, 0x00, 0x54, 0x00, 0x41, 0x00, 0x3E, 0x00, 0x3C, 0x00, 0x4C, 0x00, 0x41, 0x00, 0x5F, 0x00, 0x55, 0x00, 0x52, 0x00, 0x4C, 0x00, 0x3E, 0x00, 0x68, 0x00, 0x74, 0x00, 0x74, 0x00, 0x70, 0x00, 0x3A, 0x00, 0x2F, 0x00, 0x2F, 0x00, 0x65, 0x00, 0x78, 0x00, 0x70, 0x00, 0x65, 0x00, 0x72, 0x00, 0x69, 0x00, 0x6D, 0x00, 0x65, 0x00, 0x6E, 0x00, 0x74, 0x00, 0x61, 0x00, 0x6C, 0x00, 0x31, 0x00, 0x2E, 0x00, 0x61, 0x00, 0x7A, 0x00, 0x75, 0x00, 0x72, 0x00, 0x65, 0x00, 0x77, 0x00, 0x65, 0x00, 0x62, 0x00, 0x73, 0x00, 0x69, 0x00, 0x74, 0x00, 0x65, 0x00, 0x73, 0x00, 0x2E, 0x00, 0x6E, 0x00, 0x65, 0x00, 0x74, 0x00, 0x2F, 0x00, 0x72, 0x00, 0x69, 0x00, 0x67, 0x00, 0x68, 0x00, 0x74, 0x00, 0x73, 0x00, 0x6D, 0x00, 0x61, 0x00, 0x6E, 0x00, 0x61, 0x00, 0x67, 0x00, 0x65, 0x00, 0x72, 0x00, 0x2E, 0x00, 0x61, 0x00, 0x73, 0x00, 0x6D, 0x00, 0x78, 0x00, 0x3F, 0x00, 0x63, 0x00, 0x66, 0x00, 0x67, 0x00, 0x3D, 0x00, 0x28, 0x00, 0x70, 0x00, 0x6C, 0x00, 0x61, 0x00, 0x79, 0x00, 0x65, 0x00, 0x6E, 0x00, 0x61, 0x00, 0x62, 0x00, 0x6C, 0x00, 0x65, 0x00, 0x72, 0x00, 0x73, 0x00, 0x3A, 0x00, 0x28, 0x00, 0x37, 0x00, 0x38, 0x00, 0x36, 0x00, 0x36, 0x00, 0x32, 0x00, 0x37, 0x00, 0x64, 0x00, 0x38, 0x00, 0x2D, 0x00, 0x63, 0x00, 0x32, 0x00, 0x61, 0x00, 0x36, 0x00, 0x2D, 0x00, 0x34, 0x00, 0x34, 0x00, 0x62, 0x00, 0x65, 0x00, 0x2D, 0x00, 0x38, 0x00, 0x66, 0x00, 0x38, 0x00, 0x38, 0x00, 0x2D, 0x00, 0x30, 0x00, 0x38, 0x00, 0x61, 0x00, 0x65, 0x00, 0x32, 0x00, 0x35, 0x00, 0x35, 0x00, 0x62, 0x00, 0x30, 0x00, 0x31, 0x00, 0x61, 0x00, 0x37, 0x00, 0x29, 0x00, 0x2C, 0x00, 0x73, 0x00, 0x6C, 0x00, 0x3A, 0x00, 0x31, 0x00, 0x35, 0x00, 0x30, 0x00, 0x2C, 0x00, 0x63, 0x00, 0x6B, 0x00, 0x3A, 0x00, 0x57, 0x00, 0x33, 0x00, 0x31, 0x00, 0x62, 0x00, 0x66, 0x00, 0x56, 0x00, 0x74, 0x00, 0x39, 0x00, 0x57, 0x00, 0x33, 0x00, 0x31, 0x00, 0x62, 0x00, 0x66, 0x00, 0x56, 0x00, 0x74, 0x00, 0x39, 0x00, 0x57, 0x00, 0x33, 0x00, 0x31, 0x00, 0x62, 0x00, 0x66, 0x00, 0x51, 0x00, 0x3D, 0x00, 0x3D, 0x00, 0x2C, 0x00, 0x63, 0x00, 0x6B, 0x00, 0x74, 0x00, 0x3A, 0x00, 0x41, 0x00, 0x45, 0x00, 0x53, 0x00, 0x31, 0x00, 0x32, 0x00, 0x38, 0x00, 0x42, 0x00, 0x69, 0x00, 0x74, 0x00, 0x43, 0x00, 0x42, 0x00, 0x43, 0x00, 0x29, 0x00, 0x3C, 0x00, 0x2F, 0x00, 0x4C, 0x00, 0x41, 0x00, 0x5F, 0x00, 0x55, 0x00, 0x52, 0x00, 0x4C, 0x00, 0x3E, 0x00, 0x3C, 0x00, 0x50, 0x00, 0x52, 0x00, 0x4F, 0x00, 0x54, 0x00, 0x45, 0x00, 0x43, 0x00, 0x54, 0x00, 0x49, 0x00, 0x4E, 0x00, 0x46, 0x00, 0x4F, 0x00, 0x3E, 0x00, 0x3C, 0x00, 0x4B, 0x00, 0x49, 0x00, 0x44, 0x00, 0x53, 0x00, 0x3E, 0x00, 0x3C, 0x00, 0x4B, 0x00, 0x49, 0x00, 0x44, 0x00, 0x20, 0x00, 0x41, 0x00, 0x4C, 0x00, 0x47, 0x00, 0x49, 0x00, 0x44, 0x00, 0x3D, 0x00, 0x22, 0x00, 0x41, 0x00, 0x45, 0x00, 0x53, 0x00, 0x43, 0x00, 0x42, 0x00, 0x43, 0x00, 0x22, 0x00, 0x20, 0x00, 0x56, 0x00, 0x41, 0x00, 0x4C, 0x00, 0x55, 0x00, 0x45, 0x00, 0x3D, 0x00, 0x22, 0x00, 0x41, 0x00, 0x41, 0x00, 0x41, 0x00, 0x41, 0x00, 0x45, 0x00, 0x41, 0x00, 0x41, 0x00, 0x51, 0x00, 0x41, 0x00, 0x42, 0x00, 0x41, 0x00, 0x51, 0x00, 0x41, 0x00, 0x42, 0x00, 0x41, 0x00, 0x41, 0x00, 0x41, 0x00, 0x41, 0x00, 0x41, 0x00, 0x41, 0x00, 0x41, 0x00, 0x51, 0x00, 0x3D, 0x00, 0x3D, 0x00, 0x22, 0x00, 0x3E, 0x00, 0x3C, 0x00, 0x2F, 0x00, 0x4B, 0x00, 0x49, 0x00, 0x44, 0x00, 0x3E, 0x00, 0x3C, 0x00, 0x2F, 0x00, 0x4B, 0x00, 0x49, 0x00, 0x44, 0x00, 0x53, 0x00, 0x3E, 0x00, 0x3C, 0x00, 0x2F, 0x00, 0x50, 0x00, 0x52, 0x00, 0x4F, 0x00, 0x54, 0x00, 0x45, 0x00, 0x43, 0x00, 0x54, 0x00, 0x49, 0x00, 0x4E, 0x00, 0x46, 0x00, 0x4F, 0x00, 0x3E, 0x00, 0x3C, 0x00, 0x2F, 0x00, 0x44, 0x00, 0x41, 0x00, 0x54, 0x00, 0x41, 0x00, 0x3E, 0x00, 0x3C, 0x00, 0x2F, 0x00, 0x57, 0x00, 0x52, 0x00, 0x4D, 0x00, 0x48, 0x00, 0x45, 0x00, 0x41, 0x00, 0x44, 0x00, 0x45, 0x00, 0x52, 0x00, 0x3E, 0x00
};

}