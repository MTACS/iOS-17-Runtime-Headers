
@interface PXPeopleSplitConfirmationViewController : PXPeopleConfirmationViewController {
    NSArray * _commonConstraints;
    UIButton * _confirmButton;
    NSLayoutConstraint * _controlGuideHeightConstraint;
    UILayoutGuide * _controlLayoutGuide;
    UIButton * _denyButton;
    NSLayoutConstraint * _denyButtonBottomConstraint;
    NSArray * _landscapeConstraints;
    <PXPerson> * _person;
    NSArray * _portraitConstraints;
    UIBarButtonItem * _undoButton;
}

@property (nonatomic, retain) NSArray *commonConstraints;
@property (nonatomic, retain) UIButton *confirmButton;
@property (nonatomic, retain) NSLayoutConstraint *controlGuideHeightConstraint;
@property (nonatomic, retain) UILayoutGuide *controlLayoutGuide;
@property (nonatomic, retain) UIButton *denyButton;
@property (nonatomic, readonly) NSLayoutConstraint *denyButtonBottomConstraint;
@property (nonatomic, retain) NSArray *landscapeConstraints;
@property (nonatomic, readonly) <PXPerson> *person;
@property (nonatomic, retain) NSArray *portraitConstraints;
@property (nonatomic, retain) UIBarButtonItem *undoButton;

- (void).cxx_destruct;
- (id)_buttonWithTitle:(id)arg1 action:(SEL)arg2 andColor:(id)arg3;
- (void)_disableActionButtonsWithSelectedButton:(id)arg1;
- (void)_enableActionButtons;
- (void)_updateUndoButton;
- (id)commonConstraints;
- (id)confirmButton;
- (void)confirmTapped:(id)arg1;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)controlGuideHeightConstraint;
- (id)controlLayoutGuide;
- (void)dealloc;
- (id)denyButton;
- (id)denyButtonBottomConstraint;
- (void)denyTapped:(id)arg1;
- (id)initWithPerson:(id)arg1;
- (id)landscapeConstraints;
- (void)noMoreSuggestionsAvailableForSuggestionManager:(id)arg1;
- (id)person;
- (id)portraitConstraints;
- (void)setCommonConstraints:(id)arg1;
- (void)setConfirmButton:(id)arg1;
- (void)setControlGuideHeightConstraint:(id)arg1;
- (void)setControlLayoutGuide:(id)arg1;
- (void)setDenyButton:(id)arg1;
- (void)setLandscapeConstraints:(id)arg1;
- (void)setPortraitConstraints:(id)arg1;
- (void)setUndoButton:(id)arg1;
- (void)suggestionDidDisplay;
- (void)suggestionManager:(id)arg1 hasNewSuggestionsAvailable:(id)arg2;
- (void)traitEnvironment:(id)arg1 didChangeTraitCollection:(id)arg2;
- (id)undoButton;
- (void)undoButtonTapped:(id)arg1;
- (void)updateViewConstraints;
- (void)updateViewWithViewState:(unsigned long long)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
