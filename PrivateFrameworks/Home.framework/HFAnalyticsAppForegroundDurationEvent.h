
@interface HFAnalyticsAppForegroundDurationEvent : HFAnalyticsEvent {
    NSNumber * _foregroundDuration;
    NSString * _processName;
    bool  _userHasAccessories;
}

@property (nonatomic, retain) NSNumber *foregroundDuration;
@property (nonatomic, retain) NSString *processName;
@property (nonatomic) bool userHasAccessories;

- (void).cxx_destruct;
- (id)foregroundDuration;
- (id)initWithData:(id)arg1;
- (id)payload;
- (id)processName;
- (void)setForegroundDuration:(id)arg1;
- (void)setProcessName:(id)arg1;
- (void)setUserHasAccessories:(bool)arg1;
- (bool)userHasAccessories;

@end
