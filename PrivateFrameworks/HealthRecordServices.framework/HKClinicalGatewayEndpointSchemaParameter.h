
@interface HKClinicalGatewayEndpointSchemaParameter : NSObject <NSCopying, NSSecureCoding> {
    NSString * _literal;
    NSArray * _mode;
    NSString * _param;
    NSString * _variable;
}

@property (nonatomic, readonly, copy) NSString *literal;
@property (nonatomic, readonly, copy) NSArray *mode;
@property (nonatomic, readonly, copy) NSString *param;
@property (nonatomic, readonly, copy) NSString *variable;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithParam:(id)arg1 literal:(id)arg2 variable:(id)arg3 mode:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)literal;
- (id)mode;
- (id)param;
- (id)variable;

@end
