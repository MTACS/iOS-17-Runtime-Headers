
@interface ESAccount : DAAccount

+ (id)_leafExchangeAccountTypes;
+ (id)esAccountSubclassWithBackingAccountInfo:(id)arg1;
+ (id)oneshotListOfAccountIDs;
+ (void)reacquireClientRestrictions:(id)arg1;

- (void)retrieveOofSettingsForConsumer:(id)arg1;
- (void)updateOofSettingsWithParams:(id)arg1 consumer:(id)arg2;

@end
