
@interface CSMagSafeAccessoryViewController : CSCoverSheetViewControllerBase {
    CSMagSafeAccessory * _accessory;
    bool  _isAnimatingPresentation;
}

@property (nonatomic, retain) CSMagSafeAccessory *accessory;
@property (nonatomic, readonly) CSMagSafeAccessoryView *accessoryView;
@property (nonatomic, readonly) double animationDurationBeforeDismissal;
@property (nonatomic, readonly) double chargingAnimationDuration;
@property (nonatomic, readonly) bool hasChargingAnimation;
@property (nonatomic, readonly) bool isAnimatingPresentation;
@property (nonatomic, readonly) bool isStatic;
@property (nonatomic, readonly) bool showingChargingAnimation;

- (void).cxx_destruct;
- (id)accessory;
- (id)accessoryView;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (double)animationDurationBeforeDismissal;
- (double)chargingAnimationDuration;
- (bool)handleEvent:(id)arg1;
- (bool)hasChargingAnimation;
- (id)initWithAccessory:(id)arg1;
- (bool)isAnimatingPresentation;
- (bool)isStatic;
- (void)performDismissalAnimationWithCompletionHandler:(id /* block */)arg1;
- (long long)presentationPriority;
- (long long)presentationStyle;
- (long long)presentationType;
- (void)setAccessory:(id)arg1;
- (bool)showingChargingAnimation;
- (void)transitionChargingViewVisible:(bool)arg1 chargingInfo:(id)arg2;

@end
