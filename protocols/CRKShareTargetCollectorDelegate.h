
@protocol CRKShareTargetCollectorDelegate <NSObject>

@required

- (void)shareTargetCollector:(CRKShareTargetCollector *)arg1 didFindTargets:(NSArray *)arg2;
- (void)shareTargetCollector:(CRKShareTargetCollector *)arg1 didRemoveTargets:(NSArray *)arg2;

@end
