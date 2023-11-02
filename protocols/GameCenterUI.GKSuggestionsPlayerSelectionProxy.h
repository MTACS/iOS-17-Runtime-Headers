
@protocol GameCenterUI.GKSuggestionsPlayerSelectionProxy

@required

- (void)didAttemptSelectingAlreadySelectedPlayers:(NSArray *)arg1 inGroup:(_TtC12GameCenterUI22GKSuggestedPlayerGroup *)arg2;
- (void)didDeselectPlayerGroup:(void *)arg1 indexPath:(void *)arg2 dataSourceIdentifier:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: _TtC12GameCenterUI22GKSuggestedPlayerGroup *, NSIndexPath *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)didDeselectPlayers:(void *)arg1 indexPath:(void *)arg2 dataSourceIdentifier:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: NSArray *, NSIndexPath *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)didExceedAvailablePlayers;
- (void)didSelectPlayerGroup:(void *)arg1 indexPath:(void *)arg2 dataSourceIdentifier:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: _TtC12GameCenterUI22GKSuggestedPlayerGroup *, NSIndexPath *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)didSelectPlayers:(void *)arg1 indexPath:(void *)arg2 dataSourceIdentifier:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: NSArray *, NSIndexPath *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)donateGroupToPeopleSuggester:(_TtC12GameCenterUI22GKSuggestedPlayerGroup *)arg1;
- (long long)getMaxPlayerCount;
- (long long)getSelectedPlayerCount;
- (NSArray *)getSuggestedPlayerGroups;
- (bool)playerIsSelectable:(GKPlayer *)arg1;
- (bool)playerIsSelected:(GKPlayer *)arg1;

@end
