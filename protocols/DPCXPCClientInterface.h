
@protocol DPCXPCClientInterface <NSObject>

@required

- (void)newErrorDetected:(unsigned long long)arg1;
- (void)newWatchPresenceEvent:(unsigned long long)arg1 probability:(float)arg2;
- (void)newWatchStatusEvent:(unsigned long long)arg1;

@end
