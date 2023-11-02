
@protocol MKPOSTProgressRouterDelegate <NSObject>

@required

- (void)router:(MKPOSTProgressRouter *)arg1 didUpdateProgress:(float)arg2 remainingTime:(unsigned long long)arg3 state:(int)arg4;

@end
