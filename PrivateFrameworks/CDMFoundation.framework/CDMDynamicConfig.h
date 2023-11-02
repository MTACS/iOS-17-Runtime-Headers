
@interface CDMDynamicConfig : NSObject <NSCopying> {
    CDMNLAssetCollection * _assetCollection;
    NSString * _assetDirPath;
    CDMEmbeddingConfigs * _embeddingConfigs;
    NSString * _embeddingVersion;
    NSString * _graphName;
    NSString * _languageCode;
    NSArray * _overrideContextualSpans;
    NSArray * _overrideMentions;
    NSArray * _overrideSiriVocabSpans;
    NSString * _serviceStateDirectory;
    NSString * _siriVocabularySandboxId;
}

@property (nonatomic, readonly) CDMNLAssetCollection *assetCollection;
@property (nonatomic, readonly) NSString *assetDirPath;
@property (nonatomic, readonly) CDMEmbeddingConfigs *embeddingConfigs;
@property (nonatomic, readonly) NSString *embeddingVersion;
@property (nonatomic, readonly) NSString *graphName;
@property (nonatomic, readonly) NSString *languageCode;
@property (nonatomic, readonly) NSArray *overrideContextualSpans;
@property (nonatomic, readonly) NSArray *overrideMentions;
@property (nonatomic, readonly) NSArray *overrideSiriVocabSpans;
@property (nonatomic, readonly) NSString *serviceStateDirectory;
@property (nonatomic, readonly) NSString *siriVocabularySandboxId;

+ (id)resolveActiveGraph:(id)arg1;

- (void).cxx_destruct;
- (id)assetCollection;
- (id)assetDirPath;
- (id)assetPaths;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)embeddingConfigs;
- (id)embeddingVersion;
- (id)getAssetBundlePathForFactorName:(id)arg1;
- (id)getAssetForFactorName:(id)arg1;
- (id)graphName;
- (unsigned long long)hash;
- (id)initWithLanguageCode:(id)arg1;
- (id)initWithLanguageCode:(id)arg1 embeddingVersion:(id)arg2 graphName:(id)arg3 sandboxId:(id)arg4 assetPaths:(id)arg5 assetDirPath:(id)arg6 overrideSiriVocabSpans:(id)arg7 overrideMentions:(id)arg8 overrideContextualSpans:(id)arg9 serviceStateDirectory:(id)arg10;
- (id)initWithLanguageCode:(id)arg1 graphName:(id)arg2 sandboxId:(id)arg3 assetDirPath:(id)arg4;
- (id)initWithLanguageCode:(id)arg1 graphName:(id)arg2 sandboxId:(id)arg3 assetDirPath:(id)arg4 overrideSiriVocabSpans:(id)arg5 overrideMentions:(id)arg6 overrideContextualSpans:(id)arg7;
- (id)initWithLanguageCode:(id)arg1 graphName:(id)arg2 sandboxId:(id)arg3 assetPaths:(id)arg4;
- (id)initWithLanguageCode:(id)arg1 graphName:(id)arg2 sandboxId:(id)arg3 assetPaths:(id)arg4 assetDirPath:(id)arg5 overrideSiriVocabSpans:(id)arg6 overrideMentions:(id)arg7 overrideContextualSpans:(id)arg8 serviceStateDirectory:(id)arg9;
- (id)initWithLanguageCode:(id)arg1 graphName:(id)arg2 sandboxId:(id)arg3 assetPaths:(id)arg4 overrideSiriVocabSpans:(id)arg5 overrideMentions:(id)arg6 overrideContextualSpans:(id)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isEqualWithoutSandboxId:(id)arg1;
- (id)languageCode;
- (id)overrideContextualSpans;
- (id)overrideMentions;
- (id)overrideSiriVocabSpans;
- (id)serviceStateDirectory;
- (void)setAssetCollection:(id)arg1;
- (void)setAssetDirPath:(id)arg1;
- (void)setAssetPaths:(id)arg1;
- (void)setEmbeddingConfigs:(id)arg1;
- (void)setEmbeddingVersion:(id)arg1;
- (void)setGraphName:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setOverrideContextualSpans:(id)arg1;
- (void)setOverrideMentions:(id)arg1;
- (void)setOverrideSiriVocabSpans:(id)arg1;
- (void)setServiceStateDirectory:(id)arg1;
- (void)setSiriVocabularySandboxId:(id)arg1;
- (id)siriVocabularySandboxId;

@end
