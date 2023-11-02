
@interface PXContentSyndicationMockCMMDataSource : PXContentSyndicationDataSource {
    PXCMMInvitationsDataSource * _cmmDataSource;
}

@property (nonatomic, readonly) PXCMMInvitationsDataSource *cmmDataSource;

- (void).cxx_destruct;
- (id)assetCollectionAtItemIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)cmmDataSource;
- (id)collectionAtIndexPath:(id)arg1;
- (id)collectionListForSection:(long long)arg1;
- (id)contentSyndicationItemAtItemIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (long long)countForCollection:(id)arg1;
- (long long)identifier;
- (id)initWithCMMDataSource:(id)arg1;
- (id)mostRecentlyAddedDate;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;

@end
