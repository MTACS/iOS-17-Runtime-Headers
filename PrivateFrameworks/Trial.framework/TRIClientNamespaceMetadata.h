
@interface TRIClientNamespaceMetadata : TRIPBMessage

@property (nonatomic) unsigned int compatibilityVersion;
@property (nonatomic, retain) TRIPBStringEnumDictionary *factorNamePurgeabilityLevels;
@property (nonatomic, readonly) unsigned long long factorNamePurgeabilityLevels_Count;
@property (nonatomic) bool hasCompatibilityVersion;

+ (id)descriptor;

@end
