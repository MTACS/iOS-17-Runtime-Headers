
@interface PXNavigationListDataSubsection : NSObject {
    PXDataSection * _dataSection;
    long long  _expandedIndex;
    long long  _externalStartIndex;
    long long  _indentationLevel;
    long long  _indexDelta;
    PXNavigationListDataSection * _listDataSection;
    NSMutableDictionary * _listItemsCache;
    bool  _skipAssetCountFetches;
}

@property (nonatomic, readonly) PXDataSection *dataSection;
@property (nonatomic, readonly) long long expandedIndex;
@property (nonatomic, readonly) long long externalStartIndex;
@property (nonatomic, readonly) long long indentationLevel;
@property (nonatomic, readonly) long long indexDelta;
@property (nonatomic, readonly) PXNavigationListDataSection *listDataSection;
@property (nonatomic, readonly) bool skipAssetCountFetches;

- (void).cxx_destruct;
- (id)dataSection;
- (id)description;
- (long long)expandedIndex;
- (long long)externalStartIndex;
- (long long)indentationLevel;
- (long long)indexDelta;
- (id)initWithDataSection:(id)arg1 indexDelta:(long long)arg2 expandedIndex:(long long)arg3 indentationLevel:(long long)arg4 externalStartIndex:(long long)arg5 skipAssetCountFetches:(bool)arg6;
- (id)listDataSection;
- (id)listItemAtExternalIndex:(long long)arg1;
- (bool)skipAssetCountFetches;

@end
