
@interface _UIAttributedStringView : UIView {
    NSAttributedString * _string;
}

+ (Class)layerClass;

- (void)_updateContentsScale:(id)arg1;
- (void)dealloc;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setString:(id)arg1;
- (void)setTextRotationAngle:(double)arg1;

@end
