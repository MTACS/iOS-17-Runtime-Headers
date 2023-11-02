
@interface EKStringFactory : NSObject {
    struct __CFDateFormatter { } * _customFormatter;
    struct __CFDateFormatter { } * _standardTimeFormatter;
}

+ (id)sharedInstance;

- (struct __CFDateFormatter { }*)_customFormatter;
- (id)_dateStringForEventInvitationWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(bool)arg4 withFormat:(unsigned long long)arg5 showTimeZone:(bool)arg6;
- (void)_invalidateFormatters;
- (void)_localeChanged:(id)arg1;
- (id)_stringForDateTime:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1 timeZone:(struct __CFTimeZone { }*)arg2;
- (id)_stringForTime:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1;
- (id)dateStringForDate:(double)arg1 allDay:(bool)arg2 shortFormat:(bool)arg3;
- (id)dateStringForDate:(double)arg1 allDay:(bool)arg2 standalone:(bool)arg3 shortFormat:(bool)arg4;
- (id)dateStringForEventInvitation:(id)arg1 timeZone:(id)arg2;
- (id)dateStringForEventInvitationWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(bool)arg4;
- (id)dateStringForSuggestedEventWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(bool)arg4 showTimeZone:(bool)arg5;
- (void)dealloc;
- (id)init;
- (struct __CFDateFormatter { }*)standardTimeFormatter;
- (id)timeStringForDate:(double)arg1 inTimeZone:(id)arg2;

@end
