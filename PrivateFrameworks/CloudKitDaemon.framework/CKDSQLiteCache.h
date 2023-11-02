
@interface CKDSQLiteCache : CKSQLite {
    CKDLogicalDeviceContext * _deviceContext;
}

@property (nonatomic) CKDLogicalDeviceContext *deviceContext;

+ (id)cacheDatabaseSchema;
+ (id)cacheDirectory;
+ (id)dbFileName;
+ (id)sharedCache;

- (void).cxx_destruct;
- (id)deviceContext;
- (id)initOrExitWithPath:(id)arg1 isSharedCache:(bool)arg2;
- (id)initWithCacheDir:(id)arg1;
- (id)initWithDeviceContext:(id)arg1;
- (void)setDeviceContext:(id)arg1;

@end
