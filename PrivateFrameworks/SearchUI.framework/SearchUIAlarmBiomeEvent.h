
@interface SearchUIAlarmBiomeEvent : SearchUIBiomeEvent {
    NSString * _observedAlarmIdentifier;
}

@property (nonatomic, retain) BMClockAlarm *biomeEvent;
@property (nonatomic, retain) NSString *observedAlarmIdentifier;

+ (bool)supportsEvent:(id)arg1 contextualAction:(id)arg2;

- (void).cxx_destruct;
- (void)getEnabledStatusWithCompletion:(id /* block */)arg1;
- (id)initWithEvent:(id)arg1 contextualActon:(id)arg2;
- (id)observedAlarmIdentifier;
- (void)setObservedAlarmIdentifier:(id)arg1;

@end
