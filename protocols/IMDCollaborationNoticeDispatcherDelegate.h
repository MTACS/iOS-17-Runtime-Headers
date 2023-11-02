
@protocol IMDCollaborationNoticeDispatcherDelegate <NSObject>

@required

- (void)dispatcher:(IMDCollaborationNoticeDispatcher *)arg1 didReceiveDismissalReflectionForNoticeGUIDs:(NSArray *)arg2;
- (void)dispatcher:(IMDCollaborationNoticeDispatcher *)arg1 didReceiveDismissalRequest:(IMCollaborationClearTransmission *)arg2 fromID:(NSString *)arg3;
- (void)dispatcher:(IMDCollaborationNoticeDispatcher *)arg1 didReceiveNotice:(IMCollaborationNoticeTransmission *)arg2 fromID:(NSString *)arg3;

@end
