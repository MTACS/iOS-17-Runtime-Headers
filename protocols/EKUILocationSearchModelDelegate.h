
@protocol EKUILocationSearchModelDelegate

@required

- (EKCalendarItem *)calendarItemForSearchModel:(EKUILocationSearchModel *)arg1;
- (void)locationSearchModel:(EKUILocationSearchModel *)arg1 selectedLocation:(EKStructuredLocation *)arg2 withError:(NSError *)arg3;
- (void)locationSearchModel:(EKUILocationSearchModel *)arg1 updatedSearchTypes:(unsigned long long)arg2;
- (bool)shouldIncludeConferenceRoom:(EKUIConferenceRoom *)arg1;

@end
