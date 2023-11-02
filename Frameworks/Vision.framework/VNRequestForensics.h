
@interface VNRequestForensics : NSObject {
    NSMutableArray * _cachedRequestResults;
    NSMutableArray * _checkedCachedResultsOnBehalfOfRequest;
    NSMutableArray * _implicitRequests;
    NSMutableArray * _ledger;
    NSMutableArray * _locatedCachedResultsOnBehalfOfRequest;
    NSArray * _orderedRequests;
    NSArray * _originalRequests;
    NSMutableArray * _performedRequests;
    NSMapTable * _requestToHumanReadableLabelMap;
}

@property (nonatomic, copy) NSArray *orderedRequests;
@property (nonatomic, readonly, copy) NSArray *originalRequests;
@property (nonatomic, readonly, copy) NSArray *performedRequests;

- (void).cxx_destruct;
- (id)_childRequestsImplicitlyPerformedOnBehalfOfParentRequest:(id)arg1;
- (id)_humanReadableLabelForRequest:(id)arg1;
- (void)cachedObservationsWithKey:(id)arg1 wereCheckedOnBehalfOfRequest:(id)arg2;
- (void)cachedObservationsWithKey:(id)arg1 wereLocatedOnBehalfOfRequest:(id)arg2;
- (id)description;
- (id)initWithOriginalRequests:(id)arg1;
- (id)keyUsedToCacheResultsOfRequest:(id)arg1;
- (id)orderedRequests;
- (id)originalRequests;
- (void)performedRequest:(id)arg1 withError:(id)arg2;
- (id)performedRequests;
- (void)performingOrderedDependentRequests:(id)arg1 onBehalfOfRequest:(id)arg2;
- (void)performingRequest:(id)arg1;
- (void)request:(id)arg1 cachedResultsWithObservationsCacheKey:(id)arg2;
- (id)requestThatProvidedObservationsForRequest:(id)arg1;
- (id)requestsImplicitlyPerformedOnBehalfOfRequest:(id)arg1;
- (id)requestsThatLookedUpCachedResultsKey:(id)arg1;
- (bool)resultsObtainedFromObservationsCacheForRequest:(id)arg1;
- (void)setOrderedRequests:(id)arg1;

@end
