
@interface _MKFModel : _MKFObject <MKFModel, MKFModelModelIDDefaults>

@property (nonatomic, readonly, copy) MKFModelDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSUUID *modelID;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (id)modelWithModelID:(id)arg1 context:(id)arg2;
+ (id)modelWithModelID:(id)arg1 context:(id)arg2 error:(id*)arg3;

- (id)castIfModel;
- (id)databaseID;
- (id)description;
- (id)hmd_debugIdentifier;
- (id)redactedDescription;
- (bool)validateForInsertOrUpdate:(id*)arg1;
- (bool)validateModelID:(id*)arg1 error:(id*)arg2;
- (bool)validateWriterTimestamp:(id*)arg1 error:(id*)arg2;
- (void)willSave;

@end
