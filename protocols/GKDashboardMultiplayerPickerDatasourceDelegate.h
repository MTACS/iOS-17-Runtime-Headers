
@protocol GKDashboardMultiplayerPickerDatasourceDelegate

@required

- (UIMenu *)createSortPickerMenu;
- (void)highlightAlreadySelectedPlayers:(NSArray *)arg1 inGroup:(_TtC12GameCenterUI22GKSuggestedPlayerGroup *)arg2;
- (UICollectionView *)pickerCollectionView;
- (void)pickerDatasource:(GKDashboardMultiplayerPickerDataSource *)arg1 didDeselectPlayers:(NSArray *)arg2 inGroup:(_TtC12GameCenterUI22GKSuggestedPlayerGroup *)arg3;
- (void)pickerDatasource:(GKDashboardMultiplayerPickerDataSource *)arg1 didPickPlayers:(NSArray *)arg2;
- (void)pickerDatasource:(GKDashboardMultiplayerPickerDataSource *)arg1 didSelectPlayers:(NSArray *)arg2 inGroup:(_TtC12GameCenterUI22GKSuggestedPlayerGroup *)arg3;
- (void)pickerDatasourceDidSelectAddFriend:(GKDashboardMultiplayerPickerDataSource *)arg1;
- (void)playerGroupDidExpandInPlace;

@end
