
@interface DMFPolicyRegistration : NSObject <NSCopying, NSSecureCoding> {
    id /* block */  _callback;
    NSString * _identifier;
    NSSet * _policyTypes;
}

@property (nonatomic, copy) id /* block */ callback;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSSet *policyTypes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id /* block */)callback;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 policyTypes:(id)arg2 callback:(id /* block */)arg3;
- (bool)isEqual:(id)arg1;
- (id)policyTypes;
- (void)setCallback:(id /* block */)arg1;

@end
