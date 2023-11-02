
@protocol PLPTPConversionSupport <NSObject>

@required

- (PLPTPConversionResult *)conversionResultForAsset:(PLPTPAsset *)arg1 sourceHints:(PLPTPConversionSourceHints *)arg2 forceLegacyConversion:(bool)arg3 assetTypeLabel:(NSString *)arg4;
- (bool)peerSupportsAdjustmentBaseResources;
- (bool)peerSupportsTranscodeChoice;
- (bool)penultimateIsPublic;

@end
