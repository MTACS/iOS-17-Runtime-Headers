
@protocol CKRecipientSearchListControllerDelegate <CNAutocompleteResultsTableViewControllerDelegate>

@required

- (void)searchListController:(CKRecipientSearchListController *)arg1 destinationsUpdated:(NSDictionary *)arg2;
- (long long)searchListController:(CKRecipientSearchListController *)arg1 idStatusForIDSID:(NSString *)arg2;
- (void)searchListControllerDidFinishSearch:(CKRecipientSearchListController *)arg1;
- (void)searchListControllerDidScroll:(CKRecipientSearchListController *)arg1;

@end
