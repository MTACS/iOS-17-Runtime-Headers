
@interface PXSearchResultsSection : NSObject {
    bool  _expanded;
    NSMutableSet * _mutableSearchResultUUIDs;
    NSMutableArray * _mutableSearchResults;
    unsigned long long  _sectionType;
    NSArray * _sortDescriptors;
    bool  _sorted;
    NSString * _title;
}

@property (readonly) NSDictionary *debugDictionary;
@property (getter=isExpandable, nonatomic, readonly) bool expandable;
@property (getter=isExpanded, nonatomic) bool expanded;
@property (nonatomic, readonly) NSMutableSet *mutableSearchResultUUIDs;
@property (nonatomic, readonly) NSMutableArray *mutableSearchResults;
@property (nonatomic, readonly) NSArray *searchResults;
@property (nonatomic, readonly) unsigned long long sectionType;
@property (nonatomic, copy) NSArray *sortDescriptors;
@property (getter=isSorted, nonatomic) bool sorted;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) unsigned long long totalCount;
@property (nonatomic, readonly) unsigned long long visibleCount;

+ (unsigned long long)_sectionTypeForCategory:(unsigned long long)arg1;
+ (id)_stringForCategory:(unsigned long long)arg1;
+ (id)sectionTitleForCategoryMask:(unsigned long long)arg1;
+ (unsigned long long)sectionTypeForCategoryMask:(unsigned long long)arg1 isMomentSection:(bool)arg2 isTopAssetSection:(bool)arg3;

- (void).cxx_destruct;
- (void)addSearchResult:(id)arg1;
- (id)debugDictionary;
- (id)description;
- (id)init;
- (id)initWithTitle:(id)arg1 withSectionType:(unsigned long long)arg2;
- (bool)isExpandable;
- (bool)isExpanded;
- (bool)isSorted;
- (unsigned long long)maxVisibleItemsInCollapsedSection;
- (id)mutableSearchResultUUIDs;
- (id)mutableSearchResults;
- (void)removeSearchResult:(id)arg1;
- (id)searchResults;
- (unsigned long long)sectionType;
- (void)setExpanded:(bool)arg1;
- (void)setSortDescriptors:(id)arg1;
- (void)setSorted:(bool)arg1;
- (id)sortDescriptors;
- (id)title;
- (unsigned long long)totalCount;
- (unsigned long long)visibleCount;

@end
