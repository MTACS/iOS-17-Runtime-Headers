
@protocol ARCoachingGlyphStateDelegate <NSObject>

@required

- (void)bottomPlaneTranslationTargetChanged;
- (void)quaternionTargetChanged;
- (void)scaleTargetChanged;
- (void)snapStateChanged;
- (void)topPlaneTranslationTargetChanged;

@end
