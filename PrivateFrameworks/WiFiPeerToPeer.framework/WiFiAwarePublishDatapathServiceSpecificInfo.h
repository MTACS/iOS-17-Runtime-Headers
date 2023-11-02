
@interface WiFiAwarePublishDatapathServiceSpecificInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _hostname;
    long long  _protocolType;
    unsigned short  _servicePort;
}

@property (nonatomic, copy) NSString *hostname;
@property (nonatomic, readonly) long long protocolType;
@property (nonatomic, readonly) unsigned short servicePort;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)hostname;
- (bool)hostnameEquals:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtocolType:(long long)arg1 servicePort:(unsigned short)arg2;
- (bool)isEqual:(id)arg1;
- (long long)protocolType;
- (unsigned short)servicePort;
- (void)setHostname:(id)arg1;

@end
