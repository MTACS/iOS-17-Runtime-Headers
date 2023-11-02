
@interface PLUnmanagedAdjustment : PLManagedObject

@property (nonatomic, retain) NSNumber *adjustmentBaseImageFormat;
@property (nonatomic, retain) NSString *adjustmentFormatIdentifier;
@property (nonatomic, retain) NSString *adjustmentFormatVersion;
@property (nonatomic) unsigned int adjustmentRenderTypes;
@property (nonatomic, retain) NSDate *adjustmentTimestamp;
@property (nonatomic, retain) PLAdditionalAssetAttributes *assetAttributes;
@property (nonatomic, retain) NSString *editorLocalizedName;
@property (nonatomic, retain) NSString *otherAdjustmentsFingerprint;
@property (nonatomic, retain) NSString *similarToOriginalAdjustmentsFingerprint;
@property (nonatomic, retain) NSString *uuid;

+ (id)_convertRedEyeCorrection:(id)arg1 withOrientation:(long long)arg2;
+ (id)_convertRedEyeCorrections:(id)arg1 withOrientation:(long long)arg2;
+ (id)addUnmanagedAdjustmentFromXMPDataIfNeededForAsset:(id)arg1;
+ (id)copyUnmanagedAdjustmentFromSourceAsset:(id)arg1 forPlaceholderAsset:(id)arg2 inLibrary:(id)arg3 error:(id*)arg4;
+ (id)entityName;

- (void)awakeFromInsert;
- (bool)isSyncableChange;
- (id)payloadForChangedKeys:(id)arg1;
- (id)payloadID;
- (bool)supportsCloudUpload;
- (void)willSave;

@end
