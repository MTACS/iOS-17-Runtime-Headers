
@interface RCCaptureFormat : NSObject

+ (id)AVAssetAuthoringMetadataWithComposition:(id)arg1;
+ (id)AVAssetAuthoringMetadataWithCreationDate:(id)arg1 title:(id)arg2 uniqueID:(id)arg3;
+ (id)AVAssetAuthoringMetadataWithCreationDate:(id)arg1 title:(id)arg2 uniqueID:(id)arg3 musicMemoMetadata:(id)arg4;
+ (id)AVAssetAuthoringMetadataWithRecordingMetadata:(id)arg1;
+ (void)AVAssetExportDetermineSettingsForExportingAsset:(id)arg1 inputFormat:(unsigned int)arg2 preferredOutputExtension:(id)arg3 preferredFormat:(unsigned int)arg4 completionHandler:(id /* block */)arg5;
+ (id)AVAssetExportPresetForExportingToExtension:(id)arg1 preferredFormat:(unsigned int)arg2;
+ (id)AVFileTypeUTIForFileExtension:(id)arg1;
+ (id)AVMediaTypeForFileExtension:(id)arg1;
+ (void)_AVAssetExportDetermineSettingsForExportingAsset:(id)arg1 inputFormat:(unsigned int)arg2 outputExtensionWithFallbacks:(id)arg3 preferredFormat:(unsigned int)arg4 completionHandler:(id /* block */)arg5;
+ (id)fileExtensionForAssetExport;
+ (id)fileExtensionForIntermediateAssetCapture;
+ (id)fileExtensionsSupported;
+ (id)fileFormatsDirectlyImportable;

@end
