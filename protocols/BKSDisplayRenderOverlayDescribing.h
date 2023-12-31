
@protocol BKSDisplayRenderOverlayDescribing <NSObject>

@required

- (CADisplay *)display;
- (long long)interfaceOrientation;
- (bool)isInterstitial;
- (bool)lockBacklight;
- (NSString *)name;
- (BKSDisplayProgressIndicatorProperties *)progressIndicatorProperties;

@end
