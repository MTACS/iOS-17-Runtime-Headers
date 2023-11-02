
@protocol COMeshNodeStateTrackerDelegate <NSObject>

@optional

- (void)backedOffNodeMovedOutOfElection:(COMeshNodeStateTracker *)arg1;
- (void)nodeBecameAvailable:(COMeshNodeStateTracker *)arg1;
- (void)nodeShouldRetryAfterBackoff:(COMeshNodeStateTracker *)arg1;

@end
