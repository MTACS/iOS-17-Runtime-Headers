
@protocol SearchUIResultsTableBridgingProtocol <SearchUIShowMoreSectionsDelegate, SearchUIViewTesting>

@required

- (<SearchUICommandDelegate> *)commandDelegate;
- (void)didPresentToResumeSearch:(bool)arg1;
- (bool)dragInteractionEnabled;
- (<SFFeedbackListener> *)feedbackListener;
- (UIView *)footerView;
- (double)headerHeight;
- (void)highlightResult:(SFSearchResult *)arg1;
- (<SearchUIKeyboardableTableViewDelegate> *)interactionDelegate;
- (UIScrollView *)majorScrollView;
- (void)purgeMemory;
- (NSString *)queryString;
- (void)replaceResult:(SFSearchResult *)arg1 withResult:(SFSearchResult *)arg2;
- (void)restoreResultsIfNeeded;
- (<SearchUIResultsViewDelegate> *)resultsViewDelegate;
- (void)returnKeyPressed;
- (void)scrollTableToTop;
- (void)setCommandDelegate:(id <SearchUICommandDelegate>)arg1;
- (void)setDragInteractionEnabled:(bool)arg1;
- (void)setFeedbackListener:(id <SFFeedbackListener>)arg1;
- (void)setFooterView:(UIView *)arg1;
- (void)setInteractionDelegate:(id <SearchUIKeyboardableTableViewDelegate>)arg1;
- (void)setQueryString:(NSString *)arg1;
- (void)setResultsViewDelegate:(id <SearchUIResultsViewDelegate>)arg1;
- (void)setShouldHideTableCellsUnderKeyboard:(bool)arg1;
- (void)setShouldUseInsetRoundedSections:(bool)arg1;
- (void)setShouldUseStandardSectionInsets:(bool)arg1;
- (void)setSizingDelegate:(id <SearchUISizingDelegate>)arg1;
- (void)setTableModel:(SearchUITableModel *)arg1;
- (void)setTextField:(UIControl<UITextInput> *)arg1;
- (void)setThreeDTouchEnabled:(bool)arg1;
- (bool)shouldHideTableCellsUnderKeyboard;
- (bool)shouldUseInsetRoundedSections;
- (bool)shouldUseStandardSectionInsets;
- (<SearchUISizingDelegate> *)sizingDelegate;
- (SearchUITableModel *)tableModel;
- (UIControl<UITextInput> *)textField;
- (bool)threeDTouchEnabled;
- (void)updateWithResultSections:(NSArray *)arg1 scrollToTop:(bool)arg2;
- (void)willDismiss;

@end
