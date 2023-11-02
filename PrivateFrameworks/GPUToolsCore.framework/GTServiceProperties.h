
@interface GTServiceProperties : NSObject <NSSecureCoding> {
    NSString * _deviceUDID;
    int  _platform;
    NSArray * _protocolMethods;
    NSString * _protocolName;
    unsigned long long  _servicePort;
    unsigned long long  _version;
}

@property (nonatomic, copy) NSString *deviceUDID;
@property (nonatomic) int platform;
@property (nonatomic, readonly) NSArray *protocolMethods;
@property (nonatomic, readonly) NSString *protocolName;
@property (nonatomic) unsigned long long servicePort;
@property (nonatomic) unsigned long long version;

+ (id)protocolMethods:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)deviceUDID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtocol:(id)arg1;
- (int)platform;
- (id)protocolMethods;
- (id)protocolName;
- (unsigned long long)servicePort;
- (void)setDeviceUDID:(id)arg1;
- (void)setPlatform:(int)arg1;
- (void)setServicePort:(unsigned long long)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (unsigned long long)version;

@end
