
@protocol WBTabGroupSyncAgentSyncObserver <NSObject>

@optional

- (void)activeParticipantsDidUpdateInTabGroupWithUUID:(NSString *)arg1;
- (void)activeParticipantsDidUpdateInTabWithUUID:(NSString *)arg1;
- (void)didAddTabWithUUID:(NSString *)arg1 title:(NSString *)arg2 inSharedTabGroupWithUUID:(NSString *)arg3 byParticipantWithRecordID:(CKRecordID *)arg4;
- (void)didChangeBackgroundImageInSharedTabGroupWithUUID:(NSString *)arg1 byParticipantWithRecordID:(CKRecordID *)arg2;
- (void)didChangeScopedFavoritesInSharedTabGroupWithUUID:(NSString *)arg1 byParticipantWithRecordID:(CKRecordID *)arg2;
- (void)didFetchRecentlyAcceptedSharedTabGroupWithUUID:(NSString *)arg1 acceptedShareDate:(NSDate *)arg2;
- (void)didNavigateInTabWithUUID:(NSString *)arg1 title:(NSString *)arg2 inSharedTabGroupWithUUID:(NSString *)arg3 byParticipantWithRecordID:(CKRecordID *)arg4;
- (void)didRemoveTabWithUUID:(NSString *)arg1 title:(NSString *)arg2 inSharedTabGroupWithUUID:(NSString *)arg3 byParticipantWithRecordID:(CKRecordID *)arg4;
- (void)participants:(NSSet *)arg1 didJoinSharedTabGroupWithUUID:(NSString *)arg2;
- (void)participants:(NSSet *)arg1 didLeaveSharedTabGroupWithUUID:(NSString *)arg2;
- (void)shareDidUpdateForTabGroupWithUUID:(NSString *)arg1;

@end
