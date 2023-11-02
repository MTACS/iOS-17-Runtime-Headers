
@interface POUIAgentProcess : NSObject <POUIServiceProtocol> {
    POAgentAuthenticationProcess * _agentProcess;
    SOConfigurationHost * _configurationHost;
    POConfigurationManager * _configurationManager;
    id /* block */  _invalidationHandler;
    NSXPCConnection * _xpcConnection;
}

@property (retain) POAgentAuthenticationProcess *agentProcess;
@property (retain) SOConfigurationHost *configurationHost;
@property (retain) POConfigurationManager *configurationManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) id /* block */ invalidationHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)agentProcess;
- (id)configurationHost;
- (id)configurationManager;
- (void)connectionInvalidated;
- (void)deviceStatusWithCompletion:(id /* block */)arg1;
- (id)initWithXPCConnection:(id)arg1 authenticationProcess:(id)arg2;
- (id /* block */)invalidationHandler;
- (void)setAgentProcess:(id)arg1;
- (void)setConfigurationHost:(id)arg1;
- (void)setConfigurationManager:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)startAction:(long long)arg1 forUserName:(id)arg2 completion:(id /* block */)arg3;
- (void)startDeviceAction:(long long)arg1 completion:(id /* block */)arg2;
- (void)statusForUser:(id)arg1 completion:(id /* block */)arg2;

@end
