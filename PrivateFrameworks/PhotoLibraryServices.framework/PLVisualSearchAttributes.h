
@interface PLVisualSearchAttributes : PLManagedObject

@property (nonatomic, retain) NSDate *adjustmentVersion;
@property (nonatomic) short algorithmVersion;
@property (nonatomic, retain) PLMediaAnalysisAssetAttributes *mediaAnalysisAssetAttributes;
@property (nonatomic) short stickerConfidenceAlgorithmVersion;
@property (nonatomic, readonly) float stickerConfidenceScore;
@property (nonatomic, retain) NSData *visualSearchData;

+ (id)entityName;

@end
