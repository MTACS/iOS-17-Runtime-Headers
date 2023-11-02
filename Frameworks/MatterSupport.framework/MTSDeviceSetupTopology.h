
@interface MTSDeviceSetupTopology : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _homes;
}

@property (readonly, copy) NSArray *homes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)homes;
- (id)initWithCoder:(id)arg1;
- (id)initWithHomes:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
