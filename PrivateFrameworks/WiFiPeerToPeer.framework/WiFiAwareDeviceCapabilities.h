
@interface WiFiAwareDeviceCapabilities : NSObject <NSSecureCoding> {
    NSString * _discoveryInterfaceName;
    NSNumber * _operatingChannel;
    NSNumber * _operatingClass;
    unsigned char  _supportedBands;
    NSArray * _supportedCipherSuites;
    bool  _supportsDataTransfer;
}

@property (nonatomic, readonly) NSString *discoveryInterfaceName;
@property (nonatomic, readonly) NSNumber *operatingChannel;
@property (nonatomic, readonly) NSNumber *operatingClass;
@property (nonatomic, readonly) unsigned char supportedBands;
@property (nonatomic, readonly) NSArray *supportedCipherSuites;
@property (nonatomic, readonly) bool supportsDataTransfer;

+ (id)currentDeviceCapabilities;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)discoveryInterfaceName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOperatingChannel:(id)arg1 operatingClass:(id)arg2 supportedCipherSuites:(id)arg3 supportsDataTransfer:(bool)arg4 supportedBands:(unsigned char)arg5 discoveryInterfaceName:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)operatingChannel;
- (id)operatingClass;
- (unsigned char)supportedBands;
- (id)supportedCipherSuites;
- (bool)supportsDataTransfer;

@end
