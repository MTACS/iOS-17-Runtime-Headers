
@protocol AMSBagAccountProvider

@required

- (bool)associatedAccountIsEqualToAccount:(ACAccount *)arg1 forMediaType:(NSString *)arg2;
- (ACAccount *)bagAccountForAccountMediaType:(NSString *)arg1;
- (AMSPromise *)bagAccountPromiseForAccountMediaType:(NSString *)arg1;
- (bool)bagLoadShouldUpdateAccountProperties;
- (NSString *)bagStorefrontForAccountMediaType:(NSString *)arg1;
- (AMSPromise *)bagStorefrontPromiseForAccountMediaType:(NSString *)arg1;
- (NSString *)identity;

@end
