
@interface BlastDoorAPSQuickRelayPluginRequest : NSObject {
    void aPSQuickRelayPluginRequest;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) bool has_pluginDevMode;
@property (nonatomic, readonly) bool has_pluginStream;
@property (nonatomic, readonly) NSString *pluginConfig;
@property (nonatomic, readonly) bool pluginDevMode;
@property (nonatomic, readonly) NSString *pluginName;
@property (nonatomic, readonly) long long pluginStream;

- (void).cxx_destruct;
- (id)description;
- (bool)has_pluginDevMode;
- (bool)has_pluginStream;
- (id)init;
- (id)pluginConfig;
- (bool)pluginDevMode;
- (id)pluginName;
- (long long)pluginStream;

@end
