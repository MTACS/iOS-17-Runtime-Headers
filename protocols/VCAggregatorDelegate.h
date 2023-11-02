
@protocol VCAggregatorDelegate <NSObject>

@required

- (void)report:(NSDictionary *)arg1 segmentDirection:(int)arg2 clientType:(int)arg3;
- (void)reportQR:(NSDictionary *)arg1;
- (void)sendMessageWithCategory:(unsigned short)arg1 type:(unsigned short)arg2 payload:(NSDictionary *)arg3;

@end
