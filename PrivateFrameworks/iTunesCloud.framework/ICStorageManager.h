
@interface ICStorageManager : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
}

@property (nonatomic, readonly) bool cachingEnabled;
@property (nonatomic, readonly) unsigned long long storageSpaceAvailable;

+ (id)sharedManager;

- (void).cxx_destruct;
- (bool)cachingEnabled;
- (void)ensureStorageIsAvailable:(unsigned long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)init;
- (unsigned long long)storageSpaceAvailable;

@end
