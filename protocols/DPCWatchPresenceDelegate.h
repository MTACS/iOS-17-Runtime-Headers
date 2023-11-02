
@protocol DPCWatchPresenceDelegate <NSObject>

@required

- (void)managerDidDetectEvent:(unsigned long long)arg1;
- (void)managerDidFindError:(unsigned long long)arg1;

@optional

- (void)managerDidDetectWatchStatusEvent:(unsigned long long)arg1;

@end
