
@interface _NSAutoCalendar : NSCalendar

+ (bool)supportsSecureCoding;

- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCalendarIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
