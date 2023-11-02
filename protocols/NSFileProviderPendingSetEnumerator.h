
@protocol NSFileProviderPendingSetEnumerator <NSFileProviderEnumerator>

@required

- (NSFileProviderDomainVersion *)domainVersion;
- (bool)isMaximumSizeReached;
- (double)refreshInterval;

@end
