
@protocol IMSendProgressDelegate <NSObject>

@required

- (void)sendProgress:(IMSendProgress *)arg1 progressDidChange:(float)arg2 sendingMessages:(NSDictionary *)arg3 sendCount:(unsigned long long)arg4 totalCount:(unsigned long long)arg5 finished:(bool)arg6;

@end
