
@interface RMModelConfigurationBase : RMModelDeclarationBase <AuthenticationServicesCore.RMModelSecurityPasskeyAttestationDeclarationForwardDeclaration>

+ (id)assetTypes;
+ (id)combineArrayAppend:(id)arg1 other:(id)arg2;
+ (id)combineBooleanAnd:(id)arg1 other:(id)arg2;
+ (id)combineBooleanOr:(id)arg1 other:(id)arg2;
+ (id)combineDictionary:(id)arg1 other:(id)arg2;
+ (id)combineEnumHighest:(id)arg1 other:(id)arg2 enums:(id)arg3;
+ (id)combineEnumLowest:(id)arg1 other:(id)arg2 enums:(id)arg3;
+ (id)combineFirst:(id)arg1 other:(id)arg2;
+ (id)combineNumberMax:(id)arg1 other:(id)arg2;
+ (id)combineNumberMin:(id)arg1 other:(id)arg2;
+ (id)combineSetIntersection:(id)arg1 other:(id)arg2;
+ (id)combineSetUnion:(id)arg1 other:(id)arg2;
+ (bool)usesKeychainAssets;

- (id)assetReferences;
- (id)declarationClassType;

@end
