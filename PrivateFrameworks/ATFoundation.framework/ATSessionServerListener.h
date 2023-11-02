
@interface ATSessionServerListener : NSObject <ATSessionServer, NSXPCListenerDelegate> {
    NSXPCListener * _listener;
    NSMutableDictionary * _sessionProxiesBySessionID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedSessionServer;

- (void).cxx_destruct;
- (void)_dumpDebugInformation;
- (void)addSession:(id)arg1;
- (void)cancelSessionWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchActiveSessionCountForSessionTypeIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchSessionsWithTypeIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)removeSession:(id)arg1;
- (void)start;
- (void)stop;

@end