
@interface JFXCompositionExporter : NSObject <JFXExportDelegate> {
    <JFXCompositionPlayableElementsDataSource> * _clipsDataSource;
    JFXComposition * _composition;
    <JFXExportDelegate> * _delegate;
    JFXReaderWriterExportController * _exportController;
    NSDate * _exportEndTime;
    NSDate * _exportStartTime;
}

@property (nonatomic, readonly) <JFXCompositionPlayableElementsDataSource> *clipsDataSource;
@property (nonatomic, retain) JFXComposition *composition;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <JFXExportDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) JFXReaderWriterExportController *exportController;
@property (retain) NSDate *exportEndTime;
@property (retain) NSDate *exportStartTime;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int parentCode;
@property (readonly) Class superclass;

+ (Class)compositionClass;

- (void).cxx_destruct;
- (void)cancelWithStatus:(long long)arg1;
- (id)clipsDataSource;
- (id)composition;
- (void)dealloc;
- (id)delegate;
- (void)didFinishExport:(long long)arg1;
- (unsigned long long)estimatedFileSizeForDuration:(int)arg1 frameRate:(double)arg2 preset:(id)arg3;
- (void)exportAnalyticsForSessionBegin;
- (void)exportAnalyticsForSessionCompleteWithStatus:(long long)arg1 exportMachDuration:(unsigned long long)arg2;
- (id)exportController;
- (id)exportEndTime;
- (void)exportProgressedTo:(float)arg1;
- (id)exportStartTime;
- (id)initWithClipsDataSource:(id)arg1;
- (unsigned int)parentCode;
- (void)setComposition:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExportController:(id)arg1;
- (void)setExportEndTime:(id)arg1;
- (void)setExportStartTime:(id)arg1;
- (void)setParentCode:(unsigned int)arg1;
- (void)startWithPresets:(id)arg1 toFilePath:(id)arg2 poster:(id)arg3;
- (void)tearDown;
- (double)timeElapsedDuringExport;

@end
