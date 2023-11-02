
@interface CRImageReaderTrackingSession : NSObject {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _accumulatedSceneHomography;
    VisionCoreSparseOpticalFlowResult * _debuggingMemoryResult;
    VisionCoreSparseOpticalFlowResult * _debuggingResult;
    bool  _debuggingSession;
    bool  _didDispatchOCROnFrame;
    bool  _didRunAssociationOnFrame;
    float  _downscaleRate;
    unsigned long long  _frameCount;
    unsigned long long  _frameCountSinceLastAssociationEnded;
    double  _lastApplyOpticalFlowTrackingStartTime;
    double  _lastFrameTime;
    double  _lastOCRDispatchTime;
    CRImageReaderTrackingResult * _latestResult;
    double  _lowFrequencyOCRElapsedTimeAboveMinimumStability;
    struct queue<double, std::deque<double>> { 
        struct deque<double, std::allocator<double>> { 
            struct __split_buffer<double *, std::allocator<double *>> { 
                double **__first_; 
                double **__begin_; 
                double **__end_; 
                struct __compressed_pair<double **, std::allocator<double *>> { 
                    double **__value_; 
                } __end_cap_; 
            } __map_; 
            unsigned long long __start_; 
            struct __compressed_pair<unsigned long, std::allocator<double>> { 
                unsigned long long __value_; 
            } __size_; 
        } c; 
    }  _ocrDispatchTimestamps;
    unsigned long long  _ocrFrameInterval;
    bool  _ocrInProgress;
    NSObject<OS_dispatch_queue> * _ocrQueue;
    unsigned long long  _ocrUpdateMode;
    VisionCoreSparseOpticalFlowSession * _optFlowSession;
    double  _replacedQuadArea;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _sceneHomography;
    bool  _shouldIncludeLinesInTrackingResult;
    double  _totalQuadArea;
    unsigned long long  _trackingLevel;
    bool  _useLumaInput;
    bool  _usesGroupedRegions;
    bool  _wasLastFrameUnstableForFirstAcquisition;
    bool  _wasLatestFrameUnstableForFirstAcquisition;
}

@property bool didDispatchOCROnFrame;
@property bool didRunAssociationOnFrame;
@property (retain) CRImageReaderTrackingResult *latestResult;
@property double lowFrequencyOCRElapsedTimeAboveMinimumStability;
@property unsigned long long ocrUpdateMode;
@property bool shouldIncludeLinesInTrackingResult;
@property (readonly) bool usesGroupedRegions;
@property (readonly) bool wasLatestFrameUnstableForFirstAcquisition;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)didDispatchOCROnFrame;
- (bool)didRunAssociationOnFrame;
- (id)initWithTrackingLevel:(unsigned long long)arg1;
- (id)initWithTrackingLevel:(unsigned long long)arg1 debuggingSession:(bool)arg2;
- (id)initWithTrackingLevel:(unsigned long long)arg1 ocrFrameInterval:(unsigned long long)arg2;
- (id)latestResult;
- (double)lowFrequencyOCRElapsedTimeAboveMinimumStability;
- (unsigned long long)ocrUpdateMode;
- (void)setDidDispatchOCROnFrame:(bool)arg1;
- (void)setDidRunAssociationOnFrame:(bool)arg1;
- (void)setLatestResult:(id)arg1;
- (void)setLowFrequencyOCRElapsedTimeAboveMinimumStability:(double)arg1;
- (void)setOcrUpdateMode:(unsigned long long)arg1;
- (void)setShouldIncludeLinesInTrackingResult:(bool)arg1;
- (bool)shouldIncludeLinesInTrackingResult;
- (void)updateOCRUpdateModeWithStability:(id)arg1 frameDuration:(double)arg2;
- (bool)usesGroupedRegions;
- (bool)wasLatestFrameUnstableForFirstAcquisition;

@end
