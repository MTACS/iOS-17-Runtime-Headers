
@protocol HDProtectedResourceStore <NSObject>

@required

- (void)checkInProtectedResource:(id)arg1;
- (id)checkOutProtectedResourceWithAssertion:(HDAssertion *)arg1 transaction:(HDDatabaseTransaction *)arg2 error:(id*)arg3;
- (NSString *)protectedResourceIdentifier;
- (HDAssertion *)requestProtectedResourceAccessAssertionForOwnerIdentifier:(NSString *)arg1 error:(id*)arg2;

@end
