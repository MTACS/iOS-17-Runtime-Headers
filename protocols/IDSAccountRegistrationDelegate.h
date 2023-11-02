
@protocol IDSAccountRegistrationDelegate <NSObject>

@optional

- (void)account:(NSString *)arg1 aliasesChanged:(NSArray *)arg2;
- (void)account:(NSString *)arg1 displayNameChanged:(NSString *)arg2;
- (void)account:(NSString *)arg1 loginChanged:(NSString *)arg2;
- (void)account:(NSString *)arg1 profileChanged:(NSDictionary *)arg2;
- (void)account:(NSString *)arg1 pseudonymsChanged:(NSDictionary *)arg2;
- (void)account:(NSString *)arg1 registrationStatusInfoChanged:(NSDictionary *)arg2;
- (void)account:(NSString *)arg1 vettedAliasesChanged:(NSArray *)arg2;
- (void)refreshRegistrationForAccount:(NSString *)arg1;

@end
