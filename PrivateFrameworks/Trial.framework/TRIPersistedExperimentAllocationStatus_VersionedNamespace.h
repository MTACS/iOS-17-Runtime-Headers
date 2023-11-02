
@interface TRIPersistedExperimentAllocationStatus_VersionedNamespace : TRIPBMessage

@property (nonatomic) unsigned int compatibilityVersion;
@property (nonatomic) bool hasCompatibilityVersion;
@property (nonatomic) bool hasName;
@property (nonatomic, copy) NSString *name;

+ (id)descriptor;

@end
