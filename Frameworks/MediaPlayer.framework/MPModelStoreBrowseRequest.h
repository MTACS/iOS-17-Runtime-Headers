
@interface MPModelStoreBrowseRequest : MPStoreModelRequest {
    long long  _additionalContent;
    long long  _domain;
    long long  _filteringPolicy;
    NSURL * _loadAdditionalContentURL;
    unsigned long long  _options;
    MPModelStoreBrowseResponse * _previousResponse;
    MPModelStoreBrowseResponse * _previousRetrievedNestedResponse;
    long long  _requestEndpoint;
    long long  _subscriptionStatus;
}

@property (nonatomic) long long additionalContent;
@property (nonatomic) long long domain;
@property (nonatomic) long long filteringPolicy;
@property (nonatomic) bool flattenRadioList;
@property (nonatomic, copy) NSURL *loadAdditionalContentURL;
@property (nonatomic) unsigned long long options;
@property (nonatomic, retain) MPModelStoreBrowseResponse *previousResponse;
@property (nonatomic, retain) MPModelStoreBrowseResponse *previousRetrievedNestedResponse;
@property (nonatomic) long long requestEndpoint;
@property (nonatomic) long long subscriptionStatus;

+ (id)allSupportedItemProperties;
+ (id)allSupportedSectionProperties;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)additionalContent;
- (void)configureWithParentSection:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)domain;
- (void)encodeWithCoder:(id)arg1;
- (long long)filteringPolicy;
- (bool)flattenRadioList;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)loadAdditionalContentURL;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (unsigned long long)options;
- (id)previousResponse;
- (id)previousRetrievedNestedResponse;
- (long long)requestEndpoint;
- (void)setAdditionalContent:(long long)arg1;
- (void)setDomain:(long long)arg1;
- (void)setFilteringPolicy:(long long)arg1;
- (void)setFlattenRadioList:(bool)arg1;
- (void)setLoadAdditionalContentURL:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setPreviousResponse:(id)arg1;
- (void)setPreviousRetrievedNestedResponse:(id)arg1;
- (void)setRequestEndpoint:(long long)arg1;
- (void)setSubscriptionStatus:(long long)arg1;
- (long long)subscriptionStatus;

@end
