
@interface BLSHEngineRenderFlipbookSession : NSObject <BSInvalidatable> {
    <BLSHFlipbook> * _flipbook;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    double  _lock_accumulatedLayoutDuration;
    double  _lock_accumulatedRenderDuration;
    <BLSHEngineRenderFlipbookSessionDelegate> * _lock_delegate;
    bool  _lock_didDisableFlipbookPowerSavings;
    bool  _lock_didFailToRender;
    bool  _lock_invalidated;
    double  _lock_layoutStartTime;
    NSMutableSet * _lock_pendingEnvironments;
    BLSHPresentationDateSpecifier * _lock_preparingSpecifier;
    NSMutableArray * _lock_renderedFrames;
    int  _lock_retryRenderCount;
    bool  _lock_timedOut;
    <BSTimerScheduleQuerying><BSCancellable><BSInvalidatable> * _lock_timeoutTimer;
    <BLSHOSInterfaceProviding> * _osInterfaceProvider;
    BLSHBacklightEnvironmentPresentation * _presentation;
    double  _sessionStartTime;
    unsigned long long  _stateHandler;
}

@property (nonatomic, readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long memoryUsage;
@property (nonatomic, readonly) BLSHBacklightEnvironmentPresentation *presentation;
@property (nonatomic, readonly) NSArray *renderedFrames;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)count;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)initWithDelegate:(id)arg1 flipbook:(id)arg2 presentation:(id)arg3 osInterfaceProvider:(id)arg4;
- (void)invalidate;
- (unsigned long long)memoryUsage;
- (void)prepareAndRenderFrameSpecifier:(id)arg1;
- (id)presentation;
- (id)renderedFrames;
- (id)telemetryDataWithEndTime:(double)arg1 reasonEnded:(id)arg2 preventedSleepDuration:(double)arg3;

@end
