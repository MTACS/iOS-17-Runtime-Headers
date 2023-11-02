
@protocol SBDodgingItemDelegate <NSObject>

@required

- (SBDodgingItemPreference *)dodgingResolver:(SBDodgingResolverViewController *)arg1 preferenceForDodgingItem:(SBDodgingItem *)arg2;

@optional

- (void)dodgingResolver:(SBDodgingResolverViewController *)arg1 dodgingItemDidChange:(SBDodgingItem *)arg2;
- (void)dodgingResolver:(SBDodgingResolverViewController *)arg1 dodgingItemDidSettle:(SBDodgingItem *)arg2;

@end
