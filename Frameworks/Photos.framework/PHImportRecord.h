
@interface PHImportRecord : PHImportExceptionRecorder {
    NSString * _assetIdentifier;
    NSString * _downloadedPath;
    PHImportAsset * _importAsset;
    unsigned char  _importType;
    NSString * _rawAssetIdentifier;
    bool  _referencedImport;
    NSMutableArray * _relatedRecords;
    PHImportTimerCollection * _timers;
}

@property (nonatomic, retain) NSString *assetIdentifier;
@property (readonly) bool canReference;
@property (nonatomic, retain) NSString *downloadedPath;
@property (nonatomic, retain) PHImportAsset *importAsset;
@property (nonatomic) unsigned char importType;
@property (nonatomic, readonly) NSString *rawAssetIdentifier;
@property (nonatomic) bool referencedImport;
@property (nonatomic, retain) NSMutableArray *relatedRecords;
@property (nonatomic, retain) PHImportTimerCollection *timers;

- (void).cxx_destruct;
- (void)addRelatedRecord:(id)arg1;
- (id)allAssetIdentifiers;
- (id)allImportAssets;
- (id)allImportRecords;
- (id)assetIdentifier;
- (bool)canReference;
- (void)cleanupAfterFailure;
- (id)description;
- (id)descriptionWithPrefix:(id)arg1;
- (id)downloadedPath;
- (id)importAsset;
- (unsigned char)importType;
- (id)initWithImportAsset:(id)arg1;
- (bool)needsDownload;
- (id)rawAssetIdentifier;
- (id)recordForAsset:(id)arg1;
- (bool)referencedImport;
- (id)relatedRecords;
- (void)setAssetIdentifier:(id)arg1;
- (void)setDownloadedPath:(id)arg1;
- (void)setImportAsset:(id)arg1;
- (void)setImportType:(unsigned char)arg1;
- (void)setReferencedImport:(bool)arg1;
- (void)setRelatedRecords:(id)arg1;
- (void)setTimers:(id)arg1;
- (id)timers;

@end
