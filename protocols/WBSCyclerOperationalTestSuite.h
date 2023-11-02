
@protocol WBSCyclerOperationalTestSuite <WBSCyclerTestSuite>

@required

- (NSArray *)operations;
- (NSArray *)relativeProbabilitiesForOperationsWithTopLevelItem:(WBSCyclerItemListRepresentation *)arg1;

@end
