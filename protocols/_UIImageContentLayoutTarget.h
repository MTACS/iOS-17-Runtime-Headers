
@protocol _UIImageContentLayoutTarget <NSObject>

@required

- (<_UIImageContentEffect> *)_effectForRenderingSource:(id <_UIImageContentLayoutSource>)arg1;
- (bool)_hasContentGravity;
- (bool)_layoutShouldFlipHorizontalOrientations;
- (bool)_supportsContents;
- (long long)contentMode;
- (double)preferredContentScaleFactor;
- (long long)semanticContentAttribute;

@end
