
@interface CPSInformationEntityViewController : CPSBaseTemplateViewController <CPInformationTemplateProviding, CPSButtonDelegate, CPSInformationScrollViewDelegate, UIScrollViewDelegate> {
    CPSInformationTemplateButtonsViewController * _buttonsViewController;
    UILayoutGuide * _centeringGuide;
    NSArray * _centeringGuideConstraints;
    CPSHairlineView * _hairlineView;
    UIStackView * _itemStackView;
    NSLayoutConstraint * _itemStackViewLeadingConstraint;
    NSLayoutConstraint * _itemStackViewWidthConstraint;
    CPSInformationScrollView * _scrollView;
    UILabel * _titleLabel;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic, retain) CPSInformationTemplateButtonsViewController *buttonsViewController;
@property (nonatomic, retain) UILayoutGuide *centeringGuide;
@property (nonatomic, retain) NSArray *centeringGuideConstraints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CPSHairlineView *hairlineView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIStackView *itemStackView;
@property (nonatomic, retain) NSLayoutConstraint *itemStackViewLeadingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *itemStackViewWidthConstraint;
@property (nonatomic, retain) CPSInformationScrollView *scrollView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UIVisualEffectView *visualEffectView;

- (void).cxx_destruct;
- (void)_scrollViewAccessoryInsetsDidChange:(id)arg1;
- (void)_setHairlineHidden:(bool)arg1;
- (void)_updateCenteringGuideConstraints;
- (void)_updateHairline;
- (void)_updateItemStackView;
- (void)_updateScrollViewInsets;
- (void)_viewDidLoad;
- (id)buttonsViewController;
- (id)centeringGuide;
- (id)centeringGuideConstraints;
- (void)didSelectButton:(id)arg1;
- (id)hairlineView;
- (id)informationTemplate;
- (id)itemStackView;
- (id)itemStackViewLeadingConstraint;
- (id)itemStackViewWidthConstraint;
- (id)scrollView;
- (void)scrollViewContentSizeChanged:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setButtonsViewController:(id)arg1;
- (void)setCenteringGuide:(id)arg1;
- (void)setCenteringGuideConstraints:(id)arg1;
- (void)setControl:(id)arg1 enabled:(bool)arg2;
- (void)setHairlineView:(id)arg1;
- (void)setItemStackView:(id)arg1;
- (void)setItemStackViewLeadingConstraint:(id)arg1;
- (void)setItemStackViewWidthConstraint:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setVisualEffectView:(id)arg1;
- (id)titleLabel;
- (void)updateWithInformationTemplate:(id)arg1;
- (void)viewDidLayoutSubviews;
- (id)visualEffectView;

@end
