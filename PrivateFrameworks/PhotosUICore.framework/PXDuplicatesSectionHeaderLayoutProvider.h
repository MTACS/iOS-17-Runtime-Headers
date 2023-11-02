
@interface PXDuplicatesSectionHeaderLayoutProvider : PXActionableSectionHeaderLayoutProvider

- (id)actionTextForActionType:(long long)arg1 dataSource:(id)arg2 sectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg3;
- (long long)actionTypeForHeaderLayout:(id)arg1;
- (id)primaryTextForDataSource:(id)arg1 sectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2;
- (void)sectionHeader:(id)arg1 didPressButtonForActionType:(long long)arg2 sender:(id)arg3;

@end
