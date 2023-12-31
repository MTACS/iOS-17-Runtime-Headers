
@protocol PXMutableUIPlayButtonTile <NSObject>

@required

- (bool)allowsBackdropStatisticsSuppression;
- (PXImageRequester *)imageRequester;
- (struct CGPoint { double x1; double x2; })imageViewportLocation;
- (struct CGSize { double x1; double x2; })playButtonSize;
- (long long)playButtonStyle;
- (NSString *)playButtonTitle;
- (void)setAllowsBackdropStatisticsSuppression:(bool)arg1;
- (void)setImageRequester:(PXImageRequester *)arg1;
- (void)setImageViewportLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPlayButtonSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPlayButtonStyle:(long long)arg1;
- (void)setPlayButtonTitle:(NSString *)arg1;

@end
