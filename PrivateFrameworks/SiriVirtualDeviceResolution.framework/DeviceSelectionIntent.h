
@interface DeviceSelectionIntent : INIntent

@property (nonatomic, copy) NSString *intentType;
@property (nonatomic) long long interactionType;
@property (nonatomic, copy) NSString *remoteDeviceID;
@property (nonatomic, copy) NSDateComponents *requestTime;
@property (nonatomic, copy) NSString *roomName;
@property (nonatomic, copy) NSString *voiceID;

+ (bool)supportsSecureCoding;

@end
