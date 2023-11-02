
@protocol PXGadgetNavigationHelperDelegate

@required

- (PXGadgetDataSource *)gadgetDataSourceForNavigationHelper:(PXGadgetNavigationHelper *)arg1;
- (bool)navigateToGadget:(id <PXGadget>)arg1 animated:(bool)arg2;
- (bool)navigationHelperCanCurrentlyNavigate:(PXGadgetNavigationHelper *)arg1;
- (void)navigationHelperDidNotFindValidGadget:(PXGadgetNavigationHelper *)arg1;

@end
