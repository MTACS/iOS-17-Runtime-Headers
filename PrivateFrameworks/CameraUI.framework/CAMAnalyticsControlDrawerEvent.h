
@interface CAMAnalyticsControlDrawerEvent : CAMAnalyticsEvent {
    long long  __captureMode;
    NSMutableSet * __changedControlTypes;
    long long  __devicePosition;
    long long  __dismissingControlType;
    long long  __dismissingReason;
    double  __duration;
    bool  __hasDismissingControlType;
    bool  __hasOpeningControlType;
    long long  __openingControlType;
    long long  __openingReason;
    double  __startTime;
}

@property (nonatomic, readonly) long long _captureMode;
@property (nonatomic, readonly) NSMutableSet *_changedControlTypes;
@property (nonatomic, readonly) long long _devicePosition;
@property (nonatomic) long long _dismissingControlType;
@property (nonatomic) long long _dismissingReason;
@property (nonatomic) double _duration;
@property (nonatomic) bool _hasDismissingControlType;
@property (nonatomic) bool _hasOpeningControlType;
@property (nonatomic) long long _openingControlType;
@property (nonatomic, readonly) long long _openingReason;
@property (nonatomic, readonly) double _startTime;

- (void).cxx_destruct;
- (long long)_captureMode;
- (id)_changedControlTypes;
- (long long)_devicePosition;
- (long long)_dismissingControlType;
- (long long)_dismissingReason;
- (double)_duration;
- (bool)_hasDismissingControlType;
- (bool)_hasOpeningControlType;
- (long long)_openingControlType;
- (long long)_openingReason;
- (double)_startTime;
- (void)didChangeValueForControlType:(long long)arg1;
- (void)dismissedControlDrawerWithReason:(long long)arg1;
- (id)eventName;
- (id)initWithReason:(long long)arg1 captureMode:(long long)arg2 devicePosition:(long long)arg3;
- (void)publish;
- (void)setDismissingControlType:(long long)arg1;
- (void)setOpeningControlType:(long long)arg1;
- (void)set_dismissingControlType:(long long)arg1;
- (void)set_dismissingReason:(long long)arg1;
- (void)set_duration:(double)arg1;
- (void)set_hasDismissingControlType:(bool)arg1;
- (void)set_hasOpeningControlType:(bool)arg1;
- (void)set_openingControlType:(long long)arg1;

@end
