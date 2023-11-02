
@interface CKDAccountStore : NSObject

+ (void)invalidatePrimaryAccountCache;
+ (id)sharedAccountStore;
+ (id)sharedPrimaryAccount;

- (id)init;

@end
