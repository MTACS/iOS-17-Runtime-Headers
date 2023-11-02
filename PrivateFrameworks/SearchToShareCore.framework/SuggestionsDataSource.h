
@interface SuggestionsDataSource : NSObject <PopUpDataSource, PopUpDelegate, UICollectionViewDataSource, UIScrollViewDelegate, UITableViewDataSource> {
    bool  _isScrolling;
    STSSearchModel * _searchModel;
    <STSSuggestionSelectionDelegate> * _selectionDelegate;
    <STSSearchModelUpdateDelegate> * _updateDelgate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isScrolling;
@property (nonatomic, retain) STSSearchModel *searchModel;
@property (nonatomic) <STSSuggestionSelectionDelegate> *selectionDelegate;
@property (readonly) Class superclass;
@property (nonatomic) <STSSearchModelUpdateDelegate> *updateDelgate;

- (void).cxx_destruct;
- (void)clearSuggestions;
- (void)didSelectItemAtIndex:(long long)arg1;
- (id)headerTitleForRow:(long long)arg1;
- (id)initWithSearchModel:(id)arg1;
- (bool)isGroupRow:(long long)arg1;
- (bool)isScrolling;
- (long long)numberOfRows;
- (bool)rowHasClearButton:(long long)arg1;
- (id)searchModel;
- (id)selectionDelegate;
- (void)setIsScrolling:(bool)arg1;
- (void)setSearchModel:(id)arg1;
- (void)setSelectionDelegate:(id)arg1;
- (void)setUpdateDelgate:(id)arg1;
- (id)stringValueForRowAtIndex:(long long)arg1;
- (id)updateDelgate;
- (void)updateQuerySuggestions:(id)arg1;

@end
