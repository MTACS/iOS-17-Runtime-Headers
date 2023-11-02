
@interface BWStillImageCaptureStreamSettings : NSObject <NSSecureCoding> {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _adaptiveBracketingLastFramePTS;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _adaptiveBracketingLock;
    <BWAdaptiveBracketingParameters> * _adaptiveBracketingParameters;
    NSArray * _adaptiveBracketingSphereOffsets;
    NSMutableArray * _adaptiveCaptureFrameInfos;
    NSMutableArray * _adaptivePreBracketFrameCaptureParams;
    NSMutableArray * _adaptiveUnifiedBracketedCaptureParams;
    BWBracketSettings * _bracketSettings;
    unsigned long long  _captureFlags;
    NSArray * _captureFrameInfos;
    int  _captureType;
    bool  _lensStabilizationEnabledForClientBracket;
    NSString * _portType;
    NSDictionary * _preBracketFrameCaptureParams;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _preferredTimeMachinePTS;
    bool  _reachedEndOfAdaptiveBracketing;
    int  _referenceFrameIndex;
    NSString * _sensorIDString;
    NSArray * _timeMachineBracketedCaptureParams;
    int  _timeMachineFrameCount;
    NSArray * _unifiedBracketedCaptureParams;
    NSArray * _validBracketedCaptureSequenceNumbers;
}

@property (nonatomic, readonly) BWBracketSettings *bracketSettings;
@property (nonatomic, readonly) unsigned long long captureFlags;
@property (nonatomic, readonly) int captureType;
@property (nonatomic, readonly) bool expectPreBracketFrame;
@property (nonatomic, readonly) int expectedFrameCaptureCount;
@property (nonatomic, readonly) struct { int x1; int x2; int x3; } expectedFrameCaptureCounts;
@property (nonatomic, readonly) int expectedFrameCount;
@property (nonatomic, readonly) int expectedTimeMachineFrameCaptureCount;
@property (nonatomic, readonly) int expectedUltraHighResFrameCaptureCount;
@property (nonatomic, readonly) bool hasValidFrames;
@property (nonatomic, readonly) bool isSensorRawCapture;
@property (nonatomic, readonly) bool isYUVCapture;
@property (nonatomic, readonly) NSString *portType;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } preferredTimeMachinePTS;
@property (nonatomic, retain) NSString *sensorIDString;
@property (nonatomic, readonly) int timeMachineFrameCount;
@property (nonatomic, readonly) NSArray *validBracketedCaptureSequenceNumbers;

+ (bool)supportsSecureCoding;

- (int)adaptiveBracketingGroupCaptureCount;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })adaptiveBracketingLastFramePTS;
- (id)adaptiveBracketingParameters;
- (id)adaptiveBracketingSphereOffsetsForNextGroupWithFrameCount:(int)arg1;
- (id)adaptivePreBracketFrameCaptureParams;
- (id)adaptiveUnifiedBracketedCaptureParams;
- (void)addAdaptiveUnifiedBracketedCaptureParams:(id)arg1 preBracketFrameCaptureParams:(id)arg2 bracketedCaptureFrameInfos:(id)arg3;
- (id)bracketSettings;
- (void)cannotProcessDeepFusionEnhancedResolution;
- (void)cannotProcessDepthPhotos;
- (unsigned long long)captureFlags;
- (id)captureFrameInfoForFrame:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)captureFrameInfos;
- (int)captureType;
- (int)currentExpectedAdaptiveBracketedFrameCaptureCount;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)expectPreBracketFrame;
- (int)expectedAdaptiveBracketedFrameCaptureCountUsingGroup:(int)arg1;
- (int)expectedEVZeroFrameCount;
- (int)expectedFrameCaptureCount;
- (struct { int x1; int x2; int x3; })expectedFrameCaptureCounts;
- (int)expectedFrameCount;
- (int)expectedLongFrameCount;
- (int)expectedReferenceFrameCandidateCount;
- (int)expectedTimeMachineFrameCaptureCount;
- (int)expectedUltraHighResFrameCaptureCount;
- (bool)hasValidFrames;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPortType:(id)arg1 captureType:(int)arg2 captureFlags:(unsigned long long)arg3 adaptiveBracketingParameters:(id)arg4 sphereOffsets:(id)arg5;
- (id)initWithPortType:(id)arg1 captureType:(int)arg2 captureFlags:(unsigned long long)arg3 referenceFrameIndex:(int)arg4 timeMachineBracketedCaptureParams:(id)arg5 preBracketFrameCaptureParams:(id)arg6 unifiedBracketedCaptureParams:(id)arg7 frameInfos:(id)arg8;
- (id)initWithPortType:(id)arg1 captureType:(int)arg2 captureFlags:(unsigned long long)arg3 timeMachineFrameCount:(int)arg4 bracketSettings:(id)arg5 validBracketedCaptureSequenceNumbers:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isFrameCapturedForProcessing:(struct opaqueCMSampleBuffer { }*)arg1;
- (bool)isSensorRawCapture;
- (bool)isUnifiedBracketingErrorRecoveryFrame:(struct opaqueCMSampleBuffer { }*)arg1 isReferenceFrame:(bool)arg2;
- (bool)isYUVCapture;
- (bool)lensStabilizationEnabledForClientBracket;
- (id)portType;
- (id)preBracketFrameCaptureParams;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })preferredTimeMachinePTS;
- (bool)reachedEndOfAdaptiveBracketing;
- (int)referenceFrameIndex;
- (id)sensorIDString;
- (bool)sensorRawCapturedForFinalImageProcessing;
- (void)setAdaptiveBracketingLastFramePTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setLensStabilizationEnabledForClientBracket:(bool)arg1;
- (void)setPreferredTimeMachinePTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setReachedEndOfAdaptiveBracketing:(bool)arg1;
- (void)setSensorIDString:(id)arg1;
- (id)timeMachineBracketedCaptureParams;
- (int)timeMachineFrameCount;
- (int)timeMachineReferenceFrameIndex;
- (id)unifiedBracketedCaptureParams;
- (id)validBracketedCaptureSequenceNumbers;

@end
