
@interface SASidekickHubDeviceInfo : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *accessoryIdentifier;
@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *hubDeviceType;
@property (nonatomic, copy) NSString *hubUserId;
@property (nonatomic) bool mediaPlaybackEnabled;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSString *sidekickBrand;
@property (nonatomic, copy) NSString *sidekickDeviceType;
@property (readonly) Class superclass;

- (id)accessoryIdentifier;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)hubDeviceType;
- (id)hubUserId;
- (bool)mediaPlaybackEnabled;
- (bool)requiresResponse;
- (void)setAccessoryIdentifier:(id)arg1;
- (void)setHubDeviceType:(id)arg1;
- (void)setHubUserId:(id)arg1;
- (void)setMediaPlaybackEnabled:(bool)arg1;
- (void)setSidekickBrand:(id)arg1;
- (void)setSidekickDeviceType:(id)arg1;
- (id)sidekickBrand;
- (id)sidekickDeviceType;

@end
