
@interface SADeviceControlRebootDevice : SABaseClientBoundCommand

@property (nonatomic) bool isShutdownOnly;

+ (id)rebootDevice;
+ (id)rebootDeviceWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)isShutdownOnly;
- (bool)requiresResponse;
- (void)setIsShutdownOnly:(bool)arg1;

@end
