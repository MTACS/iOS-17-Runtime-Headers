
@interface MPCModelStorePlaybackItemsRequestAccumulator2 : NSObject {
    NSError * _accumulationError;
    bool  _allowsExplicitContent;
    long long  _defaultLibraryPersonalizationStyle;
    NSMutableDictionary * _equivalencyMapping;
    NSHashTable * _failedIdentifiers;
    NSMutableArray * _importResults;
    MPLibraryObjectDatabase * _lod;
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
    NSMutableDictionary * _sectionIndexToCollectionItemAuthTokenRequestMap;
    NSMutableDictionary * _sectionIndexToCollectionItemMetadataRequestMap;
    NSMutableDictionary * _sectionIndexToTokenRenewalRequestMap;
    MPServerObjectDatabase * _sod;
    NSMutableDictionary * _storeIDToCollectionMetadataRequestMap;
    <MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider> * _trustProvider;
    long long  _unknownEndpointLibraryPersonalizationStyle;
}

@property (nonatomic, readonly, copy) NSDictionary *abc_stateDump;
@property (nonatomic, readonly) MPCModelStorePlaybackItemsRequestAccumulation *accumulatedResults;
@property (nonatomic, readonly) NSError *accumulationError;
@property (nonatomic, readonly) struct MPCModelStorePlaybackItemsRequestAccumulatorResult { bool x1; bool x2; bool x3; bool x4; } accumulatorResult;
@property (nonatomic, readonly, copy) NSDictionary *equivalencyMapping;
@property (nonatomic, readonly) ICURLAggregatedPerformanceMetrics *performanceMetrics;

- (void).cxx_destruct;
- (void)_addEquivalencyForMetadata:(id)arg1 requestStoreIdentifier:(id)arg2;
- (void)_addPendingChildItem:(id)arg1 identifiers:(id)arg2 atSectionIndex:(id)arg3 collectionPlaybackAuthorizationToken:(id)arg4 requestType:(long long)arg5;
- (id)_identifiersForTokens:(id)arg1;
- (bool)_isFatalError:(id)arg1;
- (void)_resolveContentDescriptorsUsingObjectDatabases;
- (id)_tokenFromLookupIdentifiers:(id)arg1 propertySet:(id)arg2 indexPath:(id)arg3 error:(id*)arg4;
- (id)_userIdentityWithRequest:(id)arg1;
- (id)abc_stateDump;
- (id)accumulatedResults;
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

@end
