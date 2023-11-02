
@interface KTIDMSDevice : NSObject <NSSecureCoding> {
    NSString * _build;
    NSString * _deviceID;
    NSString * _model;
    NSString * _name;
    NSString * _osVersion;
    NSString * _pushToken;
    NSString * _serial;
}

@property (retain) NSString *build;
@property (retain) NSString *deviceID;
@property (retain) NSString *model;
@property (retain) NSString *name;
@property (retain) NSString *osVersion;
@property (retain) NSString *pushToken;
@property (retain) NSString *serial;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)build;
- (id)deviceID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)model;
- (id)name;
- (id)osVersion;
- (id)pushToken;
- (id)serial;
- (void)setBuild:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOsVersion:(id)arg1;
- (void)setPushToken:(id)arg1;
- (void)setSerial:(id)arg1;

@end
