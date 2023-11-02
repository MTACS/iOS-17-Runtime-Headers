
@interface MNTraceNavigationEventRow : NSObject {
    NSDate * _date;
    NSString * _eventDescription;
    NSString * _eventName;
    long long  _eventType;
    unsigned long long  _locationID;
    double  _relativeTimestamp;
    NSString * _speakableEventDescription;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic, copy) NSString *eventDescription;
@property (nonatomic, copy) NSString *eventName;
@property (nonatomic) long long eventType;
@property (nonatomic) unsigned long long locationID;
@property (nonatomic) double relativeTimestamp;
@property (nonatomic, copy) NSString *speakableEventDescription;

- (void).cxx_destruct;
- (id)date;
- (id)description;
- (id)eventDescription;
- (id)eventName;
- (long long)eventType;
- (unsigned long long)locationID;
- (double)relativeTimestamp;
- (void)setDate:(id)arg1;
- (void)setEventDescription:(id)arg1;
- (void)setEventName:(id)arg1;
- (void)setEventType:(long long)arg1;
- (void)setLocationID:(unsigned long long)arg1;
- (void)setRelativeTimestamp:(double)arg1;
- (void)setSpeakableEventDescription:(id)arg1;
- (id)speakableEventDescription;

@end
