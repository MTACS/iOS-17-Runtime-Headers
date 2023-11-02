
@interface BRContainerCache : NSObject {
    bool  _containerCacheUptodate;
    <NSObject> * _containerStatusObserver;
    NSMutableDictionary * _containersByID;
    NSMutableSet * _fetchedContainerIDs;
    <BRContainerHelper> * _helper;
    br_pacer * _invalidationPacer;
    NSObject<OS_dispatch_source> * _memoryPressureSource;
    NSString * _personaID;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)containerCache;
+ (id)containerCacheForPersonaID:(id)arg1;
+ (id)containerHelper;
+ (bool)hasDaemonicParts;
+ (bool)isManagedProvider;
+ (bool)isPersonalProvider;

- (void).cxx_destruct;
- (void)_accountWillChange;
- (id)_allContainersByIDNoCopyBlocking:(bool)arg1;
- (void)_containerListDidChange;
- (bool)_updateContainersCache;
- (id)allContainersBlockIfNeeded:(bool)arg1;
- (id)allContainersByID;
- (id)containerByID:(id)arg1;
- (void)dealloc;
- (id)documentContainers;
- (id)initWithHelper:(id)arg1 personaID:(id)arg2;
- (void)invalidateAndClearCache:(bool)arg1;
- (void)subscribeToContainerStatusUpdate;
- (void)unsubscribeToContainerStatusUpdate;

@end
