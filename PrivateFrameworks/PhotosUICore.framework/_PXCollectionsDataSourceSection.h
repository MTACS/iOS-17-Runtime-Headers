
@interface _PXCollectionsDataSourceSection : PXCollectionsDataSection {
    PXCollectionsDataSource * _collectionsDataSource;
    long long  _count;
    NSDictionary * _lockStatePerCollection;
    unsigned long long  _section;
}

@property (nonatomic, readonly) PXCollectionsDataSource *collectionsDataSource;
@property (nonatomic, readonly) NSDictionary *lockStatePerCollection;
@property (nonatomic, readonly) unsigned long long section;

- (void).cxx_destruct;
- (id)collectionsDataSource;
- (id)content;
- (long long)count;
- (long long)countForCollection:(id)arg1;
- (id)existingAssetsFetchResultAtIndex:(long long)arg1;
- (long long)indexOfCollection:(id)arg1;
- (id)initWithCollectionsDataSource:(id)arg1;
- (id)initWithCollectionsDataSource:(id)arg1 lockStatePerCollection:(id)arg2;
- (unsigned long long)lockStateForCollection:(id)arg1;
- (id)lockStatePerCollection;
- (id)objectAtIndex:(long long)arg1;
- (unsigned long long)section;

@end
