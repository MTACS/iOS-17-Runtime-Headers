
@protocol _UIImageContentEffect <NSObject>

@required

- (long long)_effectiveRenderingModeForSource:(id <_UIImageContentLayoutSource>)arg1 symbolConfiguration:(UIImageSymbolConfiguration *)arg2;
- (_UIImageContentRendition *)_renditionForSource:(id <_UIImageContentLayoutSource>)arg1 size:(struct CGSize { double x1; double x2; })arg2 symbolConfiguration:(UIImageSymbolConfiguration *)arg3 withRenditionResult:(_UIImageContentRenditionResult *)arg4 lazy:(bool)arg5;
- (UIImageSymbolConfiguration *)_symbolConfigurationForSource:(id <_UIImageContentLayoutSource>)arg1;
- (UITraitCollection *)traitCollection;

@end
