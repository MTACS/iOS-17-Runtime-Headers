
@interface PLAssetSharingUtilities : NSObject

+ (double)_durationForVideoAssetURL:(id)arg1 library:(id)arg2;
+ (double)_durationForVideoFilePath:(id)arg1;
+ (long long)_estimatedOutputFileLengthForDuration:(double)arg1 exportPreset:(id)arg2 exportProperties:(id)arg3;
+ (id)_objectBuilderFromVideoFilePath:(id)arg1 metadata:(id)arg2;
+ (id)_playerItemForVideoAssetURL:(id)arg1 library:(id)arg2;
+ (struct CGImage { }*)_thumbnailForAssetURL:(id)arg1 library:(id)arg2 useAspect:(bool)arg3;
+ (struct CGImage { }*)aspectRatioThumbnailForAssetURL:(id)arg1 library:(id)arg2;
+ (id)assetForVideoURL:(id)arg1 metadata:(id)arg2 library:(id)arg3 outAudioMix:(id*)arg4 outVideoComposition:(id*)arg5;
+ (long long)estimatedOutputFileLengthForVideoFilePath:(id)arg1 metadata:(id)arg2 exportPreset:(id)arg3 exportProperties:(id)arg4;
+ (long long)estimatedOutputFileLengthForVideoURL:(id)arg1 library:(id)arg2 fallbackFilePath:(id)arg3 exportPreset:(id)arg4 exportProperties:(id)arg5;
+ (id)exportSessionForVideoFilePath:(id)arg1 metadata:(id)arg2 exportPreset:(id)arg3;
+ (id)exportSessionForVideoURL:(id)arg1 library:(id)arg2 fallbackFilePath:(id)arg3 exportPreset:(id)arg4;
+ (id)filePathForVideoURL:(id)arg1 library:(id)arg2 outMetadata:(id*)arg3;
+ (id)playerItemForVideoFilePath:(id)arg1 metadata:(id)arg2;
+ (id)playerItemForVideoURL:(id)arg1 fallbackFilePath:(id)arg2 library:(id)arg3;
+ (struct CGImage { }*)thumbnailForAssetURL:(id)arg1 library:(id)arg2;

@end
