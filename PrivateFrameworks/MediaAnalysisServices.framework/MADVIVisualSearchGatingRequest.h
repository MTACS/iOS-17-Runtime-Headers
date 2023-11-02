
@interface MADVIVisualSearchGatingRequest : MADRequest {
    NSArray * _domains;
    NSString * _engagementSuggestionType;
    NSString * _featureIdentifier;
    NSNumber * _imageType;
    NSURL * _imageURL;
    CLLocation * _location;
    NSNumber * _queryID;
    NSURL * _referralURL;
}

@property (nonatomic, copy) NSArray *domains;
@property (nonatomic, copy) NSString *engagementSuggestionType;
@property (nonatomic, copy) NSString *featureIdentifier;
@property (nonatomic, copy) NSNumber *imageType;
@property (nonatomic, copy) NSURL *imageURL;
@property (nonatomic, copy) CLLocation *location;
@property (nonatomic, copy) NSNumber *queryID;
@property (nonatomic, copy) NSURL *referralURL;

+ (bool)supportsSecureCoding;
+ (unsigned long long)targetResolution;

- (void).cxx_destruct;
- (id)description;
- (id)domains;
- (void)encodeWithCoder:(id)arg1;
- (id)engagementSuggestionType;
- (id)featureIdentifier;
- (id)imageType;
- (id)imageURL;
- (id)initWithCoder:(id)arg1;
- (id)location;
- (id)queryID;
- (id)referralURL;
- (void)setDomains:(id)arg1;
- (void)setEngagementSuggestionType:(id)arg1;
- (void)setFeatureIdentifier:(id)arg1;
- (void)setImageType:(id)arg1;
- (void)setImageURL:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setQueryID:(id)arg1;
- (void)setReferralURL:(id)arg1;

@end
