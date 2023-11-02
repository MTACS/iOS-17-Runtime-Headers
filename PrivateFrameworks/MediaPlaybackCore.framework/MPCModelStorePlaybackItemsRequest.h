
@interface MPCModelStorePlaybackItemsRequest : MPModelRequest <MPCModelPlaybackRequest, MPCModelPlaybackRequestEnvironmentConsuming, MPCModelRequestRTCReporting, MPCModelStorePreviousRequestStoring> {
    MPIdentifierSet * _abc_preferredShuffleStartIdentifiers;
    NSString * _abc_siriAssetInfo;
    bool  _allowLocalEquivalencies;
    NSString * _clientIdentifier;
    MPSectionedCollection * _identifiers;
    bool  _inGroupSession;
    NSArray * _playbackPrioritizedIndexPaths;
    MPCPlaybackRequestEnvironment * _playbackRequestEnvironment;
    MPModelResponse * _previousResponse;
    MPSectionedCollection * _sectionedModelObjects;
    bool  _shouldBatchResultsWithPlaceholderObjects;
    NSArray * _storeIDs;
    NSUUID * _storeIDsAnonymousGroupUUID;
    NSDictionary * _storeIDsToPlaybackAuthorizationTokensMap;
    <MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider> * _trustProvider;
    bool  _useUniversalAccumulator;
}

@property (nonatomic, retain) MPIdentifierSet *abc_preferredShuffleStartIdentifiers;
@property (nonatomic, copy) NSString *abc_siriAssetInfo;
@property (nonatomic) bool allowLocalEquivalencies;
@property (nonatomic, copy) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableImplicitSectioning;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) MPSectionedCollection *identifiers;
@property (getter=isInGroupSession, nonatomic) bool inGroupSession;
@property (nonatomic, copy) NSArray *playbackPrioritizedIndexPaths;
@property (nonatomic, copy) MPCPlaybackRequestEnvironment *playbackRequestEnvironment;
@property (nonatomic, retain) MPModelResponse *previousResponse;
@property (nonatomic, readonly, copy) NSString *rtcReportingPlayQueueSourceIdentifier;
@property (nonatomic, copy) MPSectionedCollection *sectionedModelObjects;
@property (nonatomic) bool shouldBatchResultsWithPlaceholderObjects;
@property (nonatomic, copy) NSArray *storeIDs;
@property (nonatomic, copy) NSDictionary *storeIDsToPlaybackAuthorizationTokensMap;
@property (readonly) Class superclass;
@property (nonatomic, copy) <MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider> *trustProvider;
@property (nonatomic) bool useUniversalAccumulator;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (void)MPC_consumeSiriAssetInfo:(id)arg1 playActivityFeatureName:(id)arg2 userIdentity:(id)arg3 completion:(id /* block */)arg4;
+ (bool)requiresNetwork;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)abc_preferredShuffleStartIdentifiers;
- (id)abc_siriAssetInfo;
- (bool)allowLocalEquivalencies;
- (id)clientIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifiers;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isInGroupSession;
- (bool)isValid;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (id)playbackPrioritizedIndexPaths;
- (id)playbackRequestEnvironment;
- (id)previousResponse;
- (id)rtcReportingPlayQueueSourceIdentifier;
- (id)sectionedModelObjects;
- (void)setAbc_preferredShuffleStartIdentifiers:(id)arg1;
- (void)setAbc_siriAssetInfo:(id)arg1;
- (void)setAllowLocalEquivalencies:(bool)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setIdentifiers:(id)arg1;
- (void)setInGroupSession:(bool)arg1;
- (void)setPlaybackPrioritizedIndexPaths:(id)arg1;
- (void)setPlaybackRequestEnvironment:(id)arg1;
- (void)setPreviousResponse:(id)arg1;
- (void)setSectionedModelObjects:(id)arg1;
- (void)setShouldBatchResultsWithPlaceholderObjects:(bool)arg1;
- (void)setStoreIDs:(id)arg1;
- (void)setStoreIDsToPlaybackAuthorizationTokensMap:(id)arg1;
- (void)setTrustProvider:(id)arg1;
- (void)setUseUniversalAccumulator:(bool)arg1;
- (bool)shouldBatchResultsWithPlaceholderObjects;
- (id)storeIDs;
- (id)storeIDsToPlaybackAuthorizationTokensMap;
- (id)trustProvider;
- (bool)useUniversalAccumulator;

@end
