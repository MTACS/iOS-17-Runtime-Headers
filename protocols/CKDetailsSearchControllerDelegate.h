
@protocol CKDetailsSearchControllerDelegate <NSObject>

@required

- (void)detailsSearchController:(CKDetailsSearchViewController *)arg1 requestsPushOfSearchController:(CKSearchViewController *)arg2;
- (void)detailsSearchControllerContentDidChange:(CKDetailsSearchViewController *)arg1;

@end
