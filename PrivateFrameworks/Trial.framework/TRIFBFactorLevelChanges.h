
@interface TRIFBFactorLevelChanges : NSObject {
    unsigned char  _changeTypeAlias;
    unsigned char  _changeTypeCacheKey;
    unsigned char  _changeTypeFactorId;
    unsigned char  _changeTypeFactorNamespaceName;
    unsigned char  _changeTypeLevel;
    unsigned char  _changeTypeMetadata;
    unsigned char  _changeTypeName;
    unsigned char  _changeTypeNamespaceId;
    unsigned int  _replacementAlias;
    unsigned int  _replacementCacheKey;
    unsigned int  _replacementFactorId;
    unsigned int  _replacementFactorNamespaceName;
    unsigned int  _replacementLevel;
    unsigned char  _replacementLevelType;
    unsigned int  _replacementMetadata;
    unsigned int  _replacementName;
    unsigned int  _replacementNamespaceId;
}

- (void)omitAlias;
- (void)omitCacheKey;
- (void)omitFactorId;
- (void)omitFactorNamespaceName;
- (void)omitNamespaceId;
- (void)preserveAlias;
- (void)preserveCacheKey;
- (void)preserveFactorId;
- (void)preserveFactorNamespaceName;
- (void)preserveLevel;
- (void)preserveMetadata;
- (void)preserveName;
- (void)preserveNamespaceId;
- (void)replaceAlias:(id)arg1;
- (void)replaceCacheKey:(unsigned int)arg1;
- (void)replaceFactorId:(id)arg1;
- (void)replaceFactorNamespaceName:(id)arg1;
- (void)replaceLevelWithBoolVal:(id)arg1;
- (void)replaceLevelWithDoubleVal:(id)arg1;
- (void)replaceLevelWithInt64Val:(id)arg1;
- (void)replaceLevelWithMaRefVal:(id)arg1;
- (void)replaceLevelWithStringVal:(id)arg1;
- (void)replaceLevelWithTrialAssetVal:(id)arg1;
- (void)replaceMetadata:(id)arg1;
- (void)replaceName:(id)arg1;
- (void)replaceNamespaceId:(unsigned int)arg1;

@end
