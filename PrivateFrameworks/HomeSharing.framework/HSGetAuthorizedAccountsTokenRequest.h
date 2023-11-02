
@interface HSGetAuthorizedAccountsTokenRequest : HSRequest

+ (id)requestWithDSID:(unsigned long long)arg1 deviceGUID:(id)arg2;

- (id)canonicalResponseForResponse:(id)arg1;
- (id)initWithDSID:(unsigned long long)arg1 deviceGUID:(id)arg2;

@end
