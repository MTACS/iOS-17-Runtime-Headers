
@interface FPDVolumeManager : NSObject {
    FPDVersionsFileCoordinationProviderDelegate * _delegate;
    bool  _excludeDiskImages;
    FPDServer * _server;
    NSMutableDictionary * _versionsProvidersByVolumeID;
    NSMutableDictionary * _volumeForProviderDomainID;
    NSMutableArray * _volumes;
}

@property (nonatomic) bool excludeDiskImages;
@property (nonatomic) FPDServer *server;

- (void).cxx_destruct;
- (id)appSupportPathForProviderDomainID:(id)arg1;
- (void)cacheLibrary:(id)arg1 forProviderDomainID:(id)arg2;
- (id)cloudStoragePathForProviderDomainID:(id)arg1;
- (void)enumerateLibrariesForPersona:(id)arg1 withBlock:(id /* block */)arg2;
- (void)enumerateLibrariesWithBlock:(id /* block */)arg1;
- (bool)excludeDiskImages;
- (struct statfs { unsigned int x1; int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; struct fsid { int x_8_1_1[2]; } x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; BOOL x13[16]; BOOL x14[1024]; BOOL x15[1024]; unsigned int x16; unsigned int x17[7]; }*)getAllEligibleVolumesWithError:(id*)arg1 count:(int*)arg2;
- (id)init;
- (id)initWithServer:(id)arg1;
- (void)invalidateVolume:(int)arg1 reason:(id)arg2;
- (id)libraryForProviderDomainID:(id)arg1;
- (id)libraryForVolume:(id)arg1 createIfNeeded:(bool)arg2 error:(id*)arg3;
- (void)loadAdditionalVolumesWithCompletion:(id /* block */)arg1;
- (bool)loadEnterpriseVolumeWithError:(id*)arg1;
- (bool)loadHomeVolume;
- (id)loadSingleVolume:(const struct statfs { unsigned int x1; int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; struct fsid { int x_8_1_1[2]; } x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; BOOL x13[16]; BOOL x14[1024]; BOOL x15[1024]; unsigned int x16; unsigned int x17[7]; }*)arg1 role:(unsigned int)arg2;
- (bool)loadVolumeWithURL:(id)arg1 role:(unsigned int)arg2 error:(id*)arg3;
- (void)registerVersionsFileCoordinatorForVolume:(id)arg1;
- (id)server;
- (void)setExcludeDiskImages:(bool)arg1;
- (void)setServer:(id)arg1;
- (void)unregisterVersionsFileCoordinatorForVolume:(id)arg1;

@end
