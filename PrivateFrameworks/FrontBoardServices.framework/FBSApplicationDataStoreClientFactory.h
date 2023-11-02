
@interface FBSApplicationDataStoreClientFactory : NSObject {
    unsigned long long  _count;
    NSArray * _prefetchedKeys;
    NSObject<OS_dispatch_queue> * _queue;
    <FBSApplicationDataStoreRepositoryClient> * _sharedClient;
}

@property (nonatomic, retain) NSArray *prefetchedKeys;

+ (bool)isServerProcess;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)checkin;
- (id)checkout;
- (id)init;
- (id)prefetchedKeys;
- (void)setPrefetchedKeys:(id)arg1;

@end
