
@interface MPCModelStorePlaybackItemsRequestAccumulator : NSObject {
    NSError * _accumulationError;
    bool  _allowsExplicitContent;
    long long  _defaultLibraryPersonalizationStyle;
    NSMutableDictionary * _equivalencyMapping;
    NSMutableArray * _importResults;
    NSMutableDictionary * _mutableABCStateDump;
    NSMutableArray * _pendingCollectionItemAuthorizationTokenRequests;
    NSMutableArray * _pendingCollectionItemMetadataRequests;
    NSMutableArray * _pendingCollectionItemTokenRenewalRequests;
    NSMutableArray * _pendingCollectionMetadataRequests;
    NSMutableOrderedSet * _pendingStoreIDs;
    ICURLAggregatedPerformanceMetrics * _performanceMetrics;
    NSString * _personID;
    MPMutableSectionedCollection * _progressiveContentDescriptors;
    MPCModelStorePlaybackItemsRequest * _request;
    MPPropertySet * _requestPropertySet;
    bool  _requestUsesSectionedModelObjects;
    NSMutableDictionary * _sectionIndexToCollectionItemAuthTokenRequestMap;
    NSMutableDictionary * _sectionIndexToCollectionItemMetadataRequestMap;
    NSMutableDictionary * _sectionIndexToTokenRenewalRequestMap;
    MPServerObjectDatabase * _sod;
    NSMutableDictionary * _storeIDToCollectionMetadataRequestMap;
    long long  _storePersonalizationStyle;
    <MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider> * _trustProvider;
    long long  _unknownEndpointLibraryPersonalizationStyle;
}

@property (nonatomic, readonly, copy) NSDictionary *abc_stateDump;
@property (nonatomic, readonly) NSError *accumulationError;
@property (nonatomic, readonly) struct MPCModelStorePlaybackItemsRequestAccumulatorResult { bool x1; bool x2; bool x3; bool x4; } accumulatorResult;
@property (nonatomic, readonly, copy) NSDictionary *equivalencyMapping;
@property (nonatomic, readonly) ICURLAggregatedPerformanceMetrics *performanceMetrics;
@property (nonatomic, readonly) MPSectionedCollection *unpersonalizedContentDescriptors;

- (void).cxx_destruct;
- (void)_addEquivalencyForMetadata:(id)arg1 requestStoreIdentifier:(id)arg2;
- (void)_addPendingChildItem:(id)arg1 identifiers:(id)arg2 atSectionIndex:(id)arg3 collectionPlaybackAuthorizationToken:(id)arg4 requestType:(long long)arg5;
- (struct _MPCModelStorePlaybackItemEligibility { bool x1; long long x2; })_eligibilityForItem:(id)arg1;
- (void)_finalizeABCStateDump;
- (bool)_isFatalError:(id)arg1;
- (id)_mergedObjectWithRequestedObjectIfNeeded:(id)arg1 forIndexPath:(id)arg2;
- (id)_playlistEntryForObject:(id)arg1 containerUniqueID:(id)arg2;
- (void)_resolveContentDescriptorsUsingServerObjectDatabase;
- (id)_serverObjectFromPlaceholderContentDescriptor:(id)arg1 propertySet:(id)arg2 error:(id*)arg3;
- (id)_updatedModelObjectFromOriginalObject:(id)arg1 sectionPlaybackAuthorizationToken:(id)arg2 itemSectionIndex:(long long)arg3;
- (id)_userIdentityWithRequest:(id)arg1;
- (id)abc_stateDump;
- (id)accumulationError;
- (struct MPCModelStorePlaybackItemsRequestAccumulatorResult { bool x1; bool x2; bool x3; bool x4; })accumulatorResult;
- (id)equivalencyMapping;
- (id)handleMediaAPIResponse:(id)arg1 trustID:(id)arg2 isFinalResponse:(bool)arg3;
- (struct MPCModelStorePlaybackItemsRequestAccumulatorResult { bool x1; bool x2; bool x3; bool x4; })handleResponse:(id)arg1 error:(id)arg2;
- (id)initWithRequest:(id)arg1;
- (id)initWithRequest:(id)arg1 serverObjectDatabase:(id)arg2;
- (id)newMediaAPICollectionItemMetadataRequestInfo;
- (id)newStoreItemMetadataRequest;
- (id)performanceMetrics;
- (id)unpersonalizedContentDescriptors;

@end
