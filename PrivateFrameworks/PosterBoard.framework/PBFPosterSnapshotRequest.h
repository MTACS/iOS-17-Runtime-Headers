
@interface PBFPosterSnapshotRequest : NSObject <NSCopying> {
    unsigned long long  _cachedHash;
    PRPosterConfiguredProperties * _configuredProperties;
    NSArray * _definitions;
    <PBFDisplayContext> * _displayContext;
    NSString * _identifier;
    unsigned long long  _intention;
    bool  _loadFromCacheIfAvailable;
    PRSServerPosterPath * _path;
    long long  _powerLogReason;
    NSString * _previewIdentifier;
    NSString * _provider;
    unsigned long long  _significantEventsCounter;
}

@property (nonatomic, readonly) PRPosterConfiguredProperties *configuredProperties;
@property (nonatomic, readonly) NSArray *definitions;
@property (nonatomic, readonly) <PBFDisplayContext> *displayContext;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long intention;
@property (nonatomic, readonly) bool loadFromCacheIfAvailable;
@property (nonatomic, readonly) PRSServerPosterPath *path;
@property (nonatomic, readonly) long long powerLogReason;
@property (nonatomic, readonly) NSString *previewIdentifier;
@property (nonatomic, readonly) NSString *provider;
@property (nonatomic, readonly) unsigned long long significantEventsCounter;

+ (bool)areRequestsFulfilled:(id)arg1 modelCoordinatorProvider:(id /* block */)arg2;
+ (bool)isRequestFulfilled:(id)arg1 modelCoordinatorProvider:(id)arg2;
+ (id)snapshotRequestForConfiguration:(id)arg1 context:(id)arg2;
+ (id)snapshotRequestForConfiguration:(id)arg1 withinSwitcherConfiguration:(id)arg2 variant:(long long)arg3 snapshotDefinitions:(id)arg4 displayContext:(id)arg5;
+ (id)snapshotRequestForPreview:(id)arg1 context:(id)arg2;
+ (id)snapshotRequestForPreview:(id)arg1 context:(id)arg2 definition:(id)arg3;

- (void).cxx_destruct;
- (bool)_isEqualToRequest:(id)arg1 allowingOtherDefinitionsAreSubset:(bool)arg2;
- (id)configuredProperties;
- (bool)containsRequest:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)definitions;
- (id)description;
- (id)displayContext;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithConfiguration:(id)arg1 definitions:(id)arg2 context:(id)arg3;
- (id)initWithDescriptor:(id)arg1 configuredProperties:(id)arg2 definitions:(id)arg3 context:(id)arg4;
- (id)initWithPath:(id)arg1 provider:(id)arg2 configuredProperties:(id)arg3 definitions:(id)arg4 context:(id)arg5;
- (unsigned long long)intention;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRequest:(id)arg1;
- (bool)loadFromCacheIfAvailable;
- (id)path;
- (long long)powerLogReason;
- (id)previewIdentifier;
- (id)provider;
- (id)requestWithDefinitions:(id)arg1;
- (id)requestWithDisplayContext:(id)arg1;
- (id)requestWithIntention:(unsigned long long)arg1;
- (id)requestWithLoadFromCacheIfAvailable:(bool)arg1;
- (id)requestWithPowerLogReason:(long long)arg1;
- (id)requestWithPreviewIdentifier:(id)arg1;
- (id)requestWithSignificantEventsCounter:(unsigned long long)arg1;
- (unsigned long long)significantEventsCounter;
- (id)snapshotURLForDefinition:(id)arg1;

@end
