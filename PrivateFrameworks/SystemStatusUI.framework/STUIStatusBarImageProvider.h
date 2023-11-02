
@interface STUIStatusBarImageProvider : NSObject

+ (id)sharedProvider;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_alignmentInsetsForImageNamed:(id)arg1 styleAttributes:(id)arg2;
- (bool)_suppressHairlineThickeningForImageName:(id)arg1 styleAttributes:(id)arg2;
- (id)imageNamed:(id)arg1 styleAttributes:(id)arg2;

@end
