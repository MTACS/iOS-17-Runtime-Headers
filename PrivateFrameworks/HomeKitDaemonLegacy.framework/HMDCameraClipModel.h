
@interface HMDCameraClipModel : HMBModel

@property (nonatomic, retain) NSNumber *duration;
@property (nonatomic, retain) NSData *encryptionKey;
@property (nonatomic, retain) NSNumber *encryptionScheme;
@property unsigned long long feedbackStatus;
@property (nonatomic, retain) NSNumber *feedbackStatusField;
@property (nonatomic, retain) NSNumber *isComplete;
@property (nonatomic, retain) NSNumber *maximumClipDuration;
@property long long quality;
@property (nonatomic, retain) NSNumber *qualityField;
@property (nonatomic, retain) NSNumber *recordedLocally;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, retain) NSString *streamingAssetVersion;
@property (nonatomic, retain) NSNumber *targetFragmentDuration;
@property (nonatomic, retain) NSArray *videoMetadata;
@property (nonatomic, retain) NSArray *videoMetadataArray;
@property (nonatomic, retain) HMBStreamingAsset *videoStreamingAsset;

+ (id)clipsBeforeDateQuery;
+ (id)clipsWithNeedsUploadFeedbackStatusQuery;
+ (id)clipsWithQualityBetweenDatesAscendingQuery;
+ (id)clipsWithQualityBetweenDatesDescendingQuery;
+ (id)countOfClipsWithQualityBetweenDatesQuery;
+ (id)hmbExternalRecordType;
+ (id)hmbProperties;
+ (id)hmbQueries;
+ (id)incompleteClipsQuery;
+ (id)qualityPredicate;
+ (id)sentinelParentUUID;

- (id)createClipWithSignificantEvents:(id)arg1;
- (unsigned long long)feedbackStatus;
- (long long)quality;
- (void)setFeedbackStatus:(unsigned long long)arg1;
- (void)setQuality:(long long)arg1;

@end
