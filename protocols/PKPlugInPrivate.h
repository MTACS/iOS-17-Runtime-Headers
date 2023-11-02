
@protocol PKPlugInPrivate <PKPlugIn>

@required

- (void)beginUsingRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: <PKLaunchRequest> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)beginUsingRequest:(id <PKLaunchRequest>)arg1 error:(id*)arg2;
- (void)beginUsingRequest:(void *)arg1 withSubsystemOptions:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: <PKLaunchRequest> *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)beginUsingRequest:(id <PKLaunchRequest>)arg1 withSubsystemOptions:(NSDictionary *)arg2 error:(id*)arg3;
- (void)endUsingRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: <PKLaunchRequest> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)endUsingRequest:(id <PKLaunchRequest>)arg1 error:(id*)arg2;
- (NSDictionary *)environment;
- (unsigned int)extensionPointPlatform;
- (NSDictionary *)extensionState;
- (NSArray *)launchPersonas;
- (NSXPCConnection *)pluginConnection;
- (NSArray *)preferredLanguages;
- (NSString *)sandboxProfile;
- (void)setEnvironment:(NSDictionary *)arg1;
- (void)setExtensionState:(NSDictionary *)arg1;
- (void)setPreferredLanguages:(NSArray *)arg1;
- (void)setSandboxProfile:(NSString *)arg1;
- (NSDate *)timestamp;
- (NSUUID *)uuid;

@end
