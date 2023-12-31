
@interface SACFClientFlowScript : SABaseAceObject

@property (nonatomic, copy) NSData *compressedScript;
@property (nonatomic, retain) SACFScriptEncryptionParameters *encryptionParameters;
@property (nonatomic, copy) NSString *fileContentType;
@property (nonatomic, copy) NSString *jsScript;
@property (nonatomic, copy) NSData *jsScriptChecksum;
@property (nonatomic, copy) NSString *jsScriptIdentifier;
@property (nonatomic) bool shouldCacheScript;
@property (nonatomic) bool shouldSkipExecution;
@property (nonatomic, retain) SACFScriptUrlInformation *urlInformation;

+ (id)clientFlowScript;
+ (id)clientFlowScriptWithDictionary:(id)arg1 context:(id)arg2;

- (id)compressedScript;
- (id)encodedClassName;
- (id)encryptionParameters;
- (id)fileContentType;
- (id)groupIdentifier;
- (id)jsScript;
- (id)jsScriptChecksum;
- (id)jsScriptIdentifier;
- (void)setCompressedScript:(id)arg1;
- (void)setEncryptionParameters:(id)arg1;
- (void)setFileContentType:(id)arg1;
- (void)setJsScript:(id)arg1;
- (void)setJsScriptChecksum:(id)arg1;
- (void)setJsScriptIdentifier:(id)arg1;
- (void)setShouldCacheScript:(bool)arg1;
- (void)setShouldSkipExecution:(bool)arg1;
- (void)setUrlInformation:(id)arg1;
- (bool)shouldCacheScript;
- (bool)shouldSkipExecution;
- (id)urlInformation;

@end
