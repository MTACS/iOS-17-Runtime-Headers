
@interface EDAMBusinessUserInfo : FATObject {
    NSNumber * _businessId;
    NSString * _businessName;
    NSString * _email;
    NSNumber * _role;
    NSNumber * _updated;
}

@property (nonatomic, retain) NSNumber *businessId;
@property (nonatomic, retain) NSString *businessName;
@property (nonatomic, retain) NSString *email;
@property (nonatomic, retain) NSNumber *role;
@property (nonatomic, retain) NSNumber *updated;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)businessId;
- (id)businessName;
- (id)email;
- (id)role;
- (void)setBusinessId:(id)arg1;
- (void)setBusinessName:(id)arg1;
- (void)setEmail:(id)arg1;
- (void)setRole:(id)arg1;
- (void)setUpdated:(id)arg1;
- (id)updated;

@end
