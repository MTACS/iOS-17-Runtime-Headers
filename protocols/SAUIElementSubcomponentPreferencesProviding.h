
@protocol SAUIElementSubcomponentPreferencesProviding <NSObject>

@required

- (double)customContentAlpha;
- (double)customContentBlurProgress;
- (double)leadingViewAlpha;
- (double)leadingViewBlurProgress;
- (double)leadingViewSquishProgress;
- (double)minimalViewAlpha;
- (double)minimalViewBlurProgress;
- (double)minimalViewSquishProgress;
- (double)snapshotViewAlpha;
- (double)snapshotViewBlurProgress;
- (double)trailingViewAlpha;
- (double)trailingViewBlurProgress;
- (double)trailingViewSquishProgress;

@optional

- (struct CGSize { double x1; double x2; })leadingViewScale;
- (struct CGSize { double x1; double x2; })minimalViewScale;
- (struct CGSize { double x1; double x2; })trailingViewScale;

@end
