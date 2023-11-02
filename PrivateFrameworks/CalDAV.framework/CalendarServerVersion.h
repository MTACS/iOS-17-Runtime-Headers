
@interface CalendarServerVersion : CalDAVConcreteServerVersion

- (id)init;
- (bool)supportsTimeRangeFilterWithoutEndDate;
- (id)type;

@end
