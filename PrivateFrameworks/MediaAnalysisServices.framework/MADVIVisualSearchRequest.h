
@interface MADVIVisualSearchRequest : MADRequest {
    NSArray * _catalogIDs;
    NSArray * _documentObservations;
    NSString * _engagementSuggestionType;
    NSString * _featureIdentifier;
    NSData * _gatingPayload;
    NSArray * _gatingResultItems;
    NSNumber * _imageType;
    NSURL * _imageURL;
    CLLocation * _location;
    NSNumber * _queryID;
    NSURL * _referralURL;
    NSNumber * _uiScale;
}

@property (nonatomic, copy) NSArray *catalogIDs;
@property (nonatomic, readonly) NSArray *documentObservations;
@property (nonatomic, copy) NSString *engagementSuggestionType;
@property (nonatomic, copy) NSString *featureIdentifier;
@property (nonatomic, readonly) NSData *gatingPayload;
@property (nonatomic, readonly) NSArray *gatingResultItems;
@property (nonatomic, copy) NSNumber *imageType;
@property (nonatomic, copy) NSURL *imageURL;
@property (nonatomic, copy) CLLocation *location;
@property (nonatomic, copy) NSNumber *queryID;
@property (nonatomic, copy) NSURL *referralURL;
@property (nonatomic, copy) NSNumber *uiScale;

+ (bool)supportsSecureCoding;
+ (unsigned long long)targetResolution;

- (void).cxx_destruct;
- (id)catalogIDs;
- (id)description;
- (id)documentObservations;
- (void)encodeWithCoder:(id)arg1;
- (id)engagementSuggestionType;
- (id)featureIdentifier;
- (id)gatingPayload;
- (id)gatingResultItems;
- (id)imageType;
- (id)imageURL;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithGatingResultItems:(id)arg1 andPayload:(id)arg2;
- (id)initWithGatingResultItems:(id)arg1 payload:(id)arg2 documentObservations:(id)arg3;
- (id)location;
- (id)queryID;
- (id)referralURL;
- (void)setCatalogIDs:(id)arg1;
- (void)setEngagementSuggestionType:(id)arg1;
- (void)setFeatureIdentifier:(id)arg1;
- (void)setImageType:(id)arg1;
- (void)setImageURL:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setQueryID:(id)arg1;
- (void)setReferralURL:(id)arg1;
- (void)setUiScale:(id)arg1;
- (id)uiScale;

@end
