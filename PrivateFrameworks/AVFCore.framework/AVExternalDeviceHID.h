
@interface AVExternalDeviceHID : NSObject {
    AVExternalDeviceHIDInternal * _externalDeviceHID;
}

@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic) long long inputMode;
@property (nonatomic, readonly) NSString *screenID;

- (id)UUID;
- (id)_externalDevice;
- (id)_figEndpointHIDInputMode;
- (void)dealloc;
- (id)initWithExternalDeviceAndHIDDictionary:(id)arg1 hidDictionary:(id)arg2;
- (long long)inputMode;
- (id)screenID;
- (void)setInputMode:(long long)arg1;

@end
