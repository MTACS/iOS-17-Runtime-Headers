
@interface TRIPersistedRolloutAllocationStatus_NamespaceFactorPack : TRIPBMessage

@property (nonatomic, copy) NSString *factorPack;
@property (nonatomic) bool hasFactorPack;
@property (nonatomic) bool hasNamespace_p;
@property (nonatomic, copy) NSString *namespace_p;

+ (id)descriptor;

@end
