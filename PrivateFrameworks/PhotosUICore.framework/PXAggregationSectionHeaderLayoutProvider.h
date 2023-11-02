
@interface PXAggregationSectionHeaderLayoutProvider : PXActionableSectionHeaderLayoutProvider

- (id)_dateRangeCompactFormatter;
- (id)createSectionHeaderLayoutForSectionedLayout:(id)arg1 dataSource:(id)arg2 sectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg3 spec:(id)arg4 outAlignment:(unsigned long long*)arg5;
- (id)primaryTextForDataSource:(id)arg1 sectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2;
- (id)secondaryTextForDataSource:(id)arg1 sectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2;

@end
