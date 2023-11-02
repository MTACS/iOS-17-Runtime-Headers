
@interface SBHSearchBar : SBFTouchPassThroughView <UITextFieldDelegate> {
    SBHSearchVisualConfiguration * _activeSearchConfiguration;
    bool  _alignsTextFieldOnPixelBoundaries;
    SBFFeatherBlurView * _backgroundView;
    double  _backgroundViewBottomInsetToTextField;
    UIButton * _cancelButton;
    <SBHSearchBarDelegate> * _delegate;
    SBHSearchVisualConfiguration * _inactiveSearchConfiguration;
    <SBIconListLayoutProvider> * _listLayoutProvider;
    bool  _portraitOrientation;
    SBHSearchTextField * _searchTextField;
    bool  _showsCancelButton;
    double  _textFieldCancelButtonSpacing;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _textFieldHorizontalLayoutInsets;
}

@property (nonatomic, readonly, copy) SBHSearchVisualConfiguration *activeSearchConfiguration;
@property (nonatomic) bool alignsTextFieldOnPixelBoundaries;
@property (nonatomic, readonly) SBFFeatherBlurView *backgroundView;
@property (nonatomic) double backgroundViewBottomInsetToTextField;
@property (nonatomic, readonly) UIButton *cancelButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBHSearchBarDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) SBHSearchVisualConfiguration *inactiveSearchConfiguration;
@property (nonatomic) <SBIconListLayoutProvider> *listLayoutProvider;
@property (getter=isPortraitOrientation, nonatomic) bool portraitOrientation;
@property (nonatomic, retain) SBHSearchTextField *searchTextField;
@property (nonatomic) bool showsCancelButton;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *text;

- (void).cxx_destruct;
- (void)_accessibilityBoldStatusDidChange:(id)arg1;
- (void)_cancelButtonTapped:(id)arg1;
- (id)_currentVisualConfiguration;
- (void)_invalidateIntrinsicContentSizeAndNotify;
- (double)_performHeightCalculationForVisualConfiguration:(id)arg1;
- (void)_searchBarTextFieldDidChangeText:(id)arg1;
- (void)_updateCancelButtonFont;
- (id)activeSearchConfiguration;
- (bool)alignsTextFieldOnPixelBoundaries;
- (id)backgroundView;
- (double)backgroundViewBottomInsetToTextField;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (bool)canResignFirstResponder;
- (id)cancelButton;
- (id)delegate;
- (id)focusGroupIdentifier;
- (id)inactiveSearchConfiguration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isFirstResponder;
- (bool)isPortraitOrientation;
- (void)layoutSubviews;
- (id)listLayoutProvider;
- (bool)resignFirstResponder;
- (id)searchTextField;
- (void)setAlignsTextFieldOnPixelBoundaries:(bool)arg1;
- (void)setBackgroundViewBottomInsetToTextField:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFocusGroupIdentifier:(id)arg1;
- (void)setInactiveSearchConfiguration:(id)arg1;
- (void)setListLayoutProvider:(id)arg1;
- (void)setPortraitOrientation:(bool)arg1;
- (void)setSearchTextField:(id)arg1;
- (void)setShowsCancelButton:(bool)arg1;
- (void)setShowsCancelButton:(bool)arg1 animated:(bool)arg2;
- (bool)showsCancelButton;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 forVisualConfiguration:(id)arg2;
- (id)text;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldBeginEditing:(id)arg1;
- (bool)textFieldShouldEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
