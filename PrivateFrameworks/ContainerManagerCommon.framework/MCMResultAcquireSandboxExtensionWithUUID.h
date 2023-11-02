
@interface MCMResultAcquireSandboxExtensionWithUUID : MCMResultBase {
    NSString * _personaUniqueString;
    const char * _sandboxToken;
    NSURL * _url;
}

@property (nonatomic, readonly) NSString *personaUniqueString;
@property (nonatomic, readonly) const char *sandboxToken;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)encodeResultOntoReply:(id)arg1;
- (id)initWithSandboxToken:(const char *)arg1 personaUniqueString:(id)arg2 url:(id)arg3;
- (id)personaUniqueString;
- (const char *)sandboxToken;
- (id)url;

@end
