
@interface PKWebServiceSharingFeature : PKWebServiceRegionFeature {
    NSArray * _activationCodeConfigurations;
    NSArray * _allowedRelayServerHosts;
    bool  _enabled;
    NSDictionary * _openGraphPreviewUrls;
    NSString * _relayServerHost;
    NSArray * _relayServerHostsToHandleUniversalLinks;
    unsigned long long  _relayServerPasswordLength;
    NSURL * _staticContentBaseURL;
}

@property (nonatomic, readonly) NSArray *activationCodeConfigurations;
@property (nonatomic, readonly) NSArray *allowedRelayServerHosts;
@property (nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) NSDictionary *openGraphPreviewUrls;
@property (nonatomic, readonly) NSString *relayServerHost;
@property (nonatomic, readonly) NSArray *relayServerHostsToHandleUniversalLinks;
@property (nonatomic, readonly) unsigned long long relayServerPasswordLength;
@property (nonatomic, readonly) NSURL *staticContentBaseURL;

- (void).cxx_destruct;
- (id)activationCodeConfigurations;
- (id)allowedRelayServerHosts;
- (bool)enabled;
- (id)initWithDictionary:(id)arg1 region:(id)arg2;
- (id)openGraphPreviewUrls;
- (id)relayServerHost;
- (id)relayServerHostsToHandleUniversalLinks;
- (unsigned long long)relayServerPasswordLength;
- (id)staticContentBaseURL;

@end
