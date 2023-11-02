
@protocol ApparentTimeHandlerDelegate <NSObject>

@required

- (void)setTimerCallbackWithDelay:(double)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 reference:(NSNumber *)arg3;

@end
