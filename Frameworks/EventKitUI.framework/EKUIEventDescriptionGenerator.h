
@interface EKUIEventDescriptionGenerator : NSObject {
    struct __CFDateFormatter { } * _dateFormatter;
}

+ (id)eventDescriptionForDrag:(id)arg1;

- (long long)_adjustedMinutesTillEventStarts:(id)arg1;
- (id)_attendeesForEvent:(id)arg1 sorted:(bool)arg2 limitedTo:(long long)arg3;
- (struct __CFDateFormatter { }*)_sharedDateFormatter;
- (bool)_startTimeRequiresSingularForEvent:(id)arg1 withTimeString:(id)arg2;
- (void)dealloc;
- (id)naturalLanguageDescriptionForAttendees:(id)arg1;
- (id)timeStringForEvent:(id)arg1 forBeginningOfSentence:(bool)arg2 useExplicitTimes:(bool)arg3 followingComma:(bool)arg4;

@end
