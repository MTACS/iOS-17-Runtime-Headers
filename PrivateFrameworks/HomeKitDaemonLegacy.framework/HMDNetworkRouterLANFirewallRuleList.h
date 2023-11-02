
@interface HMDNetworkRouterLANFirewallRuleList : NSObject <HAPTLVProtocol, NSCopying> {
    NSMutableArray * _dynamicPortRules;
    NSMutableArray * _multicastBridgingRules;
    NSMutableArray * _staticICMPRules;
    NSMutableArray * _staticPortRules;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *dynamicPortRules;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *multicastBridgingRules;
@property (nonatomic, retain) NSMutableArray *staticICMPRules;
@property (nonatomic, retain) NSMutableArray *staticPortRules;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dynamicPortRules;
- (id)init;
- (id)initWithMulticastBridgingRules:(id)arg1 staticPortRules:(id)arg2 dynamicPortRules:(id)arg3 staticICMPRules:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)multicastBridgingRules;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setDynamicPortRules:(id)arg1;
- (void)setMulticastBridgingRules:(id)arg1;
- (void)setStaticICMPRules:(id)arg1;
- (void)setStaticPortRules:(id)arg1;
- (id)staticICMPRules;
- (id)staticPortRules;

@end
