
@interface SearchUIResultsCollectionViewController : SearchUICollectionViewController <SearchUIResultsTableBridgingProtocol> {
    double  _cachedHeaderHeight;
    NSMutableSet * _expandedSections;
    NSArray * _hiddenSections;
    NSMutableSet * _sectionsThatHaveBeenExpanded;
}

@property (nonatomic) double cachedHeaderHeight;
@property (nonatomic) <SearchUICommandDelegate> *commandDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dragInteractionEnabled;
@property (nonatomic, retain) NSMutableSet *expandedSections;
@property (nonatomic) <SFFeedbackListener> *feedbackListener;
@property (nonatomic, retain) UIView *footerView;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double headerHeight;
@property (nonatomic, retain) NSArray *hiddenSections;
@property <SearchUIKeyboardableTableViewDelegate> *interactionDelegate;
@property (nonatomic, retain) NSString *queryString;
@property <SearchUIResultsViewDelegate> *resultsViewDelegate;
@property (nonatomic, retain) NSMutableSet *sectionsThatHaveBeenExpanded;
@property (nonatomic) bool shouldHideTableCellsUnderKeyboard;
@property (nonatomic) bool shouldUseInsetRoundedSections;
@property (nonatomic) bool shouldUseStandardSectionInsets;
@property <SearchUISizingDelegate> *sizingDelegate;
@property (readonly) Class superclass;
@property (nonatomic, retain) SearchUITableModel *tableModel;
@property UIControl<UITextInput> *textField;
@property (nonatomic) bool threeDTouchEnabled;
@property (nonatomic, copy) id /* block */ viewDidUpdateHandler;
@property (nonatomic, copy) id /* block */ viewWillUpdateHandler;

+ (id)hiddenSectionsFromSections:(id)arg1;

- (void).cxx_destruct;
- (long long)_focusItemDeferralMode;
- (double)cachedHeaderHeight;
- (bool)canHighlightRowAtIndexPath:(id)arg1;
- (id)cellForRowModel:(id)arg1 atIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)commandEnvironment;
- (void)didPresentToResumeSearch:(bool)arg1;
- (void)didToggleExpansion;
- (void)expandCellsIfNeeded;
- (id)expandedSections;
- (double)headerHeight;
- (id)hiddenSections;
- (void)highlightResult:(id)arg1;
- (void)highlightRowAtIndexPath:(id)arg1;
- (bool)indexPathIsShowMoreSections:(id)arg1;
- (id)init;
- (id)majorScrollView;
- (id)preferredFocusEnvironments;
- (void)purgeAndResetTable;
- (void)replaceResult:(id)arg1 withResult:(id)arg2;
- (void)resignTextFieldIfNeeded;
- (void)restoreResultsIfNeeded;
- (void)returnKeyPressed;
- (void)scrollTableToTop;
- (bool)sectionShouldBeExpanded:(id)arg1;
- (id)sectionsThatHaveBeenExpanded;
- (void)setCachedHeaderHeight:(double)arg1;
- (void)setExpandedSections:(id)arg1;
- (void)setFocusableIndexPath:(id)arg1;
- (void)setHiddenSections:(id)arg1;
- (void)setSectionsThatHaveBeenExpanded:(id)arg1;
- (void)showMoreSectionsWithShowMoreButtonIndexPath:(id)arg1;
- (id)tableModelForExpansion;
- (void)toggleExpansionForSectionModel:(id)arg1;
- (bool)updateMustAccountForLayout;
- (void)updateWithResultSections:(id)arg1 scrollToTop:(bool)arg2;
- (void)updateWithResultSections:(id)arg1 scrollToTop:(bool)arg2 animated:(bool)arg3;
- (void)viewWillAppear:(bool)arg1;
- (void)willDismiss;

@end
