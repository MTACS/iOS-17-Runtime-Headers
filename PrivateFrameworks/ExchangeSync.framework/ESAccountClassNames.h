
@interface ESAccountClassNames : NSObject {
    NSString * _accountClassName;
    NSString * _agentClassName;
    NSString * _clientAccountClassName;
    NSString * _daemonAccountClassName;
}

@property (nonatomic, retain) NSString *accountClassName;
@property (nonatomic, retain) NSString *agentClassName;
@property (nonatomic, retain) NSString *clientAccountClassName;
@property (nonatomic, retain) NSString *daemonAccountClassName;

- (void).cxx_destruct;
- (id)accountClassName;
- (id)agentClassName;
- (id)clientAccountClassName;
- (id)daemonAccountClassName;
- (id)description;
- (void)setAccountClassName:(id)arg1;
- (void)setAgentClassName:(id)arg1;
- (void)setClientAccountClassName:(id)arg1;
- (void)setDaemonAccountClassName:(id)arg1;

@end
