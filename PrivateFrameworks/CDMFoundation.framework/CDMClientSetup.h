
@interface CDMClientSetup : NSObject <NSSecureCoding> {
    NSString * _activeServiceGraph;
    NSString * _assetDirPath;
    NSString * _embeddingVersion;
    NSString * _invocationSource;
    NSLocale * _localeIdentifier;
    NSUUID * _nlSetupId;
    NSArray * _overrideSiriVocabSpans;
    NSString * _sandboxId;
    NSString * _serviceStateDirectory;
    NSString * _serviceStateDirectorySandboxExtension;
}

@property (readonly) NSString *activeServiceGraph;
@property (readonly) NSString *assetDirPath;
@property (readonly) NSString *embeddingVersion;
@property (readonly) NSString *invocationSource;
@property (readonly) NSLocale *localeIdentifier;
@property (readonly) NSUUID *nlSetupId;
@property (readonly) NSArray *overrideSiriVocabSpans;
@property (readonly) NSString *sandboxId;
@property (readonly) NSString *serviceStateDirectory;
@property (readonly) NSString *serviceStateDirectorySandboxExtension;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeServiceGraph;
- (id)assetDirPath;
- (void)createSandboxExtensionForXPC;
- (id)description;
- (id)embeddingVersion;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocaleIdentifier:(id)arg1 embeddingVersion:(id)arg2 sandboxId:(id)arg3 activeServiceGraph:(id)arg4;
- (id)initWithLocaleIdentifier:(id)arg1 sandboxId:(id)arg2;
- (id)initWithLocaleIdentifier:(id)arg1 sandboxId:(id)arg2 activeServiceGraph:(id)arg3;
- (id)initWithLocaleIdentifier:(id)arg1 sandboxId:(id)arg2 activeServiceGraph:(id)arg3 assetDirPath:(id)arg4 overrideSiriVocabSpans:(id)arg5;
- (id)initWithLocaleIdentifier:(id)arg1 sandboxId:(id)arg2 activeServiceGraph:(id)arg3 assetDirPath:(id)arg4 overrideSiriVocabSpans:(id)arg5 serviceStateDirectory:(id)arg6;
- (id)initWithLocaleIdentifier:(id)arg1 sandboxId:(id)arg2 activeServiceGraph:(id)arg3 assetDirPath:(id)arg4 overrideSiriVocabSpans:(id)arg5 serviceStateDirectory:(id)arg6 embeddingVersion:(id)arg7 nlSetupId:(id)arg8 invocationSource:(id)arg9;
- (id)invocationSource;
- (id)localeIdentifier;
- (id)nlSetupId;
- (id)overrideSiriVocabSpans;
- (id)sandboxId;
- (id)serviceStateDirectory;
- (id)serviceStateDirectorySandboxExtension;

@end
