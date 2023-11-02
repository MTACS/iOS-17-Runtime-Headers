
@interface PXCameraAsset : NSObject {
    NSMutableDictionary * _icAssetDict;
    unsigned long long  _icAssetHandle;
    NSString * _plRelatedUUID;
}

@property (nonatomic, retain) NSMutableDictionary *icAssetDict;
@property (nonatomic) unsigned long long icAssetHandle;
@property (nonatomic, copy) NSString *plRelatedUUID;
@property (readonly) unsigned long long unsignedIntegerValue;

- (id)assetDictionary;
- (bool)burstFavorite;
- (bool)burstPicked;
- (id)burstUUID;
- (id)captureDate;
- (long long)compareCameraAsset:(id)arg1;
- (unsigned long long)conversionGroup;
- (id)createdFilename;
- (void)dealloc;
- (double)duration;
- (unsigned long long)fileSize;
- (id)filename;
- (bool)firstPicked;
- (id)groupUUID;
- (bool)hasThumbnail;
- (bool)highFramerate;
- (id)icAssetDict;
- (unsigned long long)icAssetHandle;
- (id)initWithPXCameraAssetDictionary:(id)arg1;
- (struct CGSize { double x1; double x2; })mediaDimensions;
- (id)modificationDate;
- (unsigned long long)orientation;
- (id)originalFilename;
- (id)originatingAssetID;
- (id)plRelatedUUID;
- (id)relatedUUID;
- (void)setIcAssetDict:(id)arg1;
- (void)setIcAssetHandle:(unsigned long long)arg1;
- (void)setPlRelatedUUID:(id)arg1;
- (id)spatialOverCaptureGroupID;
- (struct CGSize { double x1; double x2; })thumbnailDimensions;
- (unsigned long long)thumbnailSize;
- (bool)timeLapse;
- (unsigned long long)unsignedIntegerValue;

@end
