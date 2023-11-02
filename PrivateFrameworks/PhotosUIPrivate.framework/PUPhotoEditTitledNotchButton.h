
@interface PUPhotoEditTitledNotchButton : PUPhotoEditNotchButton <UIPointerInteractionDelegate> {
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredContentFittingSize;
    UIColor * _textColor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct PUPhotoEditTitledNotchButtonMetrics { double x1; double x2; double x3; double x4; } metrics;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredContentFittingSize;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *textColor;

+ (id)_bestFontForTitle:(id)arg1 inMaximumWidth:(double)arg2 withMetrics:(struct PUPhotoEditTitledNotchButtonMetrics { double x1; double x2; double x3; double x4; })arg3 titleSize:(out struct CGSize { double x1; double x2; }*)arg4 fontAttributes:(out id*)arg5;
+ (id)bestFontForTitle:(id)arg1 fittingInWidth:(double)arg2;
+ (struct PUPhotoEditTitledNotchButtonMetrics { double x1; double x2; double x3; double x4; })defaultMetrics;
+ (struct CGSize { double x1; double x2; })defaultPreferredContentFittingSize;
+ (long long)editingTitledButtonType;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)contentImageWithTitle:(id)arg1;
- (id)defaultContentImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)largeContentImage;
- (id)largeContentTitle;
- (struct PUPhotoEditTitledNotchButtonMetrics { double x1; double x2; double x3; double x4; })metrics;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (struct CGSize { double x1; double x2; })preferredContentFittingSize;
- (void)setFrameFromVisibleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPreferredContentFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTextColor:(id)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2 fallbackSymbolName:(id)arg3;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)textColor;

@end
