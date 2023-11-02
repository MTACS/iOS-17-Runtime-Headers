
@protocol JFXAnimojiTrackingLossDelegate <NSObject>

@required

- (void)hideAnimojiFaceReticleForTrackingGain;
- (void)setupAnimojiFaceReticleForTrackingLoss;
- (bool)shouldShowAnimojiFaceReticle;
- (void)showAnimojiFaceReticleForTrackingLoss;

@end
