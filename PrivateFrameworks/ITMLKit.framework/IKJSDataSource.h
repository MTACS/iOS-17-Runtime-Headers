
@interface IKJSDataSource : IKJSDataObservable <IKJSDataSource, _IKJSDataSource, _IKJSDataSourceProxy> {
    NSMutableArray * _dataSourceViewPointers;
    bool  _dataSourceViewsDirty;
    NSDictionary * _indexTitles;
    NSMutableDictionary * _loadIndexesRequestsBySegmentIndex;
    NSMutableIndexSet * _loadedSegmentIndexes;
    long long  _segmentSize;
}

@property (nonatomic, readonly) NSMutableArray *dataSourceViewPointers;
@property (nonatomic, readonly, copy) NSDictionary *indexTitles;
@property (nonatomic, readonly) long long length;
@property (nonatomic, readonly) NSMutableDictionary *loadIndexesRequestsBySegmentIndex;
@property (nonatomic, readonly) NSMutableIndexSet *loadedSegmentIndexes;
@property (nonatomic, readonly) long long segmentSize;

+ (id)_titlesByIndexFromValue:(id)arg1;
+ (id)jsExportedProperties;
+ (id)makeDataSource:(id)arg1 :(id)arg2 :(long long)arg3;

- (void).cxx_destruct;
- (id)_dataSourceViews;
- (void)_didAdjustSegmentIndexesFromIndex:(long long)arg1;
- (void)_loadUsedIndexes;
- (void)_resetLoadedSegments;
- (void)_resetUsedIndexesAndMigrateItems:(id)arg1;
- (long long)_segmentIndexForItemIndex:(long long)arg1;
- (id)_spliceAtIndex:(long long)arg1 deleteCount:(long long)arg2 insertions:(id)arg3;
- (void)_updateTitlesFromIndex:(long long)arg1 deleteCount:(long long)arg2 insertionCount:(long long)arg3 title:(id)arg4;
- (void)addDataSourceView:(id)arg1;
- (id)asPrivateIKJSDataSource;
- (id)boxedItem:(long long)arg1;
- (id)dataSourceViewPointers;
- (id)delete:(long long)arg1 :(long long)arg2;
- (id)extraInfoForChangeInPathWithAccessorSequence:(id)arg1 extraInfo:(id)arg2;
- (id)indexTitles;
- (id)initWithItems:(id)arg1;
- (id)initWithItems:(id)arg1 indexTitles:(id)arg2;
- (id)initWithItems:(id)arg1 indexTitles:(id)arg2 segmentSize:(long long)arg3;
- (void)insert:(long long)arg1 :(id)arg2 :(id)arg3;
- (id)item:(long long)arg1;
- (long long)length;
- (id)loadIndexesRequestsBySegmentIndex;
- (id)loadedSegmentIndexes;
- (void)markDataSourceViewsUpdated;
- (void)move:(long long)arg1 :(long long)arg2 :(long long)arg3 :(id)arg4;
- (void)removeDataSourceView:(id)arg1;
- (id)replace:(long long)arg1 :(id)arg2;
- (long long)segmentSize;
- (void)update:(id)arg1 :(id)arg2 :(long long)arg3;
- (id)valuesForSubscripts:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 boxed:(bool)arg2;

@end