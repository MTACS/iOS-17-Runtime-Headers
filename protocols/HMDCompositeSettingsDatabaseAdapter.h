
@protocol HMDCompositeSettingsDatabaseAdapter <NSObject>

@required

- (void)addModel:(void *)arg1 withOptionsLabel:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: <HMDCompositeSettingsModel> *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (<HMDCompositeSettingsModel> *)emptyModelWithID:(NSUUID *)arg1 parentModelID:(NSUUID *)arg2 modelClass:(Class)arg3;
- (<HMDCompositeSettingsModel> *)fetchModelWithID:(NSUUID *)arg1;
- (NSObject<OS_dispatch_queue> *)queue;
- (id)rawDatabase;
- (void)startObservingModelWithID:(NSUUID *)arg1;
- (void)startWithDelegate:(id <HMDCompositeSettingsDatabaseAdapterDelegate>)arg1;
- (void)stopObservingModelWithID:(NSUUID *)arg1;

@end
