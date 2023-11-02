
@interface TUIVariantCell : UIView {
    UIView * _backgroundView;
    NSArray * _cellConstraints;
    NSString * _displayString;
    bool  _highlighted;
    unsigned long long  _indexNumber;
    UILabel * _labelView;
    bool  _primaryVariant;
    UIKBRenderTraits * _traits;
}

@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic, retain) NSArray *cellConstraints;
@property (nonatomic, readonly) NSString *displayString;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic) unsigned long long indexNumber;
@property (nonatomic, readonly) UILabel *labelView;
@property (getter=isPrimaryVariant, nonatomic) bool primaryVariant;
@property (nonatomic, retain) UIKBRenderTraits *traits;

- (void).cxx_destruct;
- (id)backgroundView;
- (id)cellConstraints;
- (id)constraintsToEmbedView:(id)arg1 withinView:(id)arg2 withInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (id)displayString;
- (id)fontForSymbolStyle:(id)arg1;
- (unsigned long long)indexNumber;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 string:(id)arg2 traits:(id)arg3;
- (bool)isHighlighted;
- (bool)isPrimaryVariant;
- (id)labelView;
- (bool)requiresConstraintBasedLayout;
- (void)setCellConstraints:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIndexNumber:(unsigned long long)arg1;
- (void)setPrimaryVariant:(bool)arg1;
- (void)setTraits:(id)arg1;
- (id)traits;
- (void)updateConstraints;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
