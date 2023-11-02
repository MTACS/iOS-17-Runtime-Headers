
@interface PXImportSectionHeaderLayoutProvider : PXActionableSectionHeaderLayoutProvider {
    PLDateRangeFormatter * _dateRangeFormatter;
}

@property (nonatomic, readonly) PLDateRangeFormatter *dateRangeFormatter;

- (void).cxx_destruct;
- (id)dateRangeFormatter;
- (id)initWithViewModel:(id)arg1 viewProvider:(id)arg2;
- (id)primaryTextForDataSource:(id)arg1 sectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2;
- (id)secondaryTextForDataSource:(id)arg1 sectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2;

@end
