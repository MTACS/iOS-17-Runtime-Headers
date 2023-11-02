
@interface DUCalendarEventObjC : NSObject {
    _TtC21DocumentUnderstanding15DUCalendarEvent * _underlying;
}

@property (nonatomic, copy) NSDateComponents *endDateComponents;
@property (nonatomic, copy) NSTimeZone *endTimezone;
@property (nonatomic) bool isAllDay;
@property (nonatomic, copy) NSDateComponents *startDateComponents;
@property (nonatomic, copy) NSTimeZone *startTimezone;

- (void).cxx_destruct;
- (id)endDateComponents;
- (id)endTimezone;
- (id)init;
- (bool)isAllDay;
- (void)setEndDateComponents:(id)arg1;
- (void)setEndTimezone:(id)arg1;
- (void)setIsAllDay:(bool)arg1;
- (void)setStartDateComponents:(id)arg1;
- (void)setStartTimezone:(id)arg1;
- (id)startDateComponents;
- (id)startTimezone;

@end
