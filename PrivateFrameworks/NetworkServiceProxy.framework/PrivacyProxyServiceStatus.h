
@interface PrivacyProxyServiceStatus : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _details;
    NSArray * _networkStatuses;
    unsigned long long  _serviceStatus;
}

@property (retain) NSDictionary *details;
@property (retain) NSArray *networkStatuses;
@property unsigned long long serviceStatus;

+ (id)serviceStatusString:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)details;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)networkStatuses;
- (id)serialize;
- (unsigned long long)serviceStatus;
- (void)setDetails:(id)arg1;
- (void)setNetworkStatuses:(id)arg1;
- (void)setServiceStatus:(unsigned long long)arg1;

@end
