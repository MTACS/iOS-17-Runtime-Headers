
@interface DEDCloudKitBaseModel : NSObject <DEDCloudKitModel> {
    CKRecord * _cloudKitModel;
    NSMutableArray * _dependencies;
    NSObject<OS_os_log> * _log;
}

@property (nonatomic, retain) CKRecord *cloudKitModel;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSMutableArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic, readonly) NSString *modelName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addDependency:(id)arg1;
- (void)addReferenceForModel:(id)arg1 referenceKey:(id)arg2;
- (id)cloudKitModel;
- (id)dependencies;
- (id)initModelWithDictionary:(id)arg1;
- (id)log;
- (id)modelName;
- (void)setCloudKitModel:(id)arg1;
- (void)setDependencies:(id)arg1;
- (void)setLog:(id)arg1;

@end
