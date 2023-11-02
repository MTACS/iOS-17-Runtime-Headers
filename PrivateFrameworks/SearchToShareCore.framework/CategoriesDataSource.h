
@interface CategoriesDataSource : NSObject <PopUpDataSource, PopUpDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UIScrollViewDelegate, UITableViewDataSource> {
    NSArray * _categories;
    bool  _isScrolling;
    NSMutableArray * _model;
    NSMutableArray * _recents;
    STSSearchModel * _searchModel;
    <STSCategorySelectionDelegate> * _selectionDelegate;
    <STSSearchModelUpdateDelegate> * _updateDelegate;
}

@property (nonatomic, retain) NSArray *categories;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isScrolling;
@property (nonatomic, retain) NSMutableArray *model;
@property (nonatomic, retain) NSMutableArray *recents;
@property (nonatomic, retain) STSSearchModel *searchModel;
@property (nonatomic) <STSCategorySelectionDelegate> *selectionDelegate;
@property (readonly) Class superclass;
@property (nonatomic) <STSSearchModelUpdateDelegate> *updateDelegate;

- (void).cxx_destruct;
- (void)_commitClearRecents;
- (id)_searchResultIdentifierForSuggestion:(id)arg1 recent:(bool)arg2;
- (void)addQueryToRecents:(id)arg1;
- (id)categories;
- (void)didSelectItemAtIndex:(long long)arg1;
- (id)headerTitleForRow:(long long)arg1;
- (id)initWithSearchModel:(id)arg1;
- (bool)isGroupRow:(long long)arg1;
- (bool)isScrolling;
- (id)model;
- (long long)numberOfRows;
- (id)recentQueries;
- (id)recents;
- (bool)rowHasClearButton:(long long)arg1;
- (id)searchModel;
- (id)selectionDelegate;
- (void)sendRankSectionsFeedback;
- (void)setCategories:(id)arg1;
- (void)setIsScrolling:(bool)arg1;
- (void)setModel:(id)arg1;
- (void)setRecents:(id)arg1;
- (void)setSearchModel:(id)arg1;
- (void)setSelectionDelegate:(id)arg1;
- (void)setUpdateDelegate:(id)arg1;
- (id)stringValueForRowAtIndex:(long long)arg1;
- (id)updateDelegate;
- (void)updateModel;
- (void)updateRecents:(id)arg1;
- (id)visibleResultsForIndexPaths:(id)arg1;

@end
