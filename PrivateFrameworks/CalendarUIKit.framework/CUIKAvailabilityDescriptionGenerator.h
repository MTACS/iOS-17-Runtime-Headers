
@interface CUIKAvailabilityDescriptionGenerator : NSObject

+ (id)allInviteesCanAttendString;
+ (id)attendeeProposedANewTime:(id)arg1 attendeeName:(id)arg2;
+ (id)failedString;
+ (id)proposeANewTimePlaceholderString;
+ (id)showMoreString;
+ (id)someInviteesCanAttendString;
+ (id)timeRangeStringWithStartDate:(id)arg1 withEndDate:(id)arg2;
+ (id)waitingForAvailabilityQueryString;
+ (id)weekdayMonthDayString:(id)arg1;
+ (id)youProposedString;

@end
