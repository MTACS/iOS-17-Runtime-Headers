
@interface BCMutableAssetReview : BCMutableCloudData <BCAssetReview, NSSecureCoding> {
    NSString * _assetReviewID;
    NSString * _reviewBody;
    NSString * _reviewTitle;
    short  _starRating;
    NSString * _userID;
}

@property (nonatomic, copy) NSString *assetReviewID;
@property (nonatomic, readonly, copy) NSData *ckSystemFields;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) bool deletedFlag;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long editGeneration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDate *modificationDate;
@property (nonatomic) double normalizedStarRating;
@property (nonatomic) <BCCloudDataPrivacyDelegate> *privacyDelegate;
@property (nonatomic, copy) NSString *reviewBody;
@property (nonatomic, copy) NSString *reviewTitle;
@property (nonatomic) short starRating;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long syncGeneration;
@property (nonatomic, readonly, copy) CKRecord *systemFields;
@property (nonatomic, copy) NSString *userID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetReviewID;
- (id)configuredRecordFromAttributes;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithAssetReviewID:(id)arg1;
- (id)initWithCloudData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (double)normalizedStarRating;
- (id)recordType;
- (id)reviewBody;
- (id)reviewTitle;
- (void)setAssetReviewID:(id)arg1;
- (void)setNormalizedStarRating:(double)arg1;
- (void)setReviewBody:(id)arg1;
- (void)setReviewTitle:(id)arg1;
- (void)setStarRating:(short)arg1;
- (void)setUserID:(id)arg1;
- (short)starRating;
- (id)userID;
- (id)zoneName;

@end
