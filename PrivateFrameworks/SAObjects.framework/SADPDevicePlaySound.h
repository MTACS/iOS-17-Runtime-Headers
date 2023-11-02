
@interface SADPDevicePlaySound : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *action;
@property (nonatomic, copy) NSArray *devices;

+ (id)devicePlaySound;
+ (id)devicePlaySoundWithDictionary:(id)arg1 context:(id)arg2;

- (id)action;
- (id)devices;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAction:(id)arg1;
- (void)setDevices:(id)arg1;

@end
