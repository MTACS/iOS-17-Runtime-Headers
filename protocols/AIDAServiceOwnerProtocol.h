
@protocol AIDAServiceOwnerProtocol <NSObject>

@required

+ (NSArray *)supportedServices;

- (NSString *)DSIDForAccount:(ACAccount *)arg1 service:(NSString *)arg2;
- (ACAccount *)accountForService:(NSString *)arg1;
- (NSString *)altDSIDForAccount:(ACAccount *)arg1 service:(NSString *)arg2;
- (id)initWithAccountStore:(ACAccountStore *)arg1;
- (NSPersonNameComponents *)nameComponentsForAccount:(ACAccount *)arg1 service:(NSString *)arg2;
- (void)signInService:(void *)arg1 withContext:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, AIDAServiceContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)signOutService:(void *)arg1 withContext:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, AIDAServiceContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end