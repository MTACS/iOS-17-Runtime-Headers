
@interface TRDeviceSetupLegacyAuthenticationAction : TRDeviceSetupConnectAction {
    NSString * _deviceGUID;
    NSString * _userAgent;
}

@property (nonatomic, retain) NSString *deviceGUID;
@property (nonatomic, retain) NSString *userAgent;

- (void).cxx_destruct;
- (id)deviceGUID;
- (id)deviceName;
- (id)propertyListRepresentation;
- (void)setDeviceGUID:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (id)userAgent;

@end
