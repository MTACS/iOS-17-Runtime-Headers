
@interface MPCModelPlaybackContext : MPPlaybackContext <MPCModelPlaybackRequestEnvironmentConsuming> {
    bool  _allowsJumpToIt;
    NSDictionary * _assetStoreFronts;
    NSString * _encodedMediaLibraryUniqueID;
    NSDictionary * _endTimeModifications;
    MPModelGenericObject * _fallbackSectionRepresentation;
    MPCPlaybackRequestEnvironment * _playbackRequestEnvironment;
    MPModelRequest * _request;
    bool  _skipEncodingMediaLibraryUniqueID;
    MPIdentifierSet * _startItemIdentifiers;
    NSDictionary * _startTimeModifications;
}

@property (nonatomic) bool allowsJumpToIt;
@property (nonatomic, copy) NSDictionary *assetStoreFronts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *encodedMediaLibraryUniqueID;
@property (nonatomic, copy) NSDictionary *endTimeModifications;
@property (nonatomic, copy) MPModelGenericObject *fallbackSectionRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) MPCPlaybackRequestEnvironment *playbackRequestEnvironment;
@property (nonatomic, copy) MPModelRequest *request;
@property (nonatomic) bool skipEncodingMediaLibraryUniqueID;
@property (nonatomic, copy) MPIdentifierSet *startItemIdentifiers;
@property (nonatomic, copy) NSDictionary *startTimeModifications;
@property (readonly) Class superclass;

+ (Class)queueFeederClass;
+ (bool)supportsAutoPlay;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsJumpToIt;
- (id)assetStoreFronts;
- (void)clearStartItem;
- (bool)containsRestorableContent;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionComponents;
- (void)encodeWithCoder:(id)arg1;
- (id)encodedMediaLibraryUniqueID;
- (id)endTimeModifications;
- (id)fallbackSectionRepresentation;
- (void)getRemotePlaybackQueueRepresentationWithCompletion:(id /* block */)arg1;
- (id)getSharedListeningTracklistWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isReusableForPlaybackContext:(id)arg1;
- (bool)isSupported;
- (id)playbackRequestEnvironment;
- (id)request;
- (void)setAllowsJumpToIt:(bool)arg1;
- (void)setAssetStoreFronts:(id)arg1;
- (void)setEndTimeModifications:(id)arg1;
- (void)setFallbackSectionRepresentation:(id)arg1;
- (void)setPlaybackRequestEnvironment:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setSkipEncodingMediaLibraryUniqueID:(bool)arg1;
- (void)setStartItemIdentifiers:(id)arg1;
- (void)setStartTimeModifications:(id)arg1;
- (void)setUserIdentity:(id)arg1;
- (bool)skipEncodingMediaLibraryUniqueID;
- (id)startItemIdentifiers;
- (id)startTimeModifications;
- (void)updateRequestPlaybackEnvironment;
- (id)userIdentity;

@end
