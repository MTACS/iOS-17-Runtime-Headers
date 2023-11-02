
@interface HDMedicationsCloudSyncStateEntity : NSObject <HDCloudSyncStateEntity>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)stateEntitySchema;
+ (void)syncDidFinishWithResult:(long long)arg1 stateStore:(id)arg2 profile:(id)arg3;
+ (id)timeWindow;
+ (bool)updateDataWithStateStorage:(id)arg1 transaction:(id)arg2 error:(id*)arg3;

- (id)init;

@end
