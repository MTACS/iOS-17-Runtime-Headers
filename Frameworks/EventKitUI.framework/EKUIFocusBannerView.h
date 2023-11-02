
@interface EKUIFocusBannerView : UIView <UILargeContentViewerInteractionDelegate> {
    NSArray * _activeConstraints;
    <EKUIFocusBannerViewDelegate> * _delegate;
    bool  _disallowAccessibilityTextSizes;
    UILabel * _focusFilterStateDescriptionLabel;
    UIButton * _focusFilterToggleButton;
    NSArray * _horizontalLayoutConstraints;
    unsigned long long  _layout;
    bool  _on;
    bool  _showDividers;
    NSLayoutConstraint * _topKeylineHeightConstraint;
    UIView * _topKeylineView;
    NSArray * _verticalLayoutConstraints;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <EKUIFocusBannerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disallowAccessibilityTextSizes;
@property (nonatomic, retain) UILabel *focusFilterStateDescriptionLabel;
@property (nonatomic, retain) UIButton *focusFilterToggleButton;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long layout;
@property (nonatomic) bool on;
@property (nonatomic) bool showDividers;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSLayoutConstraint *topKeylineHeightConstraint;
@property (nonatomic, retain) UIView *topKeylineView;

- (void).cxx_destruct;
- (unsigned long long)_effectiveLayout;
- (id)_focusFilterButtonConfiguration;
- (id)_horizontalLayoutConstraints;
- (void)_tapped;
- (void)_updateKeylineHeightConstraints;
- (void)_updateView;
- (id)_verticalLayoutConstraints;
- (void)contentSizeCategoryDidChange;
- (id)delegate;
- (bool)disallowAccessibilityTextSizes;
- (id)focusFilterStateDescriptionLabel;
- (id)focusFilterToggleButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)largeContentImage;
- (id)largeContentTitle;
- (void)largeContentViewerInteraction:(id)arg1 didEndOnItem:(id)arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3;
- (unsigned long long)layout;
- (bool)on;
- (bool)scalesLargeContentImage;
- (void)setDelegate:(id)arg1;
- (void)setDisallowAccessibilityTextSizes:(bool)arg1;
- (void)setFocusFilterStateDescriptionLabel:(id)arg1;
- (void)setFocusFilterToggleButton:(id)arg1;
- (void)setLayout:(unsigned long long)arg1;
- (void)setOn:(bool)arg1;
- (void)setShowDividers:(bool)arg1;
- (void)setTopKeylineHeightConstraint:(id)arg1;
- (void)setTopKeylineView:(id)arg1;
- (bool)showDividers;
- (bool)showsLargeContentViewer;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)topKeylineHeightConstraint;
- (id)topKeylineView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;

@end
