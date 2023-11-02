
@interface _UIKeyShortcutHUDSearchBar : UIView {
    UIView * _backgroundView;
    UIButton * _cancelButton;
    <_UIKeyShortcutHUDSearchBarDelegate> * _delegate;
    _UIKeyShortcutHUDSearchTextField * _searchTextField;
    NSArray * _searchTextFieldTransitionConstraints;
    bool  _searching;
    NSArray * _standardSearchTextFieldConstraints;
    bool  _usingFallbackSearchAnimation;
}

@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, retain) UIButton *cancelButton;
@property (nonatomic) <_UIKeyShortcutHUDSearchBarDelegate> *delegate;
@property (getter=isEditing, nonatomic, readonly) bool editing;
@property (nonatomic) _UIKeyShortcutHUDSearchButton *searchButton;
@property (nonatomic, readonly) _UIKeyShortcutHUDSearchTextField *searchTextField;
@property (nonatomic, retain) NSArray *searchTextFieldTransitionConstraints;
@property (getter=isSearching, nonatomic) bool searching;
@property (nonatomic, retain) NSArray *standardSearchTextFieldConstraints;
@property (nonatomic, retain) NSString *text;
@property (getter=isUsingFallbackSearchAnimation, nonatomic) bool usingFallbackSearchAnimation;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_createBackgroundView;
- (void)_createCancelButton;
- (void)_createSearchTextField;
- (void)_doNothing:(id)arg1;
- (void)_setupLayout;
- (void)_textChanged:(id)arg1;
- (id)backgroundView;
- (bool)becomeFirstResponder;
- (id)cancelButton;
- (id)delegate;
- (void)didCompleteSearchTransition;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEditing;
- (bool)isFirstResponder;
- (bool)isSearching;
- (bool)isUsingFallbackSearchAnimation;
- (void)prepareForSearchTransition:(bool)arg1 usingCell:(id)arg2;
- (bool)resignFirstResponder;
- (id)searchButton;
- (id)searchTextField;
- (id)searchTextFieldTransitionConstraints;
- (void)selectAll:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSearchButton:(id)arg1;
- (void)setSearchTextFieldTransitionConstraints:(id)arg1;
- (void)setSearching:(bool)arg1;
- (void)setStandardSearchTextFieldConstraints:(id)arg1;
- (void)setText:(id)arg1;
- (void)setUsingFallbackSearchAnimation:(bool)arg1;
- (id)standardSearchTextFieldConstraints;
- (id)text;

@end
