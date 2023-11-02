
@protocol GKDashboardMultiplayerPickerDelegate <NSObject>

@optional

- (void)multiplayerPicker:(GKDashboardMultiplayerPickerViewController *)arg1 didPickPlayers:(NSArray *)arg2 messageGroups:(NSSet *)arg3 customMessage:(NSString *)arg4;
- (void)multiplayerPickerDidCancel:(GKDashboardMultiplayerPickerViewController *)arg1;

@end
