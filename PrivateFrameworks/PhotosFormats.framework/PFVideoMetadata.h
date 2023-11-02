
@interface PFVideoMetadata : NSObject {
    AVAsset * _asset;
}

@property (readonly) NSString *firstVideoTrackFormatDebugDescription;
@property (readonly) bool isDecodable;
@property (readonly) bool isHDR;
@property (readonly) bool isPlayable;
@property (readonly) bool isSpatial;
@property (readonly) NSDictionary *outOfBandHints;

+ (id)arrayByRemovingMetadataItemOfType:(unsigned char)arg1 fromArray:(id)arg2 error:(id*)arg3;
+ (id)firstVideoTrackFormatDebugDescriptionForAsset:(id)arg1;
+ (bool)hasValidMetadataForLoopingVideoAsset:(id)arg1;
+ (void)loadMetadataForAsset:(id)arg1 completion:(id /* block */)arg2;
+ (id)metadataItemValueFromAsset:(id)arg1 withKey:(id)arg2 keySpace:(id)arg3;
+ (id)metadataItemsWithMetadataType:(unsigned char)arg1 value:(id)arg2 error:(id*)arg3;
+ (id)outOfBandHintsForVideoAsset:(id)arg1;
+ (id)quickTimeMetadataItemValueFromAsset:(id)arg1 withKey:(id)arg2;
+ (id)quickTimeMetadataItemsWithKey:(id)arg1 value:(id)arg2;
+ (bool)readMetadataType:(unsigned char)arg1 fromAVAsset:(id)arg2 value:(id*)arg3 error:(id*)arg4;
+ (bool)readMetadataType:(unsigned char)arg1 fromFileURL:(id)arg2 value:(id*)arg3 error:(id*)arg4;
+ (bool)videoAssetIsDecodable:(id)arg1;
+ (bool)videoAssetIsHighDynamicRange:(id)arg1;
+ (bool)videoAssetIsMonoski:(id)arg1;
+ (bool)videoAssetIsPlayable:(id)arg1;
+ (bool)videoAssetIsSpatial:(id)arg1;
+ (unsigned int)videoCodecFourCharCodeNumberForAVAsset:(id)arg1;
+ (bool)videoTrackFormatDescriptionContainsPortraitData:(struct opaqueCMFormatDescription { }*)arg1;
+ (bool)videoTrackFormatDescriptionIsHDR10:(struct opaqueCMFormatDescription { }*)arg1;
+ (bool)videoTrackFormatDescriptionIsHighDynamicRange:(struct opaqueCMFormatDescription { }*)arg1;
+ (bool)videoTrackFormatDescriptionIsProResLOG:(struct opaqueCMFormatDescription { }*)arg1;
+ (bool)videoTrackIsSpatial:(id)arg1;

- (void).cxx_destruct;
- (id)firstVideoTrackFormatDebugDescription;
- (bool)isDecodable;
- (bool)isHDR;
- (bool)isPlayable;
- (bool)isSpatial;
- (id)outOfBandHints;

@end
