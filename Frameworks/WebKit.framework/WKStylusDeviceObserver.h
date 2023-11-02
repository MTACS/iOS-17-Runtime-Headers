
@interface WKStylusDeviceObserver : NSObject {
    struct RetainPtr<NSTimer> { 
        void *m_ptr; 
    }  _changeTimer;
    bool  _hasStylusDevice;
    unsigned long long  _startCount;
}

@property (nonatomic, readonly) bool hasStylusDevice;

+ (id)sharedInstance;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)changeTimerFired:(id)arg1;
- (bool)hasStylusDevice;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setHasStylusDevice:(bool)arg1;
- (void)start;
- (void)startChangeTimer:(double)arg1;
- (void)stop;

@end
