
@interface PLPTPdFormatConversionManager : NSObject <PLPTPConversionSupport> {
    NSMutableDictionary * _convertedLivePhotoPairingIdentifiersByOriginalIdentifiers;
    bool  _initialized;
    PFMediaCapabilities * _legacyCapabilities;
    PHMediaFormatConversionManager * _mediaFormatConversionManager;
    PFMediaCapabilities * _peerMediaCapabilities;
    NSURL * _temporaryDirectoryURL;
}

@property (retain) NSMutableDictionary *convertedLivePhotoPairingIdentifiersByOriginalIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool initialized;
@property (retain) PHMediaFormatConversionManager *mediaFormatConversionManager;
@property (retain) PFMediaCapabilities *peerMediaCapabilities;
@property (nonatomic, readonly) bool peerSupportsAdjustmentBaseResources;
@property (nonatomic, readonly) bool peerSupportsTranscodeChoice;
@property (nonatomic, readonly) bool penultimateIsPublic;
@property (readonly) Class superclass;
@property (retain) NSURL *temporaryDirectoryURL;

- (void).cxx_destruct;
- (id)assetReaderForFormatConvertedPTPAsset:(id)arg1 ofManagedAsset:(id)arg2 path:(id)arg3;
- (id)conversionResultForAsset:(id)arg1 sourceHints:(id)arg2 forceLegacyConversion:(bool)arg3 assetTypeLabel:(id)arg4;
- (id)convertedAssetLivePhotoPairingIdentifierForOriginalIdentifier:(id)arg1;
- (id)convertedLivePhotoPairingIdentifiersByOriginalIdentifiers;
- (void)dealloc;
- (id)effectivePeerMediaCapabilites;
- (bool)generatePosterFrameExportForVideoURL:(id)arg1 outputData:(id*)arg2 maximumSize:(struct CGSize { double x1; double x2; })arg3 error:(id*)arg4;
- (id)init;
- (bool)initialized;
- (void)invalidate;
- (id)mediaFormatConversionManager;
- (id)peerMediaCapabilities;
- (bool)peerSupportsAdjustmentBaseResources;
- (bool)peerSupportsTranscodeChoice;
- (bool)penultimateIsPublic;
- (id)requestForOriginalAtPath:(id)arg1 isVideo:(bool)arg2 imageDimensions:(struct CGSize { double x1; double x2; })arg3 originalPairingIdentifier:(id)arg4;
- (id)requestForPath:(id)arg1 isVideo:(bool)arg2 imageDimensions:(struct CGSize { double x1; double x2; })arg3;
- (id)requestForRenderImagePath:(id)arg1 imageDimensions:(struct CGSize { double x1; double x2; })arg2 outputFilename:(id)arg3;
- (id)requestForRenderVideoPath:(id)arg1 outputFilename:(id)arg2;
- (void)setConvertedLivePhotoPairingIdentifiersByOriginalIdentifiers:(id)arg1;
- (void)setInitialized:(bool)arg1;
- (void)setMediaFormatConversionManager:(id)arg1;
- (void)setPeerMediaCapabilities:(id)arg1;
- (void)setTemporaryDirectoryURL:(id)arg1;
- (bool)setupTemporaryDirectory;
- (id)sourceForPath:(id)arg1 isVideo:(bool)arg2 imageDimensions:(struct CGSize { double x1; double x2; })arg3;
- (id)temporaryDirectoryURL;

@end
