
@protocol PKTextFieldCollectionViewListCellDelegate <NSObject>

@optional

- (void)textFieldDidBeginEditing:(UITextField *)arg1 forListCell:(PKTextFieldCollectionViewListCell *)arg2;
- (void)textFieldDidChangeSelection:(UITextField *)arg1 forListCell:(PKTextFieldCollectionViewListCell *)arg2;
- (void)textFieldDidEndEditing:(UITextField *)arg1 forListCell:(PKTextFieldCollectionViewListCell *)arg2;
- (bool)textFieldShouldReturn:(UITextField *)arg1 forListCell:(PKTextFieldCollectionViewListCell *)arg2;

@end
