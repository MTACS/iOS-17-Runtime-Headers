
@interface HMDSoftwareUpdateDocumentationManager : HMFObject <HMFLogging, HMFNetMonitorDelegate> {
    NSMutableOrderedSet * _assets;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _lock;
    HMFNetMonitor * _netMonitor;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _registeredMetadata;
}

@property (readonly) NSArray *assets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSMutableSet *registeredMetadata;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)addAsset:(id)arg1;
- (id)assetForDocumentationMetadata:(id)arg1;
- (id)assets;
- (void)auditAsset:(id)arg1;
- (id)init;
- (void)networkMonitorIsReachable:(id)arg1;
- (void)parseCachedAssets;
- (void)registerDocumentationMetadata:(id)arg1;
- (id)registeredMetadata;
- (void)removeAsset:(id)arg1;
- (void)unregisterDocumentationMetadata:(id)arg1;
- (id)workQueue;

@end
