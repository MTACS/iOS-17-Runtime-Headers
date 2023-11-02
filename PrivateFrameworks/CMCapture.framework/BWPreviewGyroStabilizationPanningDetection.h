
@interface BWPreviewGyroStabilizationPanningDetection : NSObject {
    int  _inputIndex;
    bool  _isPanning;
    float  _panningSpeedThreshold;
    int  _ringCount;
    /* Warning: Unrecognized filer type: ']' using 'void*' */ void* _translationVector;
}

@property (nonatomic, readonly) bool isPanning;

- (float)_computePanningStatistics;
- (void)_updateWithTranslation;
- (bool)detectPanningUsingTranslation:(void *)arg1 maxAvgTranslationOut:(void *)arg2; // needs 2 arg types, found 1: float*
- (id)initWithPanningThreshold:(float)arg1;
- (bool)isPanning;
- (void)reset;

@end
