
@interface NREndpoint : NSObject <NSCopying> {
    unsigned char  _dataProtectionClass;
    NRDeviceIdentifier * _deviceIdentifier;
    NSString * _portString;
}

@property (nonatomic) unsigned char dataProtectionClass;
@property (nonatomic, retain) NRDeviceIdentifier *deviceIdentifier;
@property (nonatomic, retain) NSString *portString;

- (void).cxx_destruct;
- (id)copyEndpoint;
- (id)copyNWEndpoint;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned char)dataProtectionClass;
- (id)description;
- (id)deviceIdentifier;
- (id)initWithDeviceIdentifier:(id)arg1 portString:(id)arg2 dataProtectionClass:(unsigned char)arg3;
- (id)portString;
- (void)setDataProtectionClass:(unsigned char)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setPortString:(id)arg1;

@end
