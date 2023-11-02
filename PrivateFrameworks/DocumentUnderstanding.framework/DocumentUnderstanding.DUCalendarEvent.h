
@interface DocumentUnderstanding.DUCalendarEvent : NSObject <NSCoding, NSCopying> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  endDateComponents;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  endTimezone;
    void isAllDay;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  startDateComponents;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  startTimezone;
}

@property (nonatomic, copy) NSDateComponents *endDateComponents;
@property (nonatomic, copy) NSTimeZone *endTimezone;
@property (nonatomic) bool isAllDay;
@property (nonatomic, copy) NSDateComponents *startDateComponents;
@property (nonatomic, copy) NSTimeZone *startTimezone;

- (void).cxx_destruct;
- (id)copyWithZone:(void*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)endDateComponents;
- (id)endTimezone;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isAllDay;
- (void)setEndDateComponents:(id)arg1;
- (void)setEndTimezone:(id)arg1;
- (void)setIsAllDay:(bool)arg1;
- (void)setStartDateComponents:(id)arg1;
- (void)setStartTimezone:(id)arg1;
- (id)startDateComponents;
- (id)startTimezone;

@end
