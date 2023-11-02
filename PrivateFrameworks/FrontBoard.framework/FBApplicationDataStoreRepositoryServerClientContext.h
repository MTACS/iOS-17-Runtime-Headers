
@interface FBApplicationDataStoreRepositoryServerClientContext : NSObject <FBSServiceFacilityClientContext> {
    <FBSServiceFacilityClientHandle> * _client;
    <FBApplicationDataStoreRepository> * _dataStore;
    <FBApplicationDataStoreRepositoryServerClientContextDelegate> * _delegate;
    bool  _interestedInAllChanges;
    bool  _observingChanges;
    NSSet * _prefetchedKeys;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) <FBSServiceFacilityClientHandle> *clientHandle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FBApplicationDataStoreRepositoryServerClientContextDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool interestedInAllChanges;
@property (nonatomic, copy) NSSet *prefetchedKeys;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_updateObservers;
- (void)_repositoryInvalidated:(id)arg1;
- (void)_valueChanged:(id)arg1;
- (id)clientHandle;
- (void)dealloc;
- (id)delegate;
- (id)initWithDataStore:(id)arg1;
- (bool)interestedInAllChanges;
- (id)prefetchedKeys;
- (void)setClientHandle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInterestedInAllChanges:(bool)arg1;
- (void)setPrefetchedKeys:(id)arg1;

@end
