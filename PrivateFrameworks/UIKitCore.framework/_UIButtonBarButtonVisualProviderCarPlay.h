
@interface _UIButtonBarButtonVisualProviderCarPlay : _UIButtonBarButtonVisualProvider {
    <_UIButtonBarAppearanceDelegate> * _appearanceDelegate;
    UIImageView * _backView;
    NSLayoutConstraint * _backViewToContentConstraint;
    NSArray * _buttonConstraints;
    UIView * _focusedView;
    UIImageView * _imageView;
    NSLayoutConstraint * _maxTitleViewWidthConstraint;
    NSArray * _titleAlternatives;
    NSMutableDictionary * _titleAlterntativeLookup;
    UILabel * _titleView;
}

@property (nonatomic) <_UIButtonBarAppearanceDelegate> *appearanceDelegate;
@property (nonatomic, retain) UIImageView *backView;
@property (nonatomic, retain) NSLayoutConstraint *backViewToContentConstraint;
@property (nonatomic, retain) NSArray *buttonConstraints;
@property (nonatomic, retain) UIView *focusedView;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) NSLayoutConstraint *maxTitleViewWidthConstraint;
@property (nonatomic, retain) NSArray *titleAlternatives;
@property (nonatomic, retain) NSMutableDictionary *titleAlterntativeLookup;
@property (nonatomic, retain) UILabel *titleView;

- (void).cxx_destruct;
- (void)_selectGestureChanged:(id)arg1;
- (void)_setupAlternateTitlesFromBarButtonItem:(id)arg1;
- (id)_titleAlternativeForTitle:(id)arg1;
- (id)appearanceDelegate;
- (id)backIndicatorView;
- (id)backView;
- (id)backViewToContentConstraint;
- (id)buttonConstraints;
- (void)buttonLayoutSubviews:(id)arg1 baseImplementation:(id /* block */)arg2;
- (void)configureButton:(id)arg1 fromBarButtonItem:(id)arg2;
- (void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3;
- (id)contentView;
- (id)focusedView;
- (id)imageView;
- (id)maxTitleViewWidthConstraint;
- (void)setAppearanceDelegate:(id)arg1;
- (void)setBackView:(id)arg1;
- (void)setBackViewToContentConstraint:(id)arg1;
- (void)setButtonConstraints:(id)arg1;
- (void)setFocusedView:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setMaxTitleViewWidthConstraint:(id)arg1;
- (void)setTitleAlternatives:(id)arg1;
- (void)setTitleAlterntativeLookup:(id)arg1;
- (void)setTitleView:(id)arg1;
- (bool)supportsBackButtons;
- (id)titleAlternatives;
- (id)titleAlterntativeLookup;
- (id)titleView;
- (void)updateButton:(id)arg1 forFocusedState:(bool)arg2;
- (void)updateButton:(id)arg1 forHighlightedState:(bool)arg2;

@end
