
@protocol SKUIGiftContactSearchDelegate <NSObject>

@optional

- (void)searchController:(SKUIGiftContactSearchController *)arg1 didSelectRecipient:(CNComposeRecipient *)arg2;
- (void)searchControllerDidFinishSearch:(SKUIGiftContactSearchController *)arg1;

@end
