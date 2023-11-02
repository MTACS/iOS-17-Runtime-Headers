
@protocol ARCoachingOverlayViewDelegate <NSObject>

@optional

- (void)coachingOverlayViewDidDeactivate:(ARCoachingOverlayView *)arg1;
- (void)coachingOverlayViewDidRequestSessionReset:(ARCoachingOverlayView *)arg1;
- (void)coachingOverlayViewWillActivate:(ARCoachingOverlayView *)arg1;

@end
