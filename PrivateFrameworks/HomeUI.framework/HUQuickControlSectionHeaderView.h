
@interface HUQuickControlSectionHeaderView : UICollectionReusableView <HFItemSectionAccessoryButtonHeader> {
    UIButton * _accessoryButton;
    NSArray * _accessoryButtonConstraints;
    <HFItemSectionAccessoryButtonHeaderDelegate> * _accessoryButtonTarget;
    NSString * _accessoryButtonTitleText;
    NSAttributedString * _attributedTitleText;
    bool  _hideAccessoryButton;
    bool  _hideHeaderText;
    bool  _hideSeparator;
    NSArray * _labelConstraints;
    UILabel * _titleLabel;
    NSString * _titleText;
    HFItemSection * itemSection;
}

@property (nonatomic, retain) UIButton *accessoryButton;
@property (nonatomic, retain) NSArray *accessoryButtonConstraints;
@property (nonatomic) <HFItemSectionAccessoryButtonHeaderDelegate> *accessoryButtonTarget;
@property (nonatomic, retain) NSString *accessoryButtonTitleText;
@property (nonatomic, retain) NSAttributedString *attributedTitleText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideAccessoryButton;
@property (nonatomic) bool hideHeaderText;
@property (nonatomic) bool hideSeparator;
@property (nonatomic, retain) HFItemSection *itemSection;
@property (nonatomic, retain) NSArray *labelConstraints;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) NSString *titleText;

+ (id)_titleFont;
+ (double)estimatedHeight;
+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (id)accessoryButton;
- (id)accessoryButtonConstraints;
- (void)accessoryButtonTapped;
- (id)accessoryButtonTarget;
- (id)accessoryButtonTitleText;
- (id)attributedTitleText;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)hideAccessoryButton;
- (bool)hideHeaderText;
- (bool)hideSeparator;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)itemSection;
- (id)labelConstraints;
- (void)prepareForReuse;
- (void)setAccessoryButton:(id)arg1;
- (void)setAccessoryButtonConstraints:(id)arg1;
- (void)setAccessoryButtonTarget:(id)arg1;
- (void)setAccessoryButtonTitleText:(id)arg1;
- (void)setAttributedTitleText:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setHideAccessoryButton:(bool)arg1;
- (void)setHideHeaderText:(bool)arg1;
- (void)setHideSeparator:(bool)arg1;
- (void)setItemSection:(id)arg1;
- (void)setLabelConstraints:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleText:(id)arg1;
- (id)titleLabel;
- (id)titleText;
- (void)updateConstraints;
- (void)updateUIForReachabilityState:(unsigned long long)arg1;
- (void)updateUIWithAnimation:(bool)arg1;

@end
