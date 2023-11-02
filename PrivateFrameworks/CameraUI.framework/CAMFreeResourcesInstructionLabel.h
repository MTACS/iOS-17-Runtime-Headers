
@interface CAMFreeResourcesInstructionLabel : CAMInstructionLabel {
    unsigned long long  _freeResourceInstructionState;
}

@property (nonatomic) unsigned long long freeResourceInstructionState;

- (double)_backgroundAlpha;
- (id)_symbolSuffixName;
- (id)_textColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_textInsets;
- (void)_updateText;
- (bool)_wantsPrefixActivityIndicatorView;
- (unsigned long long)freeResourceInstructionState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setFreeResourceInstructionState:(unsigned long long)arg1;

@end
