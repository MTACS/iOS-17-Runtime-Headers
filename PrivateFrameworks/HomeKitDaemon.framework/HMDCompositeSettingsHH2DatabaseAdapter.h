
@interface HMDCompositeSettingsHH2DatabaseAdapter : NSObject <HMDCompositeSettingsDatabaseAdapter, HMFLogging> {
    NSUUID * _accessoryID;
    HMCContext * _context;
    <HMDCompositeSettingsDatabaseAdapterDelegate> * _delegate;
    NSUUID * _homeID;
    NSObject<OS_dispatch_queue> * _queue;
    id  _rawDatabase;
    NSString * _strongRawDatabase;
}

@property (nonatomic, readonly) NSUUID *accessoryID;
@property (nonatomic, readonly) HMCContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMDCompositeSettingsDatabaseAdapterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) id rawDatabase;
@property (nonatomic, readonly) NSString *strongRawDatabase;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_copySettingsFromModel:(id)arg1 toAccessory:(id)arg2;
- (void)_handleAccessoryUpdateTransaction:(id)arg1;
- (id)_modelFromAccessory:(id)arg1;
- (void)_setDefaultVersionsOnModel:(id)arg1;
- (id)accessoryID;
- (void)addModel:(id)arg1 withOptionsLabel:(id)arg2 completion:(id /* block */)arg3;
- (id)context;
- (id)delegate;
- (id)emptyModelWithID:(id)arg1 parentModelID:(id)arg2 modelClass:(Class)arg3;
- (id)fetchModelWithID:(id)arg1;
- (id)homeID;
- (id)initWithAccessory:(id)arg1 homeID:(id)arg2 workingManagedObjectContext:(id)arg3 queue:(id)arg4 notificationCenter:(id)arg5;
- (id)logIdentifier;
- (id)queue;
- (id)rawDatabase;
- (void)setDelegate:(id)arg1;
- (void)startObservingModelWithID:(id)arg1;
- (void)startWithDelegate:(id)arg1;
- (void)stopObservingModelWithID:(id)arg1;
- (id)strongRawDatabase;

@end
