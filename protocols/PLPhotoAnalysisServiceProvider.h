
@protocol PLPhotoAnalysisServiceProvider

@required

- (<NSXPCProxyCreating> *)executiveService;
- (<NSXPCProxyCreating> *)momentGraphService;
- (<NSXPCProxyCreating> *)photoLibraryService;
- (<NSXPCProxyCreating> *)testService;
- (<NSXPCProxyCreating> *)wallpaperService;

@end
