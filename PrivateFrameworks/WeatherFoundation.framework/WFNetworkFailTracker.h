
@interface WFNetworkFailTracker : NSObject {
    double  _lastFailTimeInSeconds;
    int  _numConsecutiveFails;
}

@property (nonatomic, readonly) double lastFailTimeInSeconds;
@property (nonatomic, readonly) int numConsecutiveFails;

- (void)incrementFailCount;
- (bool)lastFailTimeExpiredForSettings:(id)arg1;
- (double)lastFailTimeInSeconds;
- (int)numConsecutiveFails;

@end
