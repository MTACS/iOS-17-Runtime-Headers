
@interface BWBackgroundBlurNode : BWNode <BWPortraitEffectPropertiesDelegate> {
    unsigned long long  _activeBlurEffect;
    bool  _activeReactionsDirty;
    unsigned long long  _availablePTEffects;
    float  _backgroundBlurAperture;
    BWStats * _backgroundBlurProcessingTimeStats;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _bufferServicingLock;
    NSString * _clientApplicationID;
    BWDeviceOrientationMonitor * _deviceOrientationMonitor;
    bool  _effectBypassed;
    long long  _effectQuality;
    bool  _fastSwitchEnabled;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _framerateThrottleNextPTS;
    bool  _gesturesEnabled;
    bool  _isHighQualityEffectSupported;
    NSMutableDictionary * _lastActiveReactions;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastRenderPTS;
    BWLimitedGMErrorLogger * _limitedGMErrorLogger;
    int  _maxLossyCompressionLevel;
    int  _maxThermalSystemPressureLevel;
    int  _numberOfFramesThatCouldNotBeBlurred;
    struct opaqueCMFormatDescription { } * _outputFormatDescription;
    NSMutableArray * _pendingReactions;
    bool  _previousEffectBypassed;
    PTEffect * _ptEffect;
    PTEffectRenderRequest * _ptEffectRenderRequest;
    long long  _reactionCounter;
    id /* block */  _reactionsInProgressObserver;
    unsigned int  _stillCaptureEnqueueIndex;
    struct { 
        struct __CVBuffer {} *pixelBuffer; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } pts; 
    }  _stillCaptureQueue;
    bool  _stillImageCaptureEnabled;
    BWNodeInput * _stillImageInput;
    BWNodeOutput * _stillImageOutput;
    struct OpaqueVTPixelTransferSession { } * _stillImagePixelTransferSession;
    float  _studioLightingIntensity;
    bool  _suppressVideoEffects;
    BWDeviceThermalMonitor * _thermalMonitor;
    bool  _upstreamDeviceOrientationCorrectionEnabled;
    BWNodeInput * _videoInput;
    BWNodeOutput * _videoOutput;
}

@property (nonatomic) unsigned long long activeBlurEffect;
@property (nonatomic, copy) NSString *clientApplicationID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool effectBypassed;
@property (nonatomic) long long effectQuality;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BWNodeInput *stillImageInput;
@property (nonatomic, readonly) BWNodeOutput *stillImageOutput;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressVideoEffects;
@property (nonatomic, readonly) BWNodeInput *videoInput;
@property (nonatomic, readonly) BWNodeOutput *videoOutput;

+ (void)initialize;

- (unsigned long long)activeBlurEffect;
- (id)clientApplicationID;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didChangeBackgroundBlurAperture:(float)arg1;
- (void)didChangeGesturesEnabled:(bool)arg1;
- (void)didChangePortraitEffectStudioLightQuality:(long long)arg1;
- (void)didChangeStudioLightingIntensity:(float)arg1;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (bool)effectBypassed;
- (long long)effectQuality;
- (id)initWithStillImageCaptureEnabled:(bool)arg1 maxLossyCompressionLevel:(int)arg2 fastSwitchEnabled:(bool)arg3 availableEffects:(unsigned long long)arg4 activeEffect:(unsigned long long)arg5 isHighQualitySupported:(bool)arg6 upstreamDeviceOrientationCorrectionEnabled:(bool)arg7;
- (void)lowPowerModeChanged:(id)arg1;
- (id)nodeSubType;
- (id)nodeType;
- (void)performReactionEffect:(id)arg1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setActiveBlurEffect:(unsigned long long)arg1;
- (void)setClientApplicationID:(id)arg1;
- (void)setEffectBypassed:(bool)arg1;
- (void)setEffectQuality:(long long)arg1;
- (void)setReactionsInProgressChangedHandler:(id /* block */)arg1;
- (void)setSuppressVideoEffects:(bool)arg1;
- (id)stillImageInput;
- (id)stillImageOutput;
- (bool)suppressVideoEffects;
- (id)videoInput;
- (id)videoOutput;

@end
