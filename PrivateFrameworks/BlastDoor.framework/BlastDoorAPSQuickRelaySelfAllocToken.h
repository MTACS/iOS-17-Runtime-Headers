
@interface BlastDoorAPSQuickRelaySelfAllocToken : NSObject {
    void aPSQuickRelaySelfAllocToken;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) bool has_relayPort;
@property (nonatomic, readonly) bool has_relayProvider;
@property (nonatomic, readonly) NSData *relayAccessToken;
@property (nonatomic, readonly) NSData *relayIp;
@property (nonatomic, readonly) NSData *relayIpv6;
@property (nonatomic, readonly) long long relayPort;
@property (nonatomic, readonly) long long relayProvider;
@property (nonatomic, readonly) NSData *relaySessionId;
@property (nonatomic, readonly) NSData *relaySessionKey;

- (void).cxx_destruct;
- (id)description;
- (bool)has_relayPort;
- (bool)has_relayProvider;
- (id)init;
- (id)relayAccessToken;
- (id)relayIp;
- (id)relayIpv6;
- (long long)relayPort;
- (long long)relayProvider;
- (id)relaySessionId;
- (id)relaySessionKey;

@end
