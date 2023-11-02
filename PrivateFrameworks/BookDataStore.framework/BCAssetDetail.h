
@interface BCAssetDetail : BCCloudData <BCAssetDetail>

@property (nonatomic, copy) NSString *assetID;
@property (nonatomic) double bookmarkTime;
@property (nonatomic, readonly, copy) NSData *ckSystemFields;
@property (nonatomic, copy) NSDate *dateFinished;
@property (nonatomic, copy) NSDate *datePlaybackTimeUpdated;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) bool deletedFlag;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long editGeneration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAudiobook;
@property (nonatomic) bool isFinished;
@property (nonatomic, copy) NSDate *lastOpenDate;
@property (nonatomic, readonly, copy) NSDate *modificationDate;
@property (nonatomic) bool notFinished;
@property (nonatomic) <BCCloudDataPrivacyDelegate> *privacyDelegate;
@property (nonatomic) int readingPositionAbsolutePhysicalLocation;
@property (nonatomic, copy) NSString *readingPositionAnnotationVersion;
@property (nonatomic, copy) NSString *readingPositionAssetVersion;
@property (nonatomic, copy) NSString *readingPositionCFIString;
@property (nonatomic) int readingPositionLocationRangeEnd;
@property (nonatomic) int readingPositionLocationRangeStart;
@property (nonatomic, copy) NSDate *readingPositionLocationUpdateDate;
@property (nonatomic, copy) NSString *readingPositionStorageUUID;
@property (nonatomic, copy) NSData *readingPositionUserData;
@property (nonatomic) float readingProgress;
@property (nonatomic) float readingProgressHighWaterMark;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long syncGeneration;
@property (nonatomic, readonly, copy) CKRecord *systemFields;
@property (nonatomic) short taste;
@property (nonatomic) short tasteSyncedToStore;

+ (id)propertyIDKey;

- (void)_configureFromAssetDetail:(id)arg1 withMergers:(id)arg2;
- (void)configureFromCloudData:(id)arg1 withMergers:(id)arg2;
- (id)debugDescription;
- (id)identifier;
- (bool)isAudiobook;
- (bool)isEqualExceptForDate:(id)arg1 ignoringEmptySalt:(bool)arg2;
- (id)mutableCopy;
- (id)recordType;
- (void)resolveConflictsFromRecord:(id)arg1 withResolvers:(id)arg2;
- (bool)setDifferentBookmarkTime:(double)arg1;
- (id)zoneName;

@end
