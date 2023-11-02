
@interface HMDAnalyticsAddEventTriggerData : HMFObject {
    HMDAnalyticsEventTriggerData * _eventTrigger;
    int  _requestOrigin;
    unsigned int  _resultErrorCode;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) HMDAnalyticsEventTriggerData *eventTrigger;
@property int requestOrigin;
@property unsigned int resultErrorCode;
@property unsigned long long timestamp;

- (void).cxx_destruct;
- (id)eventTrigger;
- (int)requestOrigin;
- (unsigned int)resultErrorCode;
- (void)setEventTrigger:(id)arg1;
- (void)setRequestOrigin:(int)arg1;
- (void)setResultErrorCode:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;

@end
