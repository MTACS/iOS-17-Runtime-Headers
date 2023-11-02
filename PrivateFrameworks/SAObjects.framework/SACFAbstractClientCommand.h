
@interface SACFAbstractClientCommand : SADomainCommand

@property (nonatomic, copy) NSString *domain;
@property (nonatomic, copy) NSString *jsFileNameSuffix;
@property (nonatomic, copy) NSArray *jsLibraries;
@property (nonatomic, copy) NSString *jsParameters;
@property (nonatomic, copy) NSString *jsScript;
@property (nonatomic) bool shouldCacheBytecode;
@property (nonatomic) bool shouldCacheScript;
@property (nonatomic) bool shouldRestartContext;

+ (id)abstractClientCommand;
+ (id)abstractClientCommandWithDictionary:(id)arg1 context:(id)arg2;

- (id)domain;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)jsFileNameSuffix;
- (id)jsLibraries;
- (id)jsParameters;
- (id)jsScript;
- (bool)requiresResponse;
- (void)setDomain:(id)arg1;
- (void)setJsFileNameSuffix:(id)arg1;
- (void)setJsLibraries:(id)arg1;
- (void)setJsParameters:(id)arg1;
- (void)setJsScript:(id)arg1;
- (void)setShouldCacheBytecode:(bool)arg1;
- (void)setShouldCacheScript:(bool)arg1;
- (void)setShouldRestartContext:(bool)arg1;
- (bool)shouldCacheBytecode;
- (bool)shouldCacheScript;
- (bool)shouldRestartContext;

@end
