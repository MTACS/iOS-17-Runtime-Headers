
@interface PUWallpaperShuffleResourceExportOperation : PXAsyncOperation {
    PFPosterEditConfiguration * _editConfiguration;
    NSError * _error;
    NSURL * _exportDirectory;
    <PISegmentationLoading> * _exportTask;
    unsigned long long  _options;
    PIParallaxStyle * _persistedStyle;
    PFPosterMedia * _posterMedia;
    <PISegmentationItem> * _segmentationItem;
    NSURL * _sourceDirectory;
    PIParallaxStyle * _style;
}

@property (nonatomic, copy) PFPosterEditConfiguration *editConfiguration;
@property (retain) NSError *error;
@property (nonatomic, retain) NSURL *exportDirectory;
@property (retain) <PISegmentationLoading> *exportTask;
@property (nonatomic) unsigned long long options;
@property (nonatomic, retain) PIParallaxStyle *persistedStyle;
@property (nonatomic, copy) PFPosterMedia *posterMedia;
@property (nonatomic, retain) <PISegmentationItem> *segmentationItem;
@property (nonatomic, retain) NSURL *sourceDirectory;
@property (nonatomic, retain) PIParallaxStyle *style;

- (void).cxx_destruct;
- (bool)_canExportFromDirectory;
- (bool)_exportFromDirectory;
- (void)_handleExportCompletion:(id)arg1;
- (bool)_tryExportFromDirectory;
- (void)cancel;
- (id)editConfiguration;
- (id)error;
- (id)exportDirectory;
- (id)exportTask;
- (unsigned long long)options;
- (id)persistedStyle;
- (id)posterMedia;
- (void)px_finishIfPossible;
- (bool)px_shouldWaitForCancel;
- (void)px_start;
- (id)segmentationItem;
- (void)setEditConfiguration:(id)arg1;
- (void)setError:(id)arg1;
- (void)setExportDirectory:(id)arg1;
- (void)setExportTask:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setPersistedStyle:(id)arg1;
- (void)setPosterMedia:(id)arg1;
- (void)setSegmentationItem:(id)arg1;
- (void)setSourceDirectory:(id)arg1;
- (void)setStyle:(id)arg1;
- (id)sourceDirectory;
- (id)style;

@end
