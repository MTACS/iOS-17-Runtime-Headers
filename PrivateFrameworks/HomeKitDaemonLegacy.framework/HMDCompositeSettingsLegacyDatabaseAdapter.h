
@interface HMDCompositeSettingsLegacyDatabaseAdapter : NSObject <HMBLocalZoneModelObserver, HMDCompositeSettingsDatabaseAdapter, HMFLogging> {
    <HMDCompositeSettingsDatabaseAdapterDelegate> * _delegate;
    Class  _modelClass;
    NSObject<OS_dispatch_queue> * _queue;
    id  _rawDatabase;
    HMDCompositeSettingsZoneManager * _zoneManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HMDCompositeSettingsDatabaseAdapterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) Class modelClass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) id rawDatabase;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HMDCompositeSettingsZoneManager *zoneManager;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)addModel:(id)arg1 withOptionsLabel:(id)arg2 completion:(id /* block */)arg3;
- (id)delegate;
- (id)emptyModelWithID:(id)arg1 parentModelID:(id)arg2 modelClass:(Class)arg3;
- (id)fetchModelWithID:(id)arg1;
- (id)initWithZoneManager:(id)arg1 modelClass:(Class)arg2;
- (id)localZone:(id)arg1 didProcessModelCreation:(id)arg2;
- (id)localZone:(id)arg1 didProcessModelDeletion:(id)arg2;
- (id)localZone:(id)arg1 didProcessModelUpdate:(id)arg2;
- (Class)modelClass;
- (id)queue;
- (id)rawDatabase;
- (void)startObservingModelWithID:(id)arg1;
- (void)startWithDelegate:(id)arg1;
- (void)stopObservingModelWithID:(id)arg1;
- (id)zoneManager;

@end
