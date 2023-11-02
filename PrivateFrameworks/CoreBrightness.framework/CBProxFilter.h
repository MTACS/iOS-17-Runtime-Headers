
@interface CBProxFilter : CBFilter {
    bool  _isActive;
    bool  _proxHasJustBeenRemoved;
    float  _proxReleaseTime;
    float  _proxTriggerDelay;
    bool  _triggered;
}

@property (nonatomic) bool isActive;

- (void)dealloc;
- (id)filterEvent:(id)arg1;
- (id)handleALSEvent:(id)arg1;
- (id)handleProximityEvent:(id)arg1;
- (id)init;
- (bool)isActive;
- (void)setIsActive:(bool)arg1;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)setTriggered:(bool)arg1;

@end
