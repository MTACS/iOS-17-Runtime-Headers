
@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorLocalZoneID : HMFObject <HMBLocalZoneID> {
    NSData * _token;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSData *token;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithToken:(id)arg1;
- (id)labels;
- (id)name;
- (id)token;

@end
