
@interface VUINowPlayingTimerTriggeredFeature : NSObject <VUINowPlayingFeature> {
    bool  _active;
    bool  _autoRemove;
    bool  _backgroundTimer;
    double  _duration;
    bool  _repeats;
    unsigned long long  _type;
    id  _userInfo;
}

@property (getter=isActive, nonatomic) bool active;
@property (getter=shouldAutoRemove, nonatomic) bool autoRemove;
@property (getter=isBackgroundTimer, nonatomic, readonly) bool backgroundTimer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool repeats;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long type;
@property (nonatomic, retain) id userInfo;

- (void).cxx_destruct;
- (id)description;
- (double)duration;
- (unsigned long long)hash;
- (id)initWithType:(unsigned long long)arg1 duration:(double)arg2 repeats:(bool)arg3;
- (id)initWithType:(unsigned long long)arg1 duration:(double)arg2 repeats:(bool)arg3 backgroundTimer:(bool)arg4;
- (bool)isActive;
- (bool)isBackgroundTimer;
- (bool)isEqual:(id)arg1;
- (bool)repeats;
- (void)setActive:(bool)arg1;
- (void)setAutoRemove:(bool)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setUserInfo:(id)arg1;
- (bool)shouldAutoRemove;
- (unsigned long long)type;
- (id)userInfo;

@end
