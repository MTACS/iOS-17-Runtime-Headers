
@interface SBBackgroundActivityAssertionShimManager : NSObject {
    NSMutableDictionary * _attributionsToAssertions;
    STBackgroundActivitiesStatusDomain * _backgroundActivitiesDomain;
    STBackgroundActivitiesStatusDomainData * _processedData;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_registerHandlerAndHandleExistingState;
- (void)_updateShimAssertionsForData:(id)arg1;
- (id)init;

@end
