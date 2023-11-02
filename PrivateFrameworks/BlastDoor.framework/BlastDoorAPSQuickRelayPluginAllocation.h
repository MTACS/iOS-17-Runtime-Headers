
@interface BlastDoorAPSQuickRelayPluginAllocation : NSObject {
    void aPSQuickRelayPluginAllocation;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) bool has_participantId;
@property (nonatomic, readonly) bool has_pluginStream;
@property (nonatomic, readonly) unsigned long long participantId;
@property (nonatomic, readonly) NSString *pluginName;
@property (nonatomic, readonly) long long pluginStream;
@property (nonatomic, readonly) NSData *relayAccessToken;
@property (nonatomic, readonly) NSData *relaySessionKey;

- (void).cxx_destruct;
- (id)description;
- (bool)has_participantId;
- (bool)has_pluginStream;
- (id)init;
- (unsigned long long)participantId;
- (id)pluginName;
- (long long)pluginStream;
- (id)relayAccessToken;
- (id)relaySessionKey;

@end
