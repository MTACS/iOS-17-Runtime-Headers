
@interface AKFillableShapeStylePicker : AKModernToolbarPicker {
    NSArray * _buttons;
    bool  _showFill;
}

@property (nonatomic) bool showFill;

- (void).cxx_destruct;
- (void)_styleButtonPressed:(id)arg1;
- (void)_updateImagesForAnnotationType:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 controller:(id)arg2;
- (void)revalidateItems:(id)arg1;
- (void)setShowFill:(bool)arg1;
- (bool)showFill;

@end
