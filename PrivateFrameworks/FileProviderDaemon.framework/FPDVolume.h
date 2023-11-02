
@interface FPDVolume : NSObject {
    int  _dev;
    NSObject<OS_dispatch_source> * _diskSpaceRecoveryTimer;
    bool  _isLibraryConfigured;
    unsigned int  _role;
    NSString * _root;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSUUID * _uuid;
    FPDVolumeManager * _volumeManager;
}

@property (nonatomic, readonly) int dev;
@property (nonatomic, readonly) bool isDefaultVolumeForCurrentPersona;
@property (nonatomic, readonly) bool isLibraryConfigured;
@property (nonatomic, readonly) NSURL *purgatoryDirectory;
@property (nonatomic, readonly) unsigned int role;
@property (nonatomic, readonly) NSString *root;
@property (nonatomic, readonly) NSURL *syncRootsDirectory;
@property (nonatomic, readonly) NSURL *systemDirectory;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) FPDVolumeManager *volumeManager;

- (void).cxx_destruct;
- (bool)_hasCloudStorageDirAtRoot;
- (id)description;
- (int)dev;
- (void)enumerateDomainsWithBlock:(id /* block */)arg1;
- (id)initWithVolumeInfo:(const struct statfs { unsigned int x1; int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; struct fsid { int x_8_1_1[2]; } x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; BOOL x13[16]; BOOL x14[1024]; BOOL x15[1024]; unsigned int x16; unsigned int x17[7]; }*)arg1 knownRole:(unsigned int)arg2 volumeManager:(id)arg3;
- (bool)isDefaultVolumeForCurrentPersona;
- (bool)isEligibleForFPFS:(const struct statfs { unsigned int x1; int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; struct fsid { int x_8_1_1[2]; } x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; BOOL x13[16]; BOOL x14[1024]; BOOL x15[1024]; unsigned int x16; unsigned int x17[7]; }*)arg1;
- (bool)isInLowDiskSpaceState;
- (bool)isLibraryConfigured;
- (bool)monitorLowDiskSpaceRecovery;
- (id)purgatoryDirectory;
- (unsigned int)resolveRoleForVolume:(const struct statfs { unsigned int x1; int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; struct fsid { int x_8_1_1[2]; } x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; BOOL x13[16]; BOOL x14[1024]; BOOL x15[1024]; unsigned int x16; unsigned int x17[7]; }*)arg1;
- (unsigned int)role;
- (id)root;
- (bool)satisfyNonDefaultVolumeCriteria:(const struct statfs { unsigned int x1; int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; struct fsid { int x_8_1_1[2]; } x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; BOOL x13[16]; BOOL x14[1024]; BOOL x15[1024]; unsigned int x16; unsigned int x17[7]; }*)arg1 volumeManager:(id)arg2;
- (id)syncRootsDirectory;
- (id)systemDirectory;
- (id)uuid;
- (id)volumeManager;

@end
