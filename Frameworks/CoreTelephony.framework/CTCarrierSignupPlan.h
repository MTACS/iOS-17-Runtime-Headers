
@interface CTCarrierSignupPlan : CTPlan {
    NSString * _name;
    NSString * _type;
    NSString * _url;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSString *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 url:(id)arg2 type:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)type;
- (id)url;

@end
