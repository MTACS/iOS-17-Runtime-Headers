
@interface DNDMeDeviceState : NSObject <NSCopying, NSSecureCoding> {
    NSString * _meDeviceName;
    unsigned long long  _meDeviceStatus;
}

@property (nonatomic, readonly, copy) NSString *meDeviceName;
@property (nonatomic, readonly) unsigned long long meDeviceStatus;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatus:(unsigned long long)arg1 name:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)meDeviceName;
- (unsigned long long)meDeviceStatus;

@end
