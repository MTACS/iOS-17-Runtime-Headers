
@interface PXSharedLibrarySharingSuggestionsDataSource : PXSectionedDataSource {
    NSDate * _aggregateBeforeDate;
    NSArray * _containers;
    <PXSharedLibrarySharingSuggestionsDataSourceDelegate> * _delegate;
    NSMutableDictionary * _promiseByContainer;
    PHFetchResult * _sharingSuggestions;
}

@property (nonatomic, readonly) NSDate *aggregateBeforeDate;
@property (nonatomic, readonly) NSArray *containers;
@property (nonatomic) <PXSharedLibrarySharingSuggestionsDataSourceDelegate> *delegate;
@property (nonatomic, readonly) PHFetchResult *sharingSuggestions;

- (void).cxx_destruct;
- (id)_promiseForContainer:(id)arg1;
- (id)aggregateBeforeDate;
- (id)containers;
- (id)delegate;
- (id)initWithSharingSuggestions:(id)arg1 aggregateBeforeDate:(id)arg2;
- (id)itemIndexesForSharingSuggestions:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (void)setDelegate:(id)arg1;
- (id)sharingSuggestions;

@end
