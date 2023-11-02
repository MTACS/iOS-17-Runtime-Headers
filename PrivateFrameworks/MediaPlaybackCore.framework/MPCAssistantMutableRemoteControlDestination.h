
@interface MPCAssistantMutableRemoteControlDestination : MPCAssistantRemoteControlDestination

@property (nonatomic, copy) NSString *appBundleID;
@property (nonatomic, copy) NSArray *hashedOutputDeviceUIDs;
@property (nonatomic) void*origin;
@property (nonatomic) bool originatingDeviceControl;
@property (nonatomic, copy) NSString *originatingOutputDeviceUID;
@property (nonatomic, copy) NSArray *outputDeviceUIDs;
@property (nonatomic, copy) NSString *outputGroupID;
@property (nonatomic, copy) NSArray *outputGroups;
@property (nonatomic, copy) NSString *playerID;
@property (nonatomic) bool singleGroup;

- (void)setAppBundleID:(id)arg1;
- (void)setHashedOutputDeviceUIDs:(id)arg1;
- (void)setOrigin:(void*)arg1;
- (void)setOriginatingDeviceControl:(bool)arg1;
- (void)setOriginatingOutputDeviceUID:(id)arg1;
- (void)setOutputDeviceUIDs:(id)arg1;
- (void)setOutputGroupID:(id)arg1;
- (void)setOutputGroups:(id)arg1;
- (void)setPlayerID:(id)arg1;
- (void)setSingleGroup:(bool)arg1;

@end
