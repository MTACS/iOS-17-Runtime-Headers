
@interface PPCalendar : NSObject <NSCopying, NSSecureCoding> {
    NSString * _calendarIdentifier;
    struct CGColor { } * _color;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *calendarIdentifier;
@property (nonatomic, readonly) struct CGColor { }*color;
@property (nonatomic, readonly) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)calendarIdentifier;
- (struct CGColor { }*)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCalendarIdentifier:(id)arg1 title:(id)arg2 color:(struct CGColor { }*)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithEKCalendar:(id)arg1 internPool:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCalendar:(id)arg1;
- (id)title;

@end
