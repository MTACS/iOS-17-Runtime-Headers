
@interface HMDAnalyticsTriggerEventData : HMFObject {
    HMDAnalyticsCalendarEventData * _calendarEvent;
    HMDAnalyticsCharacteristicEventData * _charEvent;
    HMDAnalyticsCharacteristicThresholdEventData * _charThresholdEvent;
    HMDAnalyticsDurationEventData * _durationEvent;
    bool  _endEvent;
    HMDAnalyticsLocationEventData * _locationEvent;
    HMDAnalyticsPresenceEventData * _presenceEvent;
    HMDAnalyticsSignificantTimeEventData * _significantTimeEvent;
    HMDAnalyticsCharacteristicThresholdEventData * _thresholdEvent;
}

@property (nonatomic, retain) HMDAnalyticsCalendarEventData *calendarEvent;
@property (nonatomic, retain) HMDAnalyticsCharacteristicEventData *charEvent;
@property (nonatomic, retain) HMDAnalyticsCharacteristicThresholdEventData *charThresholdEvent;
@property (nonatomic, retain) HMDAnalyticsDurationEventData *durationEvent;
@property (nonatomic) bool endEvent;
@property (nonatomic, retain) HMDAnalyticsLocationEventData *locationEvent;
@property (nonatomic, retain) HMDAnalyticsPresenceEventData *presenceEvent;
@property (nonatomic, retain) HMDAnalyticsSignificantTimeEventData *significantTimeEvent;
@property (nonatomic, retain) HMDAnalyticsCharacteristicThresholdEventData *thresholdEvent;

- (void).cxx_destruct;
- (id)calendarEvent;
- (id)charEvent;
- (id)charThresholdEvent;
- (id)durationEvent;
- (bool)endEvent;
- (id)locationEvent;
- (id)presenceEvent;
- (void)setCalendarEvent:(id)arg1;
- (void)setCharEvent:(id)arg1;
- (void)setCharThresholdEvent:(id)arg1;
- (void)setDurationEvent:(id)arg1;
- (void)setEndEvent:(bool)arg1;
- (void)setLocationEvent:(id)arg1;
- (void)setPresenceEvent:(id)arg1;
- (void)setSignificantTimeEvent:(id)arg1;
- (void)setThresholdEvent:(id)arg1;
- (id)significantTimeEvent;
- (id)thresholdEvent;

@end
