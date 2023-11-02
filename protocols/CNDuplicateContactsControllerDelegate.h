
@protocol CNDuplicateContactsControllerDelegate <NSObject>

@optional

- (void)didPerformDuplicatesMerge:(CNDuplicateContactsController *)arg1;
- (void)duplicatesDidChange:(CNDuplicateContactsController *)arg1;
- (void)willPerformDuplicatesMerge:(CNDuplicateContactsController *)arg1;
- (void)willPerformDuplicatesMergeAll:(CNDuplicateContactsController *)arg1;

@end
