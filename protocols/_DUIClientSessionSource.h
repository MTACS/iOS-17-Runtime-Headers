
@protocol _DUIClientSessionSource <_DUIClientSessionCommon>

@required

- (oneway void)checkCanHandOffCancelledItems:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 9: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, unsigned int, unsigned long long, void*
- (oneway void)dataTransferSessionFinished;
- (oneway void)dragEndedWithOperation:(unsigned long long)arg1;
- (oneway void)dragFailed;
- (oneway void)handOffCancelledItems:(NSArray *)arg1 withFence:(BKSAnimationFenceHandle *)arg2;

@end
