
@interface PGGraphTimeDomainBuildingHelper : NSObject {
    NSMutableDictionary * _calendarUnitNodeByValueByUnit;
    NSMutableDictionary * _dayOfWeekNodeByDayOfWeek;
    PGGraph * _graph;
    NSMutableDictionary * _seasonNodeBySeasonName;
}

- (void).cxx_destruct;
- (id)calendarUnitNodeForCalendarUnit:(unsigned long long)arg1 value:(long long)arg2;
- (id)dayOfWeekNodeForDayOfWeek:(long long)arg1;
- (id)description;
- (id)initWithGraph:(id)arg1;
- (id)seasonNodeForSeasonName:(id)arg1;

@end
