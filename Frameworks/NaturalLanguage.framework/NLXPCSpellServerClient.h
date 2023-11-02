
@interface NLXPCSpellServerClient : NSObject {
    NSXPCConnection * _connection;
    bool  _invalidated;
    NSString * _serverName;
}

+ (void)requestAssetsForLanguage:(id)arg1;
+ (id)spellServerClient;

- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (id)initWithServerName:(id)arg1;
- (bool)isValid;
- (void)sendCommand:(id)arg1;
- (id)serverName;

@end
