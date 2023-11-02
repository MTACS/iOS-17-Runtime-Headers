
@protocol CKNicknameUpdatesViewControllerDelegate <NSObject>

@required

- (void)dismissNicknameUpdateController:(CKNicknameUpdatesViewController *)arg1;
- (NSArray *)nicknameUpdatesForController:(CKNicknameUpdatesViewController *)arg1;
- (void)nicknameUpdatesViewController:(CKNicknameUpdatesViewController *)arg1 selectedAction:(unsigned long long)arg2 forNicknameUpdate:(CKNicknameUpdate *)arg3 sourceView:(UIView *)arg4;

@end
