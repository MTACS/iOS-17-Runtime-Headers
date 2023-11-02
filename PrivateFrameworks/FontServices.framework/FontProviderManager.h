
@interface FontProviderManager : NSObject {
    NSDictionary * _appSubscriptionIndo;
    NSXPCConnection * _connection;
}

@property (nonatomic, retain) NSDictionary *appSubscriptionIndo;
@property (nonatomic, retain) NSXPCConnection *connection;

+ (void)registerFonts:(id)arg1 enabled:(bool)arg2 completionHandler:(id /* block */)arg3;
+ (id)registeredFontsInfo:(bool)arg1;
+ (id)sharedManager;
+ (void)unregisterFonts:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)updateAppInfo;

- (void).cxx_destruct;
- (void)_registerFonts:(id)arg1 enabled:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_unregisterFonts:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateAppInfo;
- (id)appSubscriotionInfo;
- (id)appSubscriptionIndo;
- (struct { unsigned int x1[8]; })auditToken;
- (id)connection;
- (id)init;
- (id)normalizeURLs:(id)arg1 addSandboxExtension:(bool)arg2;
- (void)ping;
- (id)registeredFontsInfo:(bool)arg1;
- (void)setAppSubscriptionIndo:(id)arg1;
- (void)setConnection:(id)arg1;

@end
