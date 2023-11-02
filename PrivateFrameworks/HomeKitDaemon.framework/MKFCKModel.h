
@interface MKFCKModel : HMDManagedObject {
    NSNumber * _canonical;
}

@property (getter=isFake, nonatomic, readonly) bool fake;
@property (nonatomic, copy) NSUUID *flags;
@property (nonatomic, readonly) NSUUID *homeModelID;
@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, copy) NSUUID *primitiveFlags;
@property (nonatomic, readonly) bool shouldSkipValidationDuringImport;
@property (nonatomic, copy) NSDate *writerTimestamp;
@property (nonatomic, copy) NSString *writerVersion;

+ (id)appendDefaultPreloadedPropertiesTo:(id)arg1;
+ (id)canonicalModelForModels:(id)arg1 context:(id)arg2;
+ (unsigned long long)cloudStoreTypes;
+ (id)createWithLocalModel:(id)arg1 context:(id)arg2;
+ (id)defaultPreloadedProperties;
+ (id)fetchWithLocalModel:(id)arg1 context:(id)arg2;
+ (id)logCategory;
+ (id)modelWithModelID:(id)arg1 context:(id)arg2 error:(id*)arg3;
+ (id)modelWithObjectID:(id)arg1 context:(id)arg2 error:(id*)arg3;
+ (id)predicateWithModelID:(id)arg1;
+ (id)predicateWithModelIDs:(id)arg1;
+ (id)rootKeyPath;

- (void).cxx_destruct;
- (void)awakeFromInsert;
- (void)convertToFakeModel;
- (bool)copyPropertiesFromLocalModel:(id)arg1 context:(id)arg2;
- (bool)copyPropertiesIntoLocalModel:(id)arg1 context:(id)arg2;
- (id)createLocalModelWithContext:(id)arg1;
- (id)debugDescription;
- (id)description;
- (void)didTurnIntoFault;
- (long long)ensureCanonicalModel;
- (id)fetchEquivalentModels:(id*)arg1;
- (id)fetchLocalModelWithContext:(id)arg1;
- (id)hmd_debugIdentifier;
- (bool)isDeletedLocallyWithContext:(id)arg1;
- (bool)isFake;
- (id)predicateMatchingEquivalentModels;
- (id)redactedDescription;
- (id)relationshipForLocalName:(id)arg1 localModel:(id)arg2;
- (bool)shouldSkipValidationDuringImport;
- (bool)validateFlags:(id*)arg1 error:(id*)arg2;
- (bool)validateModelID:(id*)arg1 error:(id*)arg2;
- (bool)validateWriterTimestamp:(id*)arg1 error:(id*)arg2;
- (bool)validateWriterVersion:(id*)arg1 error:(id*)arg2;
- (void)willSave;

@end
