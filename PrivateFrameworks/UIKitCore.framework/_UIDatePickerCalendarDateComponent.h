
@interface _UIDatePickerCalendarDateComponent : NSObject <NSCopying> {
    NSDateComponents * _components;
    NSDate * _date;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic, readonly) NSDateComponents *components;
@property (nonatomic, readonly) NSDate *date;

+ (id)inlineDescriptionForComponents:(id)arg1;
+ (unsigned long long)representedCalendarUnits;

- (void).cxx_destruct;
- (id)calendar;
- (id)components;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (unsigned long long)hash;
- (id)initWithDate:(id)arg1 calendar:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
