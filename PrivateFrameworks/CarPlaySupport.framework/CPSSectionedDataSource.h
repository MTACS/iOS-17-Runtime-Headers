
@interface CPSSectionedDataSource : CPSDataSource <CPSessionConfigurationDelegate> {
    NSIndexPath * _assistantCellIndexPath;
    long long  _assistantCellPosition;
    NSString * _assistantCellTitle;
    long long  _assistantCellVisibility;
    bool  _limitingWithSections;
    long long  _maxVisibleSection;
    long long  _numberOfVisibleItemsInLastSection;
    NSArray * _sectionHeightCache;
    NSMutableArray * _sections;
    CPSessionConfiguration * _sessionConfiguration;
    CPSTemplateEnvironment * _templateEnvironment;
}

@property (nonatomic, readonly) NSIndexPath *assistantCellIndexPath;
@property (nonatomic) long long assistantCellPosition;
@property (nonatomic, retain) NSString *assistantCellTitle;
@property (nonatomic) long long assistantCellVisibility;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long numberOfEnhancedSections;
@property (nonatomic, retain) NSArray *sectionHeightCache;
@property (nonatomic, retain) NSMutableArray *sections;
@property (nonatomic, retain) CPSessionConfiguration *sessionConfiguration;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CPSTemplateEnvironment *templateEnvironment;

- (void).cxx_destruct;
- (long long)_filteredNumberOfItemsGivenSection:(long long)arg1 numberOfItems:(long long)arg2;
- (id)_sanitizedSectionIndexTitleForTitle:(id)arg1;
- (id)assistantCellIndexPath;
- (long long)assistantCellPosition;
- (id)assistantCellTitle;
- (long long)assistantCellVisibility;
- (id)firstItemIndexPath;
- (double)heightForItemAtIndexPath:(id)arg1 inEnvironment:(id)arg2;
- (id)indexPathForItemWithIdentifier:(id)arg1;
- (id)initWithSections:(id)arg1 templateEnvironment:(id)arg2;
- (void)invalidateHeightCache;
- (bool)isLimitingLists;
- (id)itemAtIndexPath:(id)arg1;
- (long long)numberOfEnhancedSections;
- (long long)numberOfItems;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)rebuildHeightCacheWithEnvironment:(id)arg1;
- (void)reloadItems:(id)arg1;
- (id)sectionAtIndex:(long long)arg1;
- (id)sectionHeightCache;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)sectionWithIdentifier:(id)arg1;
- (id)sections;
- (id)sessionConfiguration;
- (void)sessionConfiguration:(id)arg1 limitedUserInterfacesChanged:(unsigned long long)arg2;
- (void)setAssistantCellPosition:(long long)arg1;
- (void)setAssistantCellTitle:(id)arg1;
- (void)setAssistantCellVisibility:(long long)arg1;
- (void)setSectionHeightCache:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setSessionConfiguration:(id)arg1;
- (bool)showingAssistantInLastPosition;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)templateEnvironment;
- (void)updateIndexPathForAssistantItem;
- (void)updateSections:(id)arg1;

@end
