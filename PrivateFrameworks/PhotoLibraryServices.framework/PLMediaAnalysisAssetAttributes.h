
@interface PLMediaAnalysisAssetAttributes : PLManagedObject

@property (nonatomic) float activityScore;
@property (nonatomic) int animatedStickerRangeDurationTimeScale;
@property (nonatomic) long long animatedStickerRangeDurationValue;
@property (nonatomic) int animatedStickerRangeStartTimeScale;
@property (nonatomic) long long animatedStickerRangeStartValue;
@property (nonatomic, retain) PLManagedAsset *asset;
@property (nonatomic) short audioClassification;
@property (nonatomic) float audioScore;
@property (nonatomic) float autoplaySuggestionScore;
@property (nonatomic) int bestVideoRangeDurationTimeScale;
@property (nonatomic) long long bestVideoRangeDurationValue;
@property (nonatomic) int bestVideoRangeStartTimeScale;
@property (nonatomic) long long bestVideoRangeStartValue;
@property (nonatomic) float blurrinessScore;
@property (nonatomic, retain) PLCharacterRecognitionAttributes *characterRecognitionAttributes;
@property (nonatomic, retain) NSData *colorNormalizationData;
@property (nonatomic) float exposureScore;
@property (nonatomic) unsigned long long faceCount;
@property (nonatomic, retain) NSDate *mediaAnalysisTimeStamp;
@property (nonatomic) unsigned long long mediaAnalysisVersion;
@property (nonatomic) long long packedBestPlaybackRect;
@property (nonatomic) short probableRotationDirection;
@property (nonatomic) float probableRotationDirectionConfidence;
@property (nonatomic) unsigned short screenTimeDeviceImageSensitivity;
@property (nonatomic) float settlingEffectScore;
@property (nonatomic) unsigned short syndicationProcessingValue;
@property (nonatomic) unsigned long long syndicationProcessingVersion;
@property (nonatomic) float videoScore;
@property (nonatomic) float videoStickerSuggestionScore;
@property (nonatomic, retain) PLVisualSearchAttributes *visualSearchAttributes;
@property (nonatomic) float wallpaperScore;

+ (id)entityName;
+ (id)fetchRequest;

- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })animatedStickerTimeRange;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })bestVideoTimeRange;
- (void)resetCharacterRecognitionAttributes;
- (void)resetVisualSearchAttributes;
- (void)setAnimatedStickerTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setBestVideoTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setCharacterRecognitionData:(id)arg1 machineReadableCodeData:(id)arg2 algorithmVersion:(short)arg3 adjustmentVersion:(id)arg4;
- (void)setStickerConfidenceScore:(float)arg1 stickerAlgorithmVersion:(short)arg2;
- (void)setVisualSearchData:(id)arg1 algorithmVersion:(short)arg2 adjustmentVersion:(id)arg3;
- (void)willSave;

@end
