
@interface BCMutableReadingNowDetail : BCMutableCloudData <BCReadingNowDetail, NSSecureCoding> {
    NSString * _assetID;
    NSString * _cloudAssetType;
    bool  _isTrackedAsRecent;
    NSDate * _lastEngagedDate;
}

@property (nonatomic, copy) NSString *assetID;
@property (nonatomic, readonly, copy) NSData *ckSystemFields;
@property (nonatomic, copy) NSString *cloudAssetType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) bool deletedFlag;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long editGeneration;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isTrackedAsRecent;
@property (nonatomic, copy) NSDate *lastEngagedDate;
@property (nonatomic, readonly, copy) NSDate *modificationDate;
@property (nonatomic) <BCCloudDataPrivacyDelegate> *privacyDelegate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long syncGeneration;
@property (nonatomic, readonly, copy) CKRecord *systemFields;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetID;
- (id)cloudAssetType;
- (id)configuredRecordFromAttributes;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithAssetID:(id)arg1;
- (id)initWithCloudData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (bool)isTrackedAsRecent;
- (id)lastEngagedDate;
- (id)recordType;
- (void)setAssetID:(id)arg1;
- (void)setCloudAssetType:(id)arg1;
- (void)setIsTrackedAsRecent:(bool)arg1;
- (void)setLastEngagedDate:(id)arg1;
- (id)zoneName;

@end
