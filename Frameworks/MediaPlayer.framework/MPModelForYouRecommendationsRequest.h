
@interface MPModelForYouRecommendationsRequest : MPStoreModelRequest {
    NSURL * _customForYouURL;
    long long  _displayFilterKinds;
    long long  _filteringPolicy;
    long long  _mode;
    bool  _refreshRequest;
    long long  _requestEndpoint;
    long long  _types;
    bool  _withPlainEditorialNotes;
    bool  _withRecentlyPlayed;
    bool  _withSocial;
}

@property (nonatomic, copy) NSURL *customForYouURL;
@property (nonatomic) long long displayFilterKinds;
@property (nonatomic) long long filteringPolicy;
@property (nonatomic) long long mode;
@property (nonatomic) bool refreshRequest;
@property (nonatomic) long long requestEndpoint;
@property (nonatomic) long long types;
@property (nonatomic) bool withPlainEditorialNotes;
@property (nonatomic) bool withRecentlyPlayed;
@property (nonatomic) bool withSocial;

+ (id)allSupportedItemProperties;
+ (id)allSupportedSectionProperties;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customForYouURL;
- (long long)displayFilterKinds;
- (void)encodeWithCoder:(id)arg1;
- (long long)filteringPolicy;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)mode;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (bool)refreshRequest;
- (long long)requestEndpoint;
- (void)setCustomForYouURL:(id)arg1;
- (void)setDisplayFilterKinds:(long long)arg1;
- (void)setFilteringPolicy:(long long)arg1;
- (void)setMode:(long long)arg1;
- (void)setRefreshRequest:(bool)arg1;
- (void)setRequestEndpoint:(long long)arg1;
- (void)setTypes:(long long)arg1;
- (void)setWithPlainEditorialNotes:(bool)arg1;
- (void)setWithRecentlyPlayed:(bool)arg1;
- (void)setWithSocial:(bool)arg1;
- (long long)types;
- (bool)withPlainEditorialNotes;
- (bool)withRecentlyPlayed;
- (bool)withSocial;

@end
