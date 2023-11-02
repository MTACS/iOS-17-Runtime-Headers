
@interface NENexus : NSObject <NENexusAgentDelegate> {
    NENexusAgent * _agent;
    bool  _asserted;
    NSMutableDictionary * _assertions;
    unsigned long long  _availability;
    NSObject<NENexusDelegate> * _delegate;
    NSArray * _dnsServerAddresses;
    NENexusFlowManager * _flowManager;
    NSMutableDictionary * _kernelNexusClientFlows;
    unsigned long long  _level;
    NSArray * _localAddresses;
    unsigned long long  _maximumTransmissionUnit;
    NSString * _name;
    NEPolicySession * _policySession;
    NSObject<OS_nw_nexus> * _userNexus;
    NSMutableDictionary * _userNexusClientCount;
    NSMutableDictionary * _userNexusClientFlows;
    NSMutableDictionary * _userNexusInstances;
    struct NEVirtualInterface_s { } * _virtualInterface;
}

@property (getter=isAsserted) bool asserted;
@property (nonatomic) unsigned long long availability;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *dnsServerAddresses;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *interfaceName;
@property (readonly) unsigned long long level;
@property (nonatomic, retain) NSArray *localAddresses;
@property (nonatomic) unsigned long long maximumTransmissionUnit;
@property (readonly) NSString *name;
@property (readonly) Class superclass;
@property struct NEVirtualInterface_s { }*virtualInterface;

- (void).cxx_destruct;
- (unsigned long long)availability;
- (void)cancel;
- (void)closeFlowWithClientIdentifier:(id)arg1;
- (void)dealloc;
- (id)dnsServerAddresses;
- (void)handleAssertFromClient:(id)arg1;
- (bool)handleRequestNexusFromClient:(id)arg1;
- (void)handleStartFromClient:(id)arg1;
- (void)handleUnassertFromClient:(id)arg1;
- (id)initWithLevel:(unsigned long long)arg1 name:(id)arg2 virtualInterfaceType:(long long)arg3 delegate:(id)arg4 channelCount:(unsigned int)arg5;
- (id)initWithLevel:(unsigned long long)arg1 name:(id)arg2 virtualInterfaceType:(long long)arg3 delegate:(id)arg4 channelCount:(unsigned int)arg5 netifRingSize:(unsigned int)arg6 kernelPipeTxRingSize:(unsigned int)arg7 kernelPipeRxRingSize:(unsigned int)arg8 execUUID:(id)arg9;
- (id)initWithName:(id)arg1 delegate:(id)arg2;
- (id)interfaceName;
- (bool)isAsserted;
- (unsigned long long)level;
- (id)localAddresses;
- (unsigned long long)maximumTransmissionUnit;
- (id)name;
- (void)setAsserted:(bool)arg1;
- (void)setAvailability:(unsigned long long)arg1;
- (void)setDnsServerAddresses:(id)arg1;
- (void)setLocalAddresses:(id)arg1;
- (void)setMaximumTransmissionUnit:(unsigned long long)arg1;
- (void)setVirtualInterface:(struct NEVirtualInterface_s { }*)arg1;
- (struct NEVirtualInterface_s { }*)virtualInterface;

@end
