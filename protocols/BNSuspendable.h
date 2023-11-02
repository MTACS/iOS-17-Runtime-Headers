
@protocol BNSuspendable <NSObject>

@required

- (bool)setSuspended:(bool)arg1 forReason:(NSString *)arg2 revokingCurrent:(bool)arg3 error:(out id*)arg4;

@end
