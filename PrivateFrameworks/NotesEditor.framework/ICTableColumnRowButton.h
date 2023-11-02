
@interface ICTableColumnRowButton : UIButton {
    NSArray * _columnOrRowIdentifiers;
    bool  _isColumn;
    bool  _isLTR;
}

@property (nonatomic, retain) NSArray *columnOrRowIdentifiers;
@property (nonatomic, readonly) bool isColumn;
@property (nonatomic, readonly) bool isLTR;

- (void).cxx_destruct;
- (id)accessibilityContainer;
- (void)accessibilityDarkerSystemColorsStatusDidChange:(id)arg1;
- (id)columnOrRowIdentifiers;
- (void)dealloc;
- (id)initAsColumn:(bool)arg1 isLeftToRight:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isColumn;
- (bool)isLTR;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setColumnOrRowIdentifiers:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })touchRect;
- (void)updateConfiguration;

@end
