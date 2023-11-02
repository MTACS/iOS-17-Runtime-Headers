
@interface JFXExportController : NSObject {
    bool  _cancel;
    JFXComposition * _composition;
    NSString * _currentPreset;
    <JFXExportDelegate> * _delegate;
    NSString * _exportPath;
    unsigned long long  _exportStartTime;
    unsigned long long  _exportingIndexPresets;
    UIImage * _poster;
    NSArray * _presets;
    NSTimer * _progressTimer;
    long long  _status;
}

@property (nonatomic) bool cancel;
@property (nonatomic, retain) JFXComposition *composition;
@property (nonatomic, retain) NSString *currentPreset;
@property (nonatomic, retain) <JFXExportDelegate> *delegate;
@property (nonatomic, retain) NSString *exportPath;
@property unsigned long long exportStartTime;
@property (nonatomic) unsigned long long exportingIndexPresets;
@property (nonatomic, retain) UIImage *poster;
@property (nonatomic, retain) NSArray *presets;
@property (nonatomic, retain) NSTimer *progressTimer;
@property (nonatomic) long long status;

+ (unsigned long long)audioDataRateForPreset:(id)arg1;
+ (unsigned long long)dataRateForPreset:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (unsigned long long)estimatedFileSizeForDuration:(int)arg1 frameRate:(double)arg2 preset:(id)arg3 size:(struct CGSize { double x1; double x2; })arg4;
+ (id)presetNameForCGSize:(struct CGSize { double x1; double x2; })arg1;
+ (unsigned long long)videoDataRateForPreset:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;

- (void).cxx_destruct;
- (void)analyticsForSessionBegin;
- (void)analyticsForSessionCompleteWithStatus:(long long)arg1;
- (void)beginAsynchronousExport;
- (bool)cancel;
- (void)cancelExportWithStatus:(long long)arg1;
- (void)closeSessionWithStatus:(long long)arg1;
- (id)composition;
- (void)continueExportAfterDelay;
- (id)currentPreset;
- (id)delegate;
- (unsigned long long)exportDuration;
- (id)exportPath;
- (unsigned long long)exportStartTime;
- (unsigned long long)exportingIndexPresets;
- (void)informDelegateOfCompletion;
- (id)initWithWithComposition:(id)arg1 presets:(id)arg2 toFile:(id)arg3 poster:(id)arg4 delegate:(id)arg5;
- (id)metadataToAdd;
- (void)nextPreset;
- (id)poster;
- (id)presets;
- (float)progress;
- (id)progressTimer;
- (void)serviceProgressTimer:(id)arg1;
- (void)setCancel:(bool)arg1;
- (void)setComposition:(id)arg1;
- (void)setCurrentPreset:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExportPath:(id)arg1;
- (void)setExportStartTime:(unsigned long long)arg1;
- (void)setExportingIndexPresets:(unsigned long long)arg1;
- (void)setPoster:(id)arg1;
- (void)setPresets:(id)arg1;
- (void)setProgressTimer:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)startProgressTimer;
- (long long)status;
- (void)stopProgressTimer;
- (void)updateProgressViewWithProgress:(float)arg1 reduced:(bool)arg2;

@end
