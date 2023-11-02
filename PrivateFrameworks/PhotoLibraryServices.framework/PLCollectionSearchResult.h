
@interface PLCollectionSearchResult : PLSearchResult {
    PSICollectionResult * _collectionResult;
    unsigned long long  _libraryScope;
}

@property (nonatomic, readonly) PSICollectionResult *collectionResult;
@property (nonatomic, readonly) unsigned long long collectionType;
@property (nonatomic, readonly) PSIDate *endDate;
@property (nonatomic) unsigned long long libraryScope;
@property (nonatomic, readonly) NSDate *sortDate;
@property (nonatomic, readonly) PSIDate *startDate;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *uuid;

- (void).cxx_destruct;
- (unsigned long long)assetCount;
- (id)collectionResult;
- (unsigned long long)collectionType;
- (id)endDate;
- (id)initWithCollectionResult:(id)arg1 libraryScope:(unsigned long long)arg2;
- (id)initWithGroupResult:(id)arg1 collectionResult:(id)arg2 libraryScope:(unsigned long long)arg3;
- (id)keyAssetUUID;
- (unsigned long long)libraryScope;
- (void)setLibraryScope:(unsigned long long)arg1;
- (id)sortDate;
- (id)startDate;
- (id)subtitle;
- (id)title;
- (unsigned long long)type;
- (id)uuid;

@end
