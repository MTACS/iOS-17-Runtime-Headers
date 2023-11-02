
@interface DNDModeAssertionLifetime : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic, readonly) unsigned long long lifetimeType;

+ (id)_secureCodingLifetimeClasses;
+ (id)lifetimeForUserRequest;
+ (id)lifetimeMatchingScheduleWithIdentifier:(id)arg1;
+ (id)lifetimeUntilEndOfCalendarEventWithUniqueID:(id)arg1 occurrenceDate:(id)arg2;
+ (id)lifetimeUntilEndOfScheduleWithIdentifier:(id)arg1;
+ (id)lifetimeWithCalendarEventUniqueID:(id)arg1 occurrenceDate:(id)arg2;
+ (id)lifetimeWithCurrentLocation;
+ (id)lifetimeWithDateInterval:(id)arg1;
+ (id)lifetimeWithDuration:(double)arg1;
+ (id)lifetimeWithExplicitRegion:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)_init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)lifetimeType;

@end
