
@protocol PXPeopleDataSourceDelegate <NSObject>

@required

- (void)peopleDataSource:(PXPeopleDataSource *)arg1 didApplyIncrementalChanges:(PXArrayChangeDetails *)arg2;
- (void)peopleDataSourceMembersChanged:(PXPeopleDataSource *)arg1;

@end
