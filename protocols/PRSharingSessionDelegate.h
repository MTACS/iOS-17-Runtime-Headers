
@protocol PRSharingSessionDelegate <NSObject>

@required

- (void)session:(PRSharingSession *)arg1 didEstimateScores:(NSArray *)arg2;
- (void)session:(PRSharingSession *)arg1 didFailwithError:(NSError *)arg2;

@optional

- (void)session:(PRSharingSession *)arg1 didChangeProximitySensorState:(unsigned long long)arg2;

@end
