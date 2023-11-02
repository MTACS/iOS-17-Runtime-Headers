
@interface SearchUITableModel : NSObject {
    unsigned long long  _queryId;
    NSArray * _sections;
    NSArray * _tableRowModel;
}

@property (readonly) unsigned long long queryId;
@property (nonatomic, retain) NSArray *sections;
@property (nonatomic, retain) NSArray *tableRowModel;

+ (bool)resultHasHorizontallyGroupedCardSections:(id)arg1;
+ (id)rowModelForCardSection:(id)arg1 result:(id)arg2;
+ (bool)shouldDisplayChevronForRowModel:(id)arg1 previousRowModel:(id)arg2 nextRowModel:(id)arg3 nextCardsEnabled:(bool)arg4;
+ (id)tableModelWithCardSections:(id)arg1 isInline:(bool)arg2 queryId:(unsigned long long)arg3;
+ (id)tableModelWithCardSections:(id)arg1 result:(id)arg2 isInline:(bool)arg3 queryId:(unsigned long long)arg4 shouldCombine:(bool)arg5;
+ (id)tableModelWithResult:(id)arg1;
+ (id)tableModelWithResults:(id)arg1;
+ (id)tableModelWithSections:(id)arg1 expandedSections:(id)arg2 expandedCollectionCardSections:(id)arg3;

- (void).cxx_destruct;
- (id)cardSectionForIndexPath:(id)arg1;
- (id)description;
- (void)enumerateRowModels:(id /* block */)arg1;
- (unsigned long long)indexOfSection:(id)arg1;
- (bool)indexPathExists:(id)arg1;
- (id)indexPathForResultInFirstTwoSections:(id)arg1;
- (id)indexPathForRowModel:(id)arg1;
- (id)initWithQueryId:(unsigned long long)arg1;
- (long long)numberOfRowsForSection:(long long)arg1;
- (unsigned long long)numberOfSections;
- (unsigned long long)queryId;
- (id)removeRowModel:(id)arg1;
- (void)replaceResult:(id)arg1 withResult:(id)arg2 completion:(id /* block */)arg3;
- (id)resultForIndexPath:(id)arg1;
- (id)rowModelForIndexPath:(id)arg1;
- (bool)rowWillFillBackgroundWithContentAtIndexPath:(id)arg1;
- (id)sectionForIndex:(unsigned long long)arg1;
- (id)sections;
- (int)separatorStyleForIndexPath:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setTableRowModel:(id)arg1;
- (bool)shouldDisplayChevronForIndexPath:(id)arg1 nextCardsEnabled:(bool)arg2;
- (bool)shouldLeaveSpaceForChevronForIndexPath:(id)arg1;
- (id)tableRowModel;
- (id)updatedTableModelByDeletingSectionIndex:(unsigned long long)arg1;
- (id)updatedTableModelWithExpandedSections:(id)arg1 expandedCollectionCardSections:(id)arg2 hiddenSections:(id)arg3 atSectionIndex:(unsigned long long)arg4;

@end
