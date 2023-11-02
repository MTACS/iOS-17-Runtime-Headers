
@interface PXSharingSuggestionSectionHeaderLayoutProvider : PXActionableSectionHeaderLayoutProvider {
    NSDateIntervalFormatter * _dateIntervalFormatter;
    bool  _successfullySharedAll;
    NSMutableSet * _successfullySharedAssetCollections;
}

@property (nonatomic, readonly) NSDateIntervalFormatter *dateIntervalFormatter;
@property (nonatomic) bool successfullySharedAll;
@property (nonatomic, readonly) NSMutableSet *successfullySharedAssetCollections;

- (void).cxx_destruct;
- (void)_handleShareAssetCollectionCompletion:(id)arg1 success:(bool)arg2 error:(id)arg3;
- (id)actionTextForActionType:(long long)arg1 dataSource:(id)arg2 sectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg3;
- (long long)actionTypeForHeaderLayout:(id)arg1;
- (id)dateIntervalFormatter;
- (id)primaryTextForDataSource:(id)arg1 sectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2;
- (id)primaryTopHeaderTextForDataSource:(id)arg1;
- (id)secondaryTextForDataSource:(id)arg1 sectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2;
- (id)secondaryTopHeaderTextForDataSource:(id)arg1;
- (void)sectionHeader:(id)arg1 didPressButtonForActionType:(long long)arg2 sender:(id)arg3;
- (void)setSuccessfullySharedAll:(bool)arg1;
- (bool)successfullySharedAll;
- (id)successfullySharedAssetCollections;
- (bool)wantsHeaderForDataSource:(id)arg1 sectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2;
- (bool)wantsTopHeaderForDataSource:(id)arg1;

@end
