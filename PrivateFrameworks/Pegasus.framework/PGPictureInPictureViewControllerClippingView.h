
@interface PGPictureInPictureViewControllerClippingView : UIView {
    bool  _ignoreCornerRadiusUpdates;
}

@property (nonatomic) bool ignoreCornerRadiusUpdates;

- (void)_setContinuousCornerRadius:(double)arg1;
- (bool)ignoreCornerRadiusUpdates;
- (void)setIgnoreCornerRadiusUpdates:(bool)arg1;

@end
