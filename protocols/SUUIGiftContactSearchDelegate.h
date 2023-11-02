
@protocol SUUIGiftContactSearchDelegate <NSObject>

@optional

- (void)searchController:(SUUIGiftContactSearchController *)arg1 didSelectRecipient:(CNComposeRecipient *)arg2;
- (void)searchControllerDidFinishSearch:(SUUIGiftContactSearchController *)arg1;

@end
