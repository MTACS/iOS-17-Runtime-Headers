
@interface PrivacyProxyServiceStatusTime : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _serviceStatus;
    NSDate * _serviceStatusEndTime;
    NSDate * _serviceStatusStartTime;
}

@property unsigned long long serviceStatus;
@property (retain) NSDate *serviceStatusEndTime;
@property (retain) NSDate *serviceStatusStartTime;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)diagnostics;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)serviceStatus;
- (id)serviceStatusEndTime;
- (id)serviceStatusStartTime;
- (void)setServiceStatus:(unsigned long long)arg1;
- (void)setServiceStatusEndTime:(id)arg1;
- (void)setServiceStatusStartTime:(id)arg1;

@end
