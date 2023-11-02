
@interface CBSBIM : NSObject {
    float  _cap;
    float  _currentHeadroom;
    float  _currentHeadroomRequest;
    NSObject<OS_dispatch_source> * _dataTimer;
    CBDisplayModuleiOS * _displayModule;
    CBEDR * _edr;
    bool  _edrOn;
    struct __IOMobileFramebuffer { } * _iomfb;
    unsigned int  _iomfbService;
    bool  _isMonitoring;
    const float * _limits;
    unsigned int  _limitsSize;
    NSObject<OS_os_log> * _log;
    NSObject<OS_dispatch_source> * _mitigationTimer;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _sbimEnabled;
    float  _sdrBrightness;
    struct MitigationState { 
        int stage; 
        bool violation; 
        unsigned int sbim_reset_frequency; 
        unsigned int sbim_timer_interval; 
        unsigned int mitigation_timer_interval; 
        unsigned int sbim_size; 
        float delta_factor; 
        float minutes_per_stop_mitigate; 
        float minutes_per_stop_recovery; 
        int sbim_above_max; 
        int sbim_sustain_max; 
        int sbim_above_num; 
        int sbim_sustain_num; 
        double lastStateUpdate_; 
        unsigned int sbim_read_stage; 
        struct IOMFBShortTermBIM { 
            unsigned int version; 
            union { 
                struct { 
                    unsigned int sbim[3]; 
                    unsigned long long duration_us; 
                } v1; 
            } ; 
        } lastSBIMBlock_; 
        float scalingFactor; 
    }  mitigation;
}

@property (readonly) float cap;
@property float currentHeadroom;
@property float currentHeadroomRequest;
@property float sdrBrightness;

+ (bool)needsSBIM;

- (id).cxx_construct;
- (float)cap;
- (float)currentHeadroom;
- (float)currentHeadroomRequest;
- (void)dataTimerHandler;
- (void)dealloc;
- (void)disable;
- (void)enable;
- (void)enableSBIM:(bool)arg1;
- (void)enterEDR;
- (void)exitEDR;
- (id)initWithQueue:(id)arg1 andDisplayModule:(id)arg2 andEDRModule:(id)arg3;
- (bool)initialiseLimits;
- (float)mitigatedHeadroomFromRequestedHeadroom;
- (const char *)mitigationStageToString:(int)arg1;
- (void)mitigationTimerHandler;
- (void)resetMitigationState;
- (float)sdrBrightness;
- (void)sendEDRHeadroomRequest:(float)arg1;
- (void)setCurrentHeadroom:(float)arg1;
- (void)setCurrentHeadroomRequest:(float)arg1;
- (void)setSdrBrightness:(float)arg1;
- (void)startMonitoring;
- (void)stopMonitoring;
- (void)updateMitigationStateWithData:(struct IOMFBShortTermBIM { unsigned int x1; union { struct { unsigned int x_1_2_1[3]; unsigned long long x_1_2_2; } x_2_1_1; } x2; })arg1 andCurrentHeadroom:(float)arg2 andRequestedHeadroom:(float)arg3 andSDRBrightness:(float)arg4 andReset:(bool)arg5;

@end
