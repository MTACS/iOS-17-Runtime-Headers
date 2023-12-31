
@interface STBlueprintScheduleCustomDayItem : NSObject <NSCopying> {
    unsigned long long  _day;
    NSDateComponents * _endTime;
    NSDateComponents * _startTime;
}

@property (nonatomic) unsigned long long day;
@property (nonatomic, retain) NSDateComponents *endTime;
@property (nonatomic, retain) NSDateComponents *startTime;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)day;
- (id)endTime;
- (void)setDay:(unsigned long long)arg1;
- (void)setEndTime:(id)arg1;
- (void)setStartTime:(id)arg1;
- (id)startTime;

@end
