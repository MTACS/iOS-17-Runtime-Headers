
@protocol CNAccountsAndGroupsCellDelegate <NSObject>

@required

- (void)cellTextViewDidChangeHeight;
- (bool)isCollectionViewEditing;
- (void)item:(CNAccountsAndGroupsItem *)arg1 didEndEditingWithName:(NSString *)arg2;

@end
