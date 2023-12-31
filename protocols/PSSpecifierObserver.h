
@protocol PSSpecifierObserver <NSObject>

@required

- (void)dataSource:(id <PSSpecifierDataSource>)arg1 performUpdates:(PSSpecifierUpdates *)arg2;
- (void)invalidateSpecifiersForDataSource:(id <PSSpecifierDataSource>)arg1;
- (long long)observerType;

@end
