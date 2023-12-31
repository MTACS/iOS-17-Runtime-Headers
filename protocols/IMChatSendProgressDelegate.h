
@protocol IMChatSendProgressDelegate <NSObject>

@required

- (void)chat:(IMChat *)arg1 progressDidChange:(float)arg2 sendingMessages:(NSDictionary *)arg3 sendCount:(unsigned long long)arg4 totalCount:(unsigned long long)arg5 finished:(bool)arg6;

@end
