
@interface STDeviceBedtime : NSObject <NSCopying> {
    bool  _askForMoreTime;
    bool  _deviceBedtimeEnabled;
    NSDictionary * _scheduleByWeekdayIndex;
    bool  _shouldAllowEditing;
    STBlueprintScheduleSimpleItem * _simpleSchedule;
}

@property (nonatomic) bool askForMoreTime;
@property (nonatomic) bool deviceBedtimeEnabled;
@property (copy) NSDictionary *scheduleByWeekdayIndex;
@property (readonly, copy) NSString *scheduleText;
@property (nonatomic) bool shouldAllowEditing;
@property (copy) STBlueprintScheduleSimpleItem *simpleSchedule;

+ (id)defaultBedtimeSchedule;

- (void).cxx_destruct;
- (bool)askForMoreTime;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)deviceBedtimeEnabled;
- (id)init;
- (id)initWithBlueprint:(id)arg1;
- (id)scheduleByWeekdayIndex;
- (id)scheduleText;
- (void)setAskForMoreTime:(bool)arg1;
- (void)setDeviceBedtimeEnabled:(bool)arg1;
- (void)setScheduleByWeekdayIndex:(id)arg1;
- (void)setShouldAllowEditing:(bool)arg1;
- (void)setSimpleSchedule:(id)arg1;
- (bool)shouldAllowEditing;
- (id)simpleSchedule;

@end
