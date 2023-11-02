
@interface SOKerberosExtensionUserData : NSObject

@property (nonatomic) bool useKeychain;
@property (nonatomic) bool useSmartCard;
@property (nonatomic) bool userSetKeychainChoice;

- (id)init;
- (void)setUseKeychain:(bool)arg1;
- (void)setUseSmartCard:(bool)arg1;
- (void)setUserSetKeychainChoice:(bool)arg1;
- (bool)useKeychain;
- (bool)useSmartCard;
- (bool)userSetKeychainChoice;

@end
