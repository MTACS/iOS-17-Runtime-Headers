
@interface WFEKCalendarDescriptor : NSObject <NSCopying, NSSecureCoding> {
    bool  _allCalendars;
    NSString * _calendarIdentifier;
    NSNumber * _calendarRGBAValue;
    NSString * _calendarTitle;
}

@property (nonatomic, readonly) bool allCalendars;
@property (nonatomic, readonly, copy) NSString *calendarIdentifier;
@property (nonatomic, readonly) NSNumber *calendarRGBAValue;
@property (nonatomic, readonly, copy) NSString *calendarTitle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allCalendars;
- (id)calendarIdentifier;
- (id)calendarRGBAValue;
- (id)calendarTitle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAllCalendars;
- (id)initWithCalendarTitle:(id)arg1 identifier:(id)arg2 RGBAValue:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)matchingCalendarsFromArray:(id)arg1;
- (id)matchingRemindersListsFromArray:(id)arg1;

@end
