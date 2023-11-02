
@protocol BKUIPearlEnrollViewDelegate <NSObject>

@required

- (void)didReachLargeNudgePeakForEnrollView:(BKUIPearlEnrollView *)arg1;
- (void)didReachSmallNudgePeakForEnrollView:(BKUIPearlEnrollView *)arg1;
- (void)enrollView:(BKUIPearlEnrollView *)arg1 didNudgeInDirection:(unsigned long long)arg2 nudgeCount:(unsigned long long)arg3;
- (void)enrollView:(BKUIPearlEnrollView *)arg1 willNudgeInDirection:(unsigned long long)arg2 nudgeCount:(unsigned long long)arg3;

@end
