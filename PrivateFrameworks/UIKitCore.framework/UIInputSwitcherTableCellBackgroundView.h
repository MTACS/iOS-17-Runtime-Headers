
@interface UIInputSwitcherTableCellBackgroundView : UIView {
    bool  _drawsBorder;
    bool  _drawsOpaque;
    unsigned long long  _roundedCorners;
    bool  _selected;
    bool  _usesDarkTheme;
}

@property (nonatomic) bool drawsBorder;
@property (nonatomic) bool drawsOpaque;
@property (nonatomic) unsigned long long roundedCorners;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic) bool usesDarkTheme;

- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)drawsBorder;
- (bool)drawsOpaque;
- (bool)isSelected;
- (unsigned long long)roundedCorners;
- (void)setDrawsBorder:(bool)arg1;
- (void)setDrawsOpaque:(bool)arg1;
- (void)setRoundedCorners:(unsigned long long)arg1;
- (void)setSelected:(bool)arg1;
- (void)setUsesDarkTheme:(bool)arg1;
- (bool)usesDarkTheme;

@end
