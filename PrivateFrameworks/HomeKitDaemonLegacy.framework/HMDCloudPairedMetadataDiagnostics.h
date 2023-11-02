
@interface HMDCloudPairedMetadataDiagnostics : HMFObject {
    HMDNetworkRouterFirewallRuleAccessoryIdentifier * _accessoryIdentifier;
    unsigned long long  _consentVersion;
    NSURL * _privacyPolicyURL;
    NSURL * _uploadDestination;
    unsigned long long  _uploadType;
}

@property (nonatomic, readonly) HMDNetworkRouterFirewallRuleAccessoryIdentifier *accessoryIdentifier;
@property (nonatomic, readonly) unsigned long long consentVersion;
@property (nonatomic, readonly) NSDictionary *prettyJSONDictionary;
@property (nonatomic, readonly) NSURL *privacyPolicyURL;
@property (nonatomic, readonly) NSURL *uploadDestination;
@property (nonatomic, readonly) unsigned long long uploadType;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)accessoryIdentifier;
- (id)attributeDescriptions;
- (unsigned long long)consentVersion;
- (id)initWithAccessoryIdentifier:(id)arg1 jsonDictionary:(id)arg2;
- (id)initWithAccessoryIdentifier:(id)arg1 privacyPolicyURL:(id)arg2 uploadDestination:(id)arg3 consentVersion:(unsigned long long)arg4 uploadType:(unsigned long long)arg5;
- (id)prettyJSONDictionary;
- (id)privacyPolicyURL;
- (id)uploadDestination;
- (unsigned long long)uploadType;

@end
