
@protocol AVTAvatarActionsViewControllerDelegate <NSObject>

@required

- (AVTAvatarActionsRecordUpdate *)avatarActionsViewController:(AVTAvatarActionsViewController *)arg1 recordUpdateForDeletingRecord:(id <AVTAvatarRecord>)arg2;
- (void)avatarActionsViewControllerDidFinish:(AVTAvatarActionsViewController *)arg1;

@optional

- (void)avatarActionsViewController:(AVTAvatarActionsViewController *)arg1 didPerformAction:(long long)arg2 withAvatarRecord:(id <AVTAvatarRecord>)arg3;
- (void)avatarActionsViewController:(AVTAvatarActionsViewController *)arg1 willPresentAvatarRecord:(id <AVTAvatarRecord>)arg2;

@end
