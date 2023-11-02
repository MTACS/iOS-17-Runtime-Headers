
@interface PLCharacterRecognitionAttributes : PLManagedObject

@property (nonatomic, retain) NSDate *adjustmentVersion;
@property (nonatomic) short algorithmVersion;
@property (nonatomic, retain) NSData *characterRecognitionData;
@property (nonatomic, retain) NSData *machineReadableCodeData;
@property (nonatomic, retain) PLMediaAnalysisAssetAttributes *mediaAnalysisAssetAttributes;

+ (id)entityName;

@end
