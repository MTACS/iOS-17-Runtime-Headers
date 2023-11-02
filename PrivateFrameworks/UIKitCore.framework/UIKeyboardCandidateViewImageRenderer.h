
@interface UIKeyboardCandidateViewImageRenderer : NSObject {
    NSCache * _imageCache;
    UIView * _viewForTraitCollection;
}

@property (nonatomic, retain) NSCache *imageCache;
@property (nonatomic) UIView *viewForTraitCollection;

+ (id)sharedImageRenderer;

- (void).cxx_destruct;
- (id)drawGradientImage:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 startPoint:(struct CGPoint { double x1; double x2; })arg2 endPoint:(struct CGPoint { double x1; double x2; })arg3 applyScale:(bool)arg4;
- (id)edgeMaskImageForRightSide:(bool)arg1;
- (id)extensionMaskImage;
- (id)handwritingCellBackgroundImageForDarkKeyboard:(bool)arg1 highlighted:(bool)arg2;
- (id)highlightedBarCellBackgroundImageWithColor:(id)arg1 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)imageCache;
- (id)init;
- (id)pocketShadowImageForDarkKeyboard:(bool)arg1 fadesToBottom:(bool)arg2 drawShadow:(bool)arg3 topPadding:(double)arg4 bottomPadding:(double)arg5 height:(double)arg6;
- (void)setImageCache:(id)arg1;
- (void)setViewForTraitCollection:(id)arg1;
- (id)viewForTraitCollection;

@end
