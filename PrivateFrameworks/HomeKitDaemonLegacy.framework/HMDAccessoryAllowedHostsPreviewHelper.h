
@interface HMDAccessoryAllowedHostsPreviewHelper : HMFObject <HMDNetworkRouterFirewallRuleManagerClient> {
    NSDate * _expires;
    HMDNetworkRouterFirewallRuleManager * _firewallRuleManager;
    HMDHome * _home;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)helperForHome:(id)arg1;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (void)fetchAllowedHostsForAccessory:(id)arg1 completion:(id /* block */)arg2;
- (id)watchedAccessoryIdentifiersForFirewallRuleManager:(id)arg1;

@end
