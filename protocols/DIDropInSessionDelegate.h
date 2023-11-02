
@protocol DIDropInSessionDelegate <NSObject>

@optional

- (void)session:(DIDropInSession *)arg1 didFailWithError:(NSError *)arg2;
- (void)session:(DIDropInSession *)arg1 didUpdateState:(unsigned long long)arg2;
- (void)session:(DIDropInSession *)arg1 didUpdateState:(unsigned long long)arg2 reason:(unsigned long long)arg3;
- (void)session:(DIDropInSession *)arg1 didUpdateUplinkMuteStatus:(bool)arg2;

@end
