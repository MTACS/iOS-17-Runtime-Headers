
@interface PKWalletVisibility : NSObject

+ (bool)isWalletRestricted;
+ (bool)isWalletVisible;
+ (id)setOfActiveRestrictionUUIDs;
+ (void)updateWalletVisibility;

@end
