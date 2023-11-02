
@interface HMDNetworkRouterWANFirewallRuleList : NSObject <HAPTLVProtocol, NSCopying> {
    NSMutableArray * _icmpRules;
    NSMutableArray * _portRules;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *icmpRules;
@property (nonatomic, retain) NSMutableArray *portRules;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)icmpRules;
- (id)init;
- (id)initWithPortRules:(id)arg1 icmpRules:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)portRules;
- (id)serializeWithError:(id*)arg1;
- (void)setIcmpRules:(id)arg1;
- (void)setPortRules:(id)arg1;

@end
