
@interface ATXCustomIntentDescription : NSObject <NSSecureCoding> {
    NSDictionary * _parameters;
    NSString * _typeName;
}

@property (nonatomic, readonly, copy) NSDictionary *parameters;
@property (nonatomic, readonly, copy) NSString *typeName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)createIntent;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTypeName:(id)arg1 parameters:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)parameters;
- (id)typeName;

@end
