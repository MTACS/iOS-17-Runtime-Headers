
@protocol PXPeopleSectionedDataSourceChangeObserver <NSObject>

@required

- (void)peopleSectionedDataSource:(PXPeopleSectionedDataSource *)arg1 didApplyIncrementalChanges:(NSArray *)arg2;
- (void)peopleSectionedDataSourceMembersChangedNonIncrementally:(PXPeopleSectionedDataSource *)arg1;

@end
