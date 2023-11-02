
@interface ACC2SVTrustedDeviceObject : NSObject {
    NSString * _deviceClass;
    NSString * _deviceColor;
    NSString * _deviceDescription;
    NSString * _deviceDisplayDescription;
    NSString * _deviceID;
    NSData * _deviceIcon;
    NSString * _deviceModel;
    NSString * _deviceModelName;
    NSString * _deviceType;
    NSDate * _lastUseDate;
}

@property (nonatomic, retain) NSString *deviceClass;
@property (nonatomic, retain) NSString *deviceColor;
@property (nonatomic, retain) NSString *deviceDescription;
@property (nonatomic, readonly) NSString *deviceDisplayDescription;
@property (nonatomic, retain) NSString *deviceID;
@property (nonatomic, retain) NSData *deviceIcon;
@property (nonatomic, retain) NSString *deviceModel;
@property (nonatomic, retain) NSString *deviceModelName;
@property (nonatomic, retain) NSString *deviceType;
@property (nonatomic, readonly) NSString *imageURL;
@property (nonatomic, readonly) bool isSMSDevice;
@property (nonatomic, readonly) bool isTOTPDevice;
@property (nonatomic, retain) NSDate *lastUseDate;

- (void)dealloc;
- (id)description;
- (id)deviceClass;
- (id)deviceColor;
- (id)deviceDescription;
- (id)deviceDisplayDescription;
- (id)deviceID;
- (id)deviceIcon;
- (id)deviceModel;
- (id)deviceModelName;
- (id)deviceType;
- (id)imageURL;
- (id)initWithDictionary:(id)arg1;
- (bool)isSMSDevice;
- (bool)isTOTPDevice;
- (id)lastUseDate;
- (double)scale;
- (void)setDeviceClass:(id)arg1;
- (void)setDeviceColor:(id)arg1;
- (void)setDeviceDescription:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setDeviceIcon:(id)arg1;
- (void)setDeviceModel:(id)arg1;
- (void)setDeviceModelName:(id)arg1;
- (void)setDeviceType:(id)arg1;
- (void)setLastUseDate:(id)arg1;

@end
