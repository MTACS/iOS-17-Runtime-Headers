
@interface SearchUICardCollectionViewController : SearchUICollectionViewController <SearchUICardTableBridgingProtocol, SearchUIViewTesting> {
    SFCard * _card;
    bool  _rowSelectionAppearanceEnabled;
}

@property (nonatomic, retain) SFCard *card;
@property (nonatomic) <SearchUICardViewDelegate> *cardViewDelegate;
@property (readonly) struct CGSize { double x1; double x2; } collectionViewContentSize;
@property (nonatomic) <SearchUICommandDelegate> *commandDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dragInteractionEnabled;
@property (nonatomic) <SFFeedbackListener> *feedbackListener;
@property (readonly) unsigned long long hash;
@property <SearchUIResultsViewDelegate> *resultsViewDelegate;
@property (nonatomic) bool rowSelectionAppearanceEnabled;
@property (nonatomic) bool shouldUseInsetRoundedSections;
@property (nonatomic) bool shouldUseStandardSectionInsets;
@property (nonatomic) bool showsVerticalScrollIndicator;
@property <SearchUISizingDelegate> *sizingDelegate;
@property (readonly) Class superclass;
@property (nonatomic, retain) SearchUITableModel *tableModel;
@property (nonatomic) UITextField *textField;
@property (nonatomic) bool threeDTouchEnabled;
@property (nonatomic, copy) id /* block */ viewDidUpdateHandler;
@property (nonatomic, copy) id /* block */ viewWillUpdateHandler;

- (void).cxx_destruct;
- (id)card;
- (id)cellForRowModel:(id)arg1 atIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (id)init;
- (void)reloadViews;
- (Class)restorationContextClass;
- (bool)rowSelectionAppearanceEnabled;
- (id)scrollViewForSizing;
- (void)setCard:(id)arg1;
- (void)setRowSelectionAppearanceEnabled:(bool)arg1;
- (void)setShouldUseInsetRoundedSections:(bool)arg1;
- (void)setShouldUseStandardSectionInsets:(bool)arg1;
- (void)setShowsVerticalScrollIndicator:(bool)arg1;
- (bool)showsVerticalScrollIndicator;
- (id)tableView;
- (void)updateTopPadding;
- (void)viewDidDisappear:(bool)arg1;

@end
