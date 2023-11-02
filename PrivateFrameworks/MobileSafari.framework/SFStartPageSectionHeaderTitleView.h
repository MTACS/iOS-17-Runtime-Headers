
@interface SFStartPageSectionHeaderTitleView : UIView {
    UIButton * _button;
    NSArray * _currentConstraints;
    UIView * _currentConstraintsSubview;
    UIFont * _font;
    UILabel * _label;
    UIMenu * _menu;
    NSString * _symbolImageName;
    NSString * _title;
}

@property (nonatomic, copy) UIMenu *menu;
@property (nonatomic, copy) NSString *symbolImageName;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)buttonShapesEnabledStatusDidChange:(id)arg1;
- (void)configureUsingSection:(id)arg1 visualStyleProvider:(id)arg2;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)menu;
- (void)setMenu:(id)arg1;
- (void)setSymbolImageName:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)symbolImageName;
- (id)title;
- (void)updateTitleColor;

@end
