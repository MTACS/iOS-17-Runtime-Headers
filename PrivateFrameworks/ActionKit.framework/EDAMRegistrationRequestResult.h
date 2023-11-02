
@interface EDAMRegistrationRequestResult : FATObject {
    NSString * _name;
    NSString * _refreshToken;
    NSNumber * _result;
    NSString * _userEmail;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *refreshToken;
@property (nonatomic, retain) NSNumber *result;
@property (nonatomic, retain) NSString *userEmail;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)name;
- (id)refreshToken;
- (id)result;
- (void)setName:(id)arg1;
- (void)setRefreshToken:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setUserEmail:(id)arg1;
- (id)userEmail;

@end
