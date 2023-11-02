
@interface WFTrelloAccount : WFAccount {
    NSString * _email;
    NSString * _token;
}

@property (nonatomic, copy) NSString *email;
@property (nonatomic, copy) NSString *token;

+ (id)accountWithToken:(id)arg1;
+ (id)localizedServiceName;
+ (id)serviceID;
+ (id)serviceName;

- (void).cxx_destruct;
- (id)email;
- (bool)isValid;
- (id)localizedName;
- (void)refreshWithCompletionHandler:(id /* block */)arg1;
- (void)setEmail:(id)arg1;
- (void)setToken:(id)arg1;
- (id)token;

@end
