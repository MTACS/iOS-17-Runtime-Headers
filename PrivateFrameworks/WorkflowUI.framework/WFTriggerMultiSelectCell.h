
@interface WFTriggerMultiSelectCell : UITableViewCell <WFTriggerOptionSelectionViewContainerDelegate> {
    WFTriggerOptionSelectionViewContainer * _containerBottom;
    WFTriggerOptionSelectionViewContainer * _containerMiddle;
    WFTriggerOptionSelectionViewContainer * _containerTop;
    <WFTriggerMultiSelectCellDelegate> * _delegate;
    UIColor * _selectedViewTintColor;
    bool  _singleSelection;
    UIStackView * _stackView;
}

@property (nonatomic, readonly) WFTriggerOptionSelectionViewContainer *containerBottom;
@property (nonatomic, readonly) WFTriggerOptionSelectionViewContainer *containerMiddle;
@property (nonatomic, readonly) WFTriggerOptionSelectionViewContainer *containerTop;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFTriggerMultiSelectCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isLeftViewSelected, nonatomic) bool leftViewSelected;
@property (nonatomic, readonly) NSArray *optionContainers;
@property (getter=isRightViewSelected, nonatomic) bool rightViewSelected;
@property (nonatomic, readonly) NSArray *selectedCellViews;
@property (nonatomic, retain) UIColor *selectedViewTintColor;
@property (nonatomic) bool singleSelection;
@property (nonatomic, readonly) UIStackView *stackView;
@property (readonly) Class superclass;

+ (id)multiSelectCellOptionConfigurationWithImage:(id)arg1 selectedImage:(id)arg2 title:(id)arg3 tintColor:(id)arg4 selected:(bool)arg5;
+ (id)multiSelectCellOptionConfigurationWithImage:(id)arg1 title:(id)arg2 tintColor:(id)arg3 selected:(bool)arg4;

- (void).cxx_destruct;
- (void)configureWithLeftGlyph:(id)arg1 leftTitle:(id)arg2 leftTintColor:(id)arg3 rightGlyph:(id)arg4 rightTitle:(id)arg5 rightTintColor:(id)arg6;
- (id)containerBottom;
- (id)containerMiddle;
- (id)containerTop;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isLeftViewSelected;
- (bool)isRightViewSelected;
- (id)optionContainers;
- (void)prepareForReuse;
- (id)selectedCellViews;
- (id)selectedViewTintColor;
- (void)setDelegate:(id)arg1;
- (void)setLeftViewSelected:(bool)arg1;
- (void)setMultiSelectCellOptionConfigurations:(id)arg1;
- (void)setRightViewSelected:(bool)arg1;
- (void)setSelectedViewTintColor:(id)arg1;
- (void)setSingleSelection:(bool)arg1;
- (bool)singleSelection;
- (id)stackView;
- (void)view:(id)arg1 didSelectOptionWithLeftViewCurrentlySelected:(bool)arg2;
- (void)view:(id)arg1 didSelectOptionWithRightViewCurrentlySelected:(bool)arg2;

@end
