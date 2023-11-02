
@interface AWDLServiceDiscoveryConfiguration : NSObject <NSCopying, NSSecureCoding> {
    bool  _isResolve;
    NSData * _serviceKey;
    NSData * _serviceValue;
}

@property (nonatomic, readonly) bool isResolve;
@property (nonatomic, readonly) NSData *serviceKey;
@property (nonatomic, readonly) NSData *serviceValue;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1;
- (id)initWithKey:(id)arg1 value:(id)arg2 resolve:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isResolve;
- (id)serviceKey;
- (id)serviceValue;

@end
