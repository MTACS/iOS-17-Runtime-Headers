
@interface CAMSemanticStyleSettingsView : UIView <CAMSemanticStylePickerDelegate, CEKBadgeViewDelegate> {
    UILabel * __descriptionLabel;
    NSLayoutConstraint * __descriptionLabelTopConstraint;
    UIScrollView * __scrollView;
    UIButton * __selectButton;
    NSArray * __semanticStyleBadges;
    CAMSemanticStyleDetailView * __semanticStyleDetailView;
    NSArray * __semanticStyleImageViews;
    CAMSemanticStylePicker * __semanticStylePicker;
    NSArray * __semanticStyles;
    UILabel * __titleLabel;
    <CAMSemanticStyleSettingsViewDelegate> * _delegate;
    bool  _showsTitle;
}

@property (nonatomic, readonly) UILabel *_descriptionLabel;
@property (setter=_setDescriptionLabelTopConstraint:, nonatomic, retain) NSLayoutConstraint *_descriptionLabelTopConstraint;
@property (nonatomic, readonly) UIScrollView *_scrollView;
@property (nonatomic, readonly) UIButton *_selectButton;
@property (nonatomic, readonly) NSArray *_semanticStyleBadges;
@property (nonatomic, readonly) CAMSemanticStyleDetailView *_semanticStyleDetailView;
@property (nonatomic, readonly) NSArray *_semanticStyleImageViews;
@property (nonatomic, readonly) CAMSemanticStylePicker *_semanticStylePicker;
@property (nonatomic, readonly) NSArray *_semanticStyles;
@property (nonatomic, readonly) UILabel *_titleLabel;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CAMSemanticStyleSettingsViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool showsTitle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_descriptionLabel;
- (id)_descriptionLabelTopConstraint;
- (void)_handleUseStyleButtonReleased:(id)arg1;
- (void)_layoutSemanticStyleMaskedBadgesForContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_previewImageNameForSemanticStylePreset:(long long)arg1;
- (id)_scrollView;
- (id)_selectButton;
- (id)_semanticStyleBadges;
- (id)_semanticStyleDetailView;
- (id)_semanticStyleImageViews;
- (id)_semanticStylePicker;
- (id)_semanticStyles;
- (void)_setDescriptionLabelTopConstraint:(id)arg1;
- (id)_titleLabel;
- (void)_updateUIForShowsTitle;
- (void)_updateUIForStyle:(id)arg1;
- (void)badgeViewDidChangeIntrinsicContentSize:(id)arg1;
- (id)delegate;
- (id)init;
- (void)layoutSubviews;
- (void)semanticStylePickerDidChangeSelectedStyle:(id)arg1;
- (void)semanticStylePickerDidScroll:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShowsTitle:(bool)arg1;
- (bool)showsTitle;

@end
