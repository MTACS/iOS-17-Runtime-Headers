
@protocol SBHIconModelApplicationDataSourceObserver <NSObject>

@optional

- (void)iconModelApplicationDataSource:(id <SBHIconModelApplicationDataSource>)arg1 applicationPlaceholdersAdded:(NSArray *)arg2;
- (void)iconModelApplicationDataSource:(id <SBHIconModelApplicationDataSource>)arg1 applicationPlaceholdersRemoved:(NSArray *)arg2;
- (void)iconModelApplicationDataSource:(id <SBHIconModelApplicationDataSource>)arg1 applicationsAdded:(NSArray *)arg2;
- (void)iconModelApplicationDataSource:(id <SBHIconModelApplicationDataSource>)arg1 applicationsRemoved:(NSArray *)arg2;
- (void)iconModelApplicationDataSource:(id <SBHIconModelApplicationDataSource>)arg1 applicationsUpdated:(NSArray *)arg2;

@end
