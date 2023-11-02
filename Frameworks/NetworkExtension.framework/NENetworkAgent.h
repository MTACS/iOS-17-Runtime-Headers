
@interface NENetworkAgent : NSObject <NWNetworkAgent> {
    NSString * _configurationName;
    int  _internalSessionType;
    id /* block */  _internalStartHandler;
    NSUUID * _internalUUID;
    int  _lastStatus;
    NSString * _name;
    bool  active;
    NSString * agentDescription;
    NSUUID * agentUUID;
    bool  kernelActivated;
    bool  userActivated;
    bool  voluntary;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, copy) NSString *agentDescription;
@property (nonatomic, copy) NSUUID *agentUUID;
@property (copy) NSString *configurationName;
@property (readonly, copy) NSUUID *configurationUUID;
@property (getter=isKernelActivated, nonatomic) bool kernelActivated;
@property int lastStatus;
@property (getter=isNetworkProvider, nonatomic) bool networkProvider;
@property (getter=isNexusProvider, nonatomic) bool nexusProvider;
@property (nonatomic) bool requiresAssert;
@property (readonly) int sessionType;
@property (getter=isSpecificUseOnly, nonatomic) bool specificUseOnly;
@property (nonatomic) bool supportsBrowseRequests;
@property (nonatomic) bool supportsListenRequests;
@property (nonatomic) bool supportsResolveRequests;
@property (nonatomic) bool updateClientsImmediately;
@property (getter=isUserActivated, nonatomic) bool userActivated;
@property (getter=isVoluntary, nonatomic) bool voluntary;

+ (id)agentDomain;
+ (id)agentFromData:(id)arg1;
+ (id)agentType;

- (void).cxx_destruct;
- (id)agentDescription;
- (id)agentUUID;
- (id)configurationName;
- (id)configurationUUID;
- (id)copyAgentData;
- (id)initWithConfigUUID:(id)arg1 sessionType:(int)arg2 name:(id)arg3;
- (bool)isActive;
- (bool)isKernelActivated;
- (bool)isUserActivated;
- (bool)isVoluntary;
- (int)lastStatus;
- (bool)matchesFileHandle:(id)arg1;
- (int)sessionType;
- (void)setActive:(bool)arg1;
- (void)setAgentDescription:(id)arg1;
- (void)setAgentUUID:(id)arg1;
- (void)setConfigurationName:(id)arg1;
- (void)setKernelActivated:(bool)arg1;
- (void)setLastStatus:(int)arg1;
- (void)setStartHandler:(id /* block */)arg1;
- (void)setUserActivated:(bool)arg1;
- (void)setVoluntary:(bool)arg1;
- (bool)startAgentWithOptions:(id)arg1;

@end
