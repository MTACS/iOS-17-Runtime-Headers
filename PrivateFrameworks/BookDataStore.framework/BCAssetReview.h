
@interface BCAssetReview : BCCloudData <BCAssetReview>

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

+ (id)assetIDFromAssetReviewID:(id)arg1;
+ (id)assetReviewIDWithUserID:(id)arg1 assetID:(id)arg2;
+ (id)propertyIDKey;
+ (id)userIDFromAssetReviewID:(id)arg1;

- (void)_configureFromAssetReview:(id)arg1 withMergers:(id)arg2;
- (void)configureFromCloudData:(id)arg1 withMergers:(id)arg2;
- (id)debugDescription;
- (id)identifier;
- (bool)isEqualExceptForDate:(id)arg1 ignoringEmptySalt:(bool)arg2;
- (id)mutableCopy;
- (double)normalizedStarRating;
- (id)recordType;
- (void)resolveConflictsFromRecord:(id)arg1 withResolvers:(id)arg2;
- (void)setNormalizedStarRating:(double)arg1;
- (id)zoneName;

@end
