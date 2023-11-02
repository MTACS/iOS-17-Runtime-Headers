
@interface LiveFSMountClient : NSObject {
    NSXPCConnection * conn;
    NSObject<LiveFSMounterClient><LiveFSMounterClientHelper> * helper;
    NSString * provider;
}

+ (id)newClient;
+ (id)newClientForProvider:(id)arg1;

- (void).cxx_destruct;
- (id)allMounts:(id*)arg1;
- (id)fixupConnectionFor:(id)arg1;
- (id)initWithProvider:(id)arg1;
- (id)mountVolume:(id)arg1 displayName:(id)arg2 provider:(id)arg3 domainError:(id)arg4 on:(id)arg5 how:(int)arg6;
- (id)mountVolume:(id)arg1 displayName:(id)arg2 provider:(id)arg3 domainError:(id)arg4 on:(id)arg5 how:(unsigned long long)arg6 options:(id)arg7;
- (id)mountVolume:(id)arg1 displayName:(id)arg2 provider:(id)arg3 on:(id)arg4 how:(int)arg5;
- (id)mountVolume:(id)arg1 provider:(id)arg2 on:(id)arg3 how:(int)arg4;
- (id)mounts:(id*)arg1;
- (id)setVerboseLevel:(int)arg1;
- (id)unmountVolume:(id)arg1 how:(int)arg2;
- (id)unmountVolumeByID:(unsigned int)arg1 how:(int)arg2;
- (void)unmountVolumeNamed:(id)arg1 providerName:(id)arg2 domainError:(id)arg3 how:(int)arg4 reply:(id /* block */)arg5;
- (id)updateErrorStateForVolume:(id)arg1 provider:(id)arg2 domainError:(id)arg3;
- (int)verboseLevelOrError:(id*)arg1;

@end
