
@interface STSZKWBrowserHeaderView : UIView <PKScribbleInteractionDelegate, PKScribbleInteractionElementSource, STSSearchBarDelegate, UISearchBarDelegate, UITextFieldDelegate> {
    NSArray * _bottomSuggestions;
    NSMutableArray * _bottomZKWButtons;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    <STSZKWBrowserHeaderViewDelegate> * _delegate;
    UIButton * _feedbackButton;
    <STSKeyCommandDelegate> * _keyCommandDelegate;
    STSSearchBar * _searchBar;
    NSMutableArray * _searchBarConstraints;
    NSArray * _topSuggestions;
    NSMutableArray * _topZKWButtons;
    UIVisualEffectView * _visualEffectView;
    bool  _writingInSearchBar;
}

@property (nonatomic, copy) NSArray *bottomSuggestions;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <STSZKWBrowserHeaderViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <STSKeyCommandDelegate> *keyCommandDelegate;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *topSuggestions;

- (void).cxx_destruct;
- (id)_buttonWithTitle:(id)arg1;
- (void)_cancelButtonPressed:(id)arg1;
- (void)_scribbleInteraction:(id)arg1 didFinishWritingInElement:(id)arg2;
- (void)_scribbleInteraction:(id)arg1 focusElement:(id)arg2 initialFocusSelectionReferencePoint:(struct CGPoint { double x1; double x2; })arg3 completion:(id /* block */)arg4;
- (bool)_scribbleInteraction:(id)arg1 focusWillTransformElement:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_scribbleInteraction:(id)arg1 frameForElement:(id)arg2;
- (void)_scribbleInteraction:(id)arg1 requestElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 completion:(id /* block */)arg3;
- (bool)_scribbleInteraction:(id)arg1 shouldBeginAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)_scribbleInteraction:(id)arg1 willBeginWritingInElement:(id)arg2;
- (double)_searchBarWidthFraction;
- (void)_searchButtonPressed:(id)arg1;
- (void)_suggestionButtonPressed:(id)arg1;
- (unsigned long long)_suggestionIndexForButton:(id)arg1;
- (void)_updateTopStackView:(bool)arg1 andBottomStackView:(bool)arg2;
- (id)bottomSuggestions;
- (void)clear;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRect;
- (id)delegate;
- (void)downArrowPressed;
- (void)enableSearchButton;
- (void)escapeKeyPressed;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)keyCommandDelegate;
- (id)keyCommands;
- (void)layoutSubviews;
- (void)returnKeyPressed;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarClicked;
- (bool)searchBarShouldBeginEditing:(id)arg1;
- (id)searchQuery;
- (void)setBottomSuggestions:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setKeyCommandDelegate:(id)arg1;
- (void)setSearchQuery:(id)arg1;
- (void)setTopSuggestions:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)topSuggestions;
- (void)traitCollectionDidChange:(id)arg1;
- (void)upArrowPressed;

@end
