
@interface BSUIRelativeDateLabel : BSUIDefaultDateLabel <BSRelativeDateTimerDelegate, _UIAlwaysOnEnvironmentObserver> {
    long long  _comparedToNow;
    bool  _invalidateTimelineOnReuse;
    BSRelativeDateTimerFireInfo * _overrideTimerFireInfo;
    BSRelativeDateTimer * _relativeDateTimer;
    unsigned long long  _resolution;
    unsigned long long  _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_overrideTimerFireInfo, setter=_setOverrideTimerFireInfo:, nonatomic, copy) BSRelativeDateTimerFireInfo *overrideTimerFireInfo;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_overrideTimerFireInfo;
- (void)_setOverrideTimerFireInfo:(id)arg1;
- (id)_timelinesForDateInterval:(id)arg1;
- (void)_timelinesForDateInterval:(id)arg1 completion:(id /* block */)arg2;
- (void)_updateWithFrameSpecifier:(id)arg1;
- (void)_updateWithFrameSpecifier:(id)arg1 completion:(id /* block */)arg2;
- (id)constructLabelString;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)prepareForReuse;
- (void)setTimeZoneRelativeStartDate:(id)arg1 absoluteStartDate:(id)arg2;
- (void)timerFiredWithValue:(unsigned long long)arg1 forResolution:(unsigned long long)arg2 comparedToNow:(long long)arg3;
- (void)willMoveToWindow:(id)arg1;

@end
