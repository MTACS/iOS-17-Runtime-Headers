
@interface VCSAlarm : VCSEntity {
    unsigned long long  _alarmType;
    NSString * _body;
    NSString * _summary;
    VCSDate * _triggerDate;
    double  _triggerDuration;
    unsigned long long  _triggerType;
}

@property (nonatomic, readonly) unsigned long long alarmType;
@property (nonatomic, readonly) NSString *body;
@property (nonatomic, readonly) NSString *summary;
@property (nonatomic, readonly) VCSDate *triggerDate;
@property (nonatomic, readonly) double triggerDuration;
@property (nonatomic, readonly) unsigned long long triggerType;

+ (id)_componentsWithISO8601DurationString:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)alarmType;
- (id)body;
- (id)dictify;
- (void)ensureRelativeAlarmWithStartDate:(id)arg1;
- (unsigned long long)entityType;
- (id)initWithLine:(id)arg1 parseState:(id)arg2 property:(const struct { long long x1; unsigned long long x2; unsigned long long x3; bool x4; id x5; }*)arg3;
- (id)summary;
- (id)triggerDate;
- (double)triggerDuration;
- (unsigned long long)triggerType;

@end
