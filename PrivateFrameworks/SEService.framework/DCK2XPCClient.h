
@interface DCK2XPCClient : NSObject {
    NSXPCConnection * connection;
}

+ (id)sharedClient;

- (void).cxx_destruct;
- (id)connectToService;
- (void)connectionResetHandler;
- (id)enableSMB:(id)arg1 error:(id*)arg2;
- (id)getROP:(id*)arg1;
- (id)passThrough:(id)arg1 keyIdentifier:(id)arg2;
- (id)requestBTPairing:(id)arg1;
- (id)setUWBConfigData:(id)arg1;
- (id)setUWBDebugOptions:(unsigned long long)arg1;
- (id)setUWBStartTimeOffsetMS:(unsigned long long)arg1;
- (id)suspendRanging:(id)arg1;

@end
