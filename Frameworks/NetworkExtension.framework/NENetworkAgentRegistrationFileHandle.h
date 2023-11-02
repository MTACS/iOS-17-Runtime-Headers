
@interface NENetworkAgentRegistrationFileHandle : NEFileHandle {
    unsigned long long  _agentFlags;
    NSUUID * _agentUUID;
    NSUUID * _configurationIdentifier;
    NSString * _name;
    NSNumber * _sessionType;
}

@property unsigned long long agentFlags;
@property (readonly) NSUUID *agentUUID;
@property (readonly) NSUUID *configurationIdentifier;
@property (readonly) NSString *name;
@property (readonly) NSNumber *sessionType;

- (void).cxx_destruct;
- (unsigned long long)agentFlags;
- (id)agentUUID;
- (id)configurationIdentifier;
- (id)description;
- (id)dictionary;
- (id)initFromDictionary:(id)arg1;
- (id)initWithNetworkAgentRegistration:(id)arg1 sessionType:(id)arg2 configurationIdentifier:(id)arg3 agentUUID:(id)arg4;
- (id)initWithNetworkAgentRegistration:(id)arg1 sessionType:(id)arg2 configurationIdentifier:(id)arg3 agentUUID:(id)arg4 name:(id)arg5;
- (id)name;
- (id)sessionType;
- (void)setAgentFlags:(unsigned long long)arg1;
- (unsigned long long)type;

@end
