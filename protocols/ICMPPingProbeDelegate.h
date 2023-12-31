
@protocol ICMPPingProbeDelegate <NSObject>

@optional

- (void)icmpPingProbe:(ICMPPingProbe *)arg1 completedIterations:(unsigned long long)arg2 successfulCount:(unsigned long long)arg3 withError:(NSError *)arg4;
- (void)icmpPingProbe:(ICMPPingProbe *)arg1 echoRequestSent:(NSDictionary *)arg2 success:(bool)arg3;
- (void)icmpPingProbe:(ICMPPingProbe *)arg1 echoResponseReceived:(NSDictionary *)arg2 success:(bool)arg3;

@end
