
@protocol UIIndexBarViewDelegate <NSObject>

@optional

- (bool)indexBarView:(UIIndexBarView *)arg1 didSelectEntry:(UIIndexBarEntry *)arg2 atIndex:(long long)arg3;
- (void)userInteractionStartedWithIndexBarView:(UIIndexBarView *)arg1;
- (void)userInteractionStoppedWithIndexBarView:(UIIndexBarView *)arg1;

@end
