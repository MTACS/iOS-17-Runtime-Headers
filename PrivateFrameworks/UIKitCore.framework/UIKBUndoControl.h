
@interface UIKBUndoControl : UIControl {
    NSLayoutConstraint * _coverConstraintBottomAnchor;
    NSLayoutConstraint * _coverConstraintLeftAnchor;
    NSLayoutConstraint * _coverConstraintRightAnchor;
    NSLayoutConstraint * _coverConstraintTopAnchor;
    UIImageView * _icon;
    UILabel * _label;
    _UISlotView * _securePasteButtonSlotView;
    UIView * _springCoverView;
    UIKBUndoStyling * _style;
    long long  _type;
}

@property (nonatomic, retain) NSLayoutConstraint *coverConstraintBottomAnchor;
@property (nonatomic, retain) NSLayoutConstraint *coverConstraintLeftAnchor;
@property (nonatomic, retain) NSLayoutConstraint *coverConstraintRightAnchor;
@property (nonatomic, retain) NSLayoutConstraint *coverConstraintTopAnchor;
@property (nonatomic, retain) UIImageView *icon;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic) _UISlotView *securePasteButtonSlotView;
@property (nonatomic, retain) UIView *springCoverView;
@property (nonatomic, retain) UIKBUndoStyling *style;
@property (nonatomic) long long type;

+ (id)controlLableTextByType:(long long)arg1 style:(id)arg2 available:(bool)arg3;

- (void).cxx_destruct;
- (unsigned int)_secureName;
- (void)configureSecurePasteButtonInRootView:(id)arg1;
- (id)controlImageByType:(long long)arg1;
- (id)controlLabelImageNameByType:(long long)arg1 isRTL:(bool)arg2;
- (id)coverConstraintBottomAnchor;
- (id)coverConstraintLeftAnchor;
- (id)coverConstraintRightAnchor;
- (id)coverConstraintTopAnchor;
- (id)icon;
- (id)initWithType:(long long)arg1 andStyling:(id)arg2;
- (id)label;
- (void)layoutControlForType:(long long)arg1 andStyling:(id)arg2;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)securePasteButtonSlotView;
- (void)setCoverConstraintBottomAnchor:(id)arg1;
- (void)setCoverConstraintLeftAnchor:(id)arg1;
- (void)setCoverConstraintRightAnchor:(id)arg1;
- (void)setCoverConstraintTopAnchor:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setSecurePasteButtonSlotView:(id)arg1;
- (void)setSpringCoverView:(id)arg1;
- (void)setStyle:(id)arg1;
- (void)setType:(long long)arg1;
- (id)springCoverView;
- (id)style;
- (void)traitCollectionDidChange:(id)arg1;
- (long long)type;
- (void)updateCoverWithTavelProcess:(double)arg1 isRTL:(bool)arg2;
- (void)updateUndoControlStyle;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
