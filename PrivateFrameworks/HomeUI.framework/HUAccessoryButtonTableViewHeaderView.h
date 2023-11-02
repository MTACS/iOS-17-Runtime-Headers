
@interface HUAccessoryButtonTableViewHeaderView : UITableViewHeaderFooterView <HFItemSectionAccessoryButtonHeader> {
    UIButton * _accessoryButton;
    UIFont * _accessoryButtonFont;
    NSString * _overrideAccessoryButtonTitle;
    HFItemSection * itemSection;
}

@property (nonatomic, retain) UIButton *accessoryButton;
@property (nonatomic, retain) UIFont *accessoryButtonFont;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFItemSection *itemSection;
@property (nonatomic, retain) NSString *overrideAccessoryButtonTitle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accessoryButton;
- (id)accessoryButtonFont;
- (void)accessoryButtonPressed;
- (id)defaultAccessoryButtonFont;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)itemSection;
- (id)overrideAccessoryButtonTitle;
- (void)prepareForReuse;
- (void)setAccessoryButton:(id)arg1;
- (void)setAccessoryButtonFont:(id)arg1;
- (void)setItemSection:(id)arg1;
- (void)setOverrideAccessoryButtonTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(bool)arg1;

@end
