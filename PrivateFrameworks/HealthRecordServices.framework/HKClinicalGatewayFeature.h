
@interface HKClinicalGatewayFeature : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _interactions;
    long long  _minCompatibleAPIVersion;
    NSString * _name;
    long long  _status;
}

@property (nonatomic, readonly, copy) NSArray *interactions;
@property (nonatomic, readonly) long long minCompatibleAPIVersion;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) long long status;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 minCompatibleAPIVersion:(long long)arg2 status:(long long)arg3 interactions:(id)arg4;
- (id)interactions;
- (bool)isEqual:(id)arg1;
- (long long)minCompatibleAPIVersion;
- (id)name;
- (long long)status;

@end
