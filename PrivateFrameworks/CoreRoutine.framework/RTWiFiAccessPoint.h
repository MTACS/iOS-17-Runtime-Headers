
@interface RTWiFiAccessPoint : NSObject <NSSecureCoding> {
    double  _age;
    long long  _channel;
    NSDate * _date;
    NSString * _mac;
    long long  _rssi;
}

@property (nonatomic, readonly) double age;
@property (nonatomic, readonly) long long channel;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *mac;
@property (nonatomic, readonly) long long rssi;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)age;
- (long long)channel;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMac:(id)arg1 rssi:(long long)arg2 channel:(long long)arg3 age:(double)arg4 date:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)mac;
- (long long)rssi;

@end
