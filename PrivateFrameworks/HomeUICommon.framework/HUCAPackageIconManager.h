
@interface HUCAPackageIconManager : NSObject {
    NSCache * _packageDataCache;
    NSCache * _packageReuseQueue;
    NSObject<OS_dispatch_group> * _prefetchDispatchGroup;
    HFMutablePriorityQueue * _prefetchPriorityQueue;
    <NAScheduler> * _prefetchScheduler;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _queueLock;
    unsigned long long  _signpostID;
}

@property (nonatomic, retain) NSCache *packageDataCache;
@property (nonatomic, retain) NSCache *packageReuseQueue;
@property (nonatomic, retain) HFMutablePriorityQueue *prefetchPriorityQueue;
@property (nonatomic, retain) <NAScheduler> *prefetchScheduler;
@property (nonatomic) unsigned long long signpostID;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_loadPackageWithIconDescriptor:(id)arg1;
- (id)_packageDataForIconDescriptor:(id)arg1;
- (id)_prefetchIcons:(id)arg1;
- (id)_queueForIconDescriptorIdentifier:(id)arg1;
- (void)_startPrefetchIfNecessary;
- (id)init;
- (id)packageDataCache;
- (id)packageForIconDescriptor:(id)arg1;
- (id)packageReuseQueue;
- (id)prefetchIconDescriptors:(id)arg1;
- (id)prefetchPriorityQueue;
- (id)prefetchScheduler;
- (void)prioritizeIconDescriptors:(id)arg1;
- (void)returnPackageToCache:(id)arg1 forIconDescriptor:(id)arg2;
- (void)setPackageDataCache:(id)arg1;
- (void)setPackageReuseQueue:(id)arg1;
- (void)setPrefetchPriorityQueue:(id)arg1;
- (void)setPrefetchScheduler:(id)arg1;
- (void)setSignpostID:(unsigned long long)arg1;
- (unsigned long long)signpostID;
- (id)tryReclaimPackage:(id)arg1 forIconDescriptor:(id)arg2;

@end
