
@interface AlarmSearch : INObject

@property (nonatomic) long long alarmReferenceType;
@property (nonatomic) long long alarmSearchStatus;
@property (nonatomic, retain) NSNumber *includeSleepAlarm;
@property (nonatomic, retain) NSNumber *isMeridianInferred;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) long long period;
@property (nonatomic, copy) NSArray *repeatSchedule;
@property (nonatomic, copy) NSDateComponents *time;
@property (nonatomic, retain) INDateComponentsRange *timeRange;

+ (bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;

@end
