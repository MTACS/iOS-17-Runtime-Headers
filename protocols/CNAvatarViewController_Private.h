
@protocol CNAvatarViewController_Private <NSObject>

@required

- (CNContactStore *)contactStore;
- (<CNAvatarViewControllerDelegate> *)delegate;
- (bool)isThreeDTouchEnabled;
- (void)setDelegate:(id <CNAvatarViewControllerDelegate>)arg1;
- (void)setThreeDTouchEnabled:(bool)arg1;

@end
