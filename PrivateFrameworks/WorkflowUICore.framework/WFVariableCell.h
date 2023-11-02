
@interface WFVariableCell : UICollectionViewCell {
    bool  _currentAvailable;
    unsigned long long  _currentControlState;
    WFIcon * _currentIcon;
    NSString * _currentTitle;
    WFVariablePillView * _pillView;
    WFVariable * _variable;
}

@property (nonatomic) bool currentAvailable;
@property (nonatomic) unsigned long long currentControlState;
@property (nonatomic, retain) WFIcon *currentIcon;
@property (nonatomic, retain) NSString *currentTitle;
@property (nonatomic, readonly) WFVariablePillView *pillView;
@property (nonatomic, retain) WFVariable *variable;

+ (double)widthWithVariable:(id)arg1 height:(double)arg2;

- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (bool)currentAvailable;
- (unsigned long long)currentControlState;
- (id)currentIcon;
- (id)currentTitle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (id)pillView;
- (void)setCurrentAvailable:(bool)arg1;
- (void)setCurrentControlState:(unsigned long long)arg1;
- (void)setCurrentIcon:(id)arg1;
- (void)setCurrentTitle:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setVariable:(id)arg1;
- (void)updateVariableImage;
- (id)variable;

@end
