
@interface NENexusAgent : NSObject <NWNetworkAgent> {
    NSObject<NENexusAgentDelegate> * _delegate;
    unsigned int  _frameType;
    NWNetworkAgentRegistration * _registration;
    bool  active;
    NSString * agentDescription;
    NSUUID * agentUUID;
    bool  nexusProvider;
    bool  supportsBrowseRequests;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, copy) NSString *agentDescription;
@property (nonatomic, copy) NSUUID *agentUUID;
@property (getter=isKernelActivated, nonatomic) bool kernelActivated;
@property (getter=isNetworkProvider, nonatomic) bool networkProvider;
@property (getter=isNexusProvider, nonatomic) bool nexusProvider;
@property (nonatomic) bool requiresAssert;
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
- (bool)assertAgentWithOptions:(id)arg1;
- (void)closeNexusWithOptions:(id)arg1;
- (id)copyAgentData;
- (bool)isActive;
- (bool)isKernelActivated;
- (bool)isNetworkProvider;
- (bool)isNexusProvider;
- (bool)isSpecificUseOnly;
- (bool)isUserActivated;
- (bool)isVoluntary;
- (bool)requestNexusWithOptions:(id)arg1;
- (void)setActive:(bool)arg1;
- (void)setAgentDescription:(id)arg1;
- (void)setAgentUUID:(id)arg1;
- (void)setKernelActivated:(bool)arg1;
- (void)setNetworkProvider:(bool)arg1;
- (void)setNexusProvider:(bool)arg1;
- (void)setSpecificUseOnly:(bool)arg1;
- (void)setSupportsBrowseRequests:(bool)arg1;
- (void)setUserActivated:(bool)arg1;
- (void)setVoluntary:(bool)arg1;
- (bool)startAgentWithOptions:(id)arg1;
- (bool)supportsBrowseRequests;
- (void)unassertAgentWithOptions:(id)arg1;

@end
