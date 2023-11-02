
@protocol GKMultiplayerDataSourceDelegate

@required

- (bool)allowAutoMatch;
- (long long)automatchParticipantStatus;
- (void)didTapInviteOnCell:(_TtC12GameCenterUI42GKMultiplayerParticipantCollectionViewCell *)arg1;
- (void)didTapRemoveParticipant:(GKMultiplayerParticipant *)arg1;
- (void)didUpdateAutoMatchPlayerCount;
- (void)didUpdateParticipants;
- (bool)isCanceling;
- (long long)multiplayerCellLayoutMode;

@end
