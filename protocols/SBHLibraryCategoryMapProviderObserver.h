
@protocol SBHLibraryCategoryMapProviderObserver <NSObject>

@required

- (void)libraryCategoryMapProvider:(SBHLibraryCategoryMapProvider *)arg1 categoryMapWasRefreshed:(unsigned long long)arg2 libraryCategoryMap:(SBHLibraryCategoryMap *)arg3;

@optional

- (void)libraryCategoryMapProvider:(SBHLibraryCategoryMapProvider *)arg1 failedToRefreshWithError:(NSError *)arg2;
- (void)libraryCategoryMapProvider:(SBHLibraryCategoryMapProvider *)arg1 willRefreshWithOptions:(unsigned long long)arg2;
- (void)libraryCategoryMapProviderRefreshedButFoundNoChanges:(SBHLibraryCategoryMapProvider *)arg1;

@end
