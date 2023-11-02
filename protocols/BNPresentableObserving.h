
@protocol BNPresentableObserving <NSObject>

@optional

- (void)presentableDidAppearAsBanner:(id <BNPresentable>)arg1;
- (void)presentableDidDisappearAsBanner:(id <BNPresentable>)arg1 withReason:(NSString *)arg2;
- (void)presentableWillAppearAsBanner:(id <BNPresentable>)arg1;
- (void)presentableWillDisappearAsBanner:(id <BNPresentable>)arg1 withReason:(NSString *)arg2;
- (void)presentableWillNotAppearAsBanner:(id <BNPresentable>)arg1 withReason:(NSString *)arg2;
- (void)userInteractionDidEndForBannerForPresentable:(id <BNPresentable>)arg1;
- (void)userInteractionWillBeginForBannerForPresentable:(id <BNPresentable>)arg1;

@end
