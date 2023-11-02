
@protocol IMDAutoReplying <NSObject>

@required

- (void)processMessages:(NSArray *)arg1 inChat:(IMDChat *)arg2 fromIDSID:(NSString *)arg3;
- (<IMDAutoReplyDelegate> *)replyDelegate;
- (void)setReplyDelegate:(id <IMDAutoReplyDelegate>)arg1;

@end
