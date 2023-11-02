
@protocol PBFPosterExtensionDataStoreAssertionManagerObserver <NSObject>

@required

- (void)assertionManager:(PBFPosterExtensionDataStoreAssertionManager *)arg1 pathIsNowMarkedAsNOTInUse:(PRSServerPosterPath *)arg2;
- (void)assertionManager:(PBFPosterExtensionDataStoreAssertionManager *)arg1 pathIsNowMarkedInUse:(PRSServerPosterPath *)arg2;

@end
