
@protocol SearchUICardTableBridgingProtocol <SearchUIViewTesting>

@required

- (SFCard *)card;
- (<SearchUICardViewDelegate> *)cardViewDelegate;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (<SearchUICommandDelegate> *)commandDelegate;
- (bool)dragInteractionEnabled;
- (<SFFeedbackListener> *)feedbackListener;
- (void)reloadViews;
- (<SearchUIResultsViewDelegate> *)resultsViewDelegate;
- (bool)rowSelectionAppearanceEnabled;
- (UIScrollView *)scrollViewForSizing;
- (void)setCard:(SFCard *)arg1;
- (void)setCardViewDelegate:(id <SearchUICardViewDelegate>)arg1;
- (void)setCommandDelegate:(id <SearchUICommandDelegate>)arg1;
- (void)setDragInteractionEnabled:(bool)arg1;
- (void)setFeedbackListener:(id <SFFeedbackListener>)arg1;
- (void)setResultsViewDelegate:(id <SearchUIResultsViewDelegate>)arg1;
- (void)setRowSelectionAppearanceEnabled:(bool)arg1;
- (void)setShouldUseInsetRoundedSections:(bool)arg1;
- (void)setShouldUseStandardSectionInsets:(bool)arg1;
- (void)setShowsVerticalScrollIndicator:(bool)arg1;
- (void)setSizingDelegate:(id <SearchUISizingDelegate>)arg1;
- (void)setTableModel:(SearchUITableModel *)arg1;
- (void)setTextField:(UITextField *)arg1;
- (void)setThreeDTouchEnabled:(bool)arg1;
- (bool)shouldUseInsetRoundedSections;
- (bool)shouldUseStandardSectionInsets;
- (bool)showsVerticalScrollIndicator;
- (<SearchUISizingDelegate> *)sizingDelegate;
- (SearchUITableModel *)tableModel;
- (UITextField *)textField;
- (bool)threeDTouchEnabled;

@end
