
@protocol PLExpandedPlatterInteractionHosting <NSObject>

@required

- (UIView *)viewForPreview;

@optional

- (bool)isHighlighted;
- (void)setHighlighted:(bool)arg1;
- (UIBezierPath *)visiblePath;

@end
