
@interface LiveFSMounterClientHelper : NSObject <LiveFSMounterClient, LiveFSMounterClientHelper> {
    NSString * _providerName;
}

@property (retain) NSString *providerName;

- (void).cxx_destruct;
- (void)LiveMounterClientCreateDomain:(id)arg1 displayName:(id)arg2 how:(int)arg3 storageName:(id)arg4 reply:(id /* block */)arg5;
- (void)createDomain:(id)arg1 displayName:(id)arg2 how:(int)arg3 reply:(id /* block */)arg4;
- (void)createDomain:(id)arg1 how:(int)arg2 reply:(id /* block */)arg3;
- (id)destroyDomain:(id)arg1;
- (void)internalSetProviderName:(id)arg1;
- (id)providerName;
- (void)setProviderName:(id)arg1;

@end
