
@interface PLPTPLegacyConversionSupport : NSObject <PLPTPConversionSupport> {
    PHMediaFormatConversionManager * _mediaFormatConversionManager;
    PFMediaCapabilities * _peerMediaCapabilities;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool peerSupportsAdjustmentBaseResources;
@property (nonatomic, readonly) bool peerSupportsTranscodeChoice;
@property (nonatomic, readonly) bool penultimateIsPublic;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)conversionResultForAsset:(id)arg1 sourceHints:(id)arg2 forceLegacyConversion:(bool)arg3 assetTypeLabel:(id)arg4;
- (id)init;
- (bool)peerSupportsAdjustmentBaseResources;
- (bool)peerSupportsTranscodeChoice;
- (bool)penultimateIsPublic;

@end
