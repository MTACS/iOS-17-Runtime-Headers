
@interface POWSTrustUsernameTokenType : POWSTrustBaseRequestType {
    NSString * _Id;
    NSString * _Password;
    NSString * _Username;
}

@property (nonatomic, copy) NSString *Id;
@property (nonatomic, copy) NSString *Password;
@property (nonatomic, copy) NSString *Username;

+ (id)definition;

- (void).cxx_destruct;
- (id)Id;
- (id)Password;
- (id)Username;
- (id)description;
- (void)setId:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setUsername:(id)arg1;

@end
