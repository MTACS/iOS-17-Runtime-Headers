
@protocol SAUIElementSubcomponentPreferencesAccepting <SAUIElementSubcomponentPreferencesProviding>

@required

- (double)customContentAlpha;
- (double)customContentBlurProgress;
- (double)leadingViewAlpha;
- (double)leadingViewBlurProgress;
- (struct CGSize { double x1; double x2; })leadingViewScale;
- (double)leadingViewSquishProgress;
- (double)minimalViewAlpha;
- (double)minimalViewBlurProgress;
- (struct CGSize { double x1; double x2; })minimalViewScale;
- (double)minimalViewSquishProgress;
- (void)setCustomContentAlpha:(double)arg1;
- (void)setCustomContentBlurProgress:(double)arg1;
- (void)setLeadingViewAlpha:(double)arg1;
- (void)setLeadingViewBlurProgress:(double)arg1;
- (void)setLeadingViewScale:(struct CGSize { double x1; double x2; })arg1;
- (void)setLeadingViewSquishProgress:(double)arg1;
- (void)setMinimalViewAlpha:(double)arg1;
- (void)setMinimalViewBlurProgress:(double)arg1;
- (void)setMinimalViewScale:(struct CGSize { double x1; double x2; })arg1;
- (void)setMinimalViewSquishProgress:(double)arg1;
- (void)setSnapshotViewAlpha:(double)arg1;
- (void)setSnapshotViewBlurProgress:(double)arg1;
- (void)setTrailingViewAlpha:(double)arg1;
- (void)setTrailingViewBlurProgress:(double)arg1;
- (void)setTrailingViewScale:(struct CGSize { double x1; double x2; })arg1;
- (void)setTrailingViewSquishProgress:(double)arg1;
- (double)snapshotViewAlpha;
- (double)snapshotViewBlurProgress;
- (double)trailingViewAlpha;
- (double)trailingViewBlurProgress;
- (struct CGSize { double x1; double x2; })trailingViewScale;
- (double)trailingViewSquishProgress;

@end
