
@interface CUIKNotificationDescriptionGenerator : CUIKDescriptionGenerator {
    NSDateFormatter * _dateFormatter;
    NSDateFormatter * _dateTimeFormatter;
    NSNumberFormatter * _numberFormatter;
    NSDateFormatter * _timeFormatter;
}

+ (id)_autoCommentForProposedTime:(id)arg1 timeZone:(id)arg2;
+ (id)comment:(id)arg1 withInsertedAutoCommentForDate:(id)arg2 timeZone:(id)arg3;
+ (id)sharedGenerator;
+ (id)stringWithAutoCommentRemoved:(id)arg1;
+ (id)stringWithOnlyAutoComment:(id)arg1;
+ (id)timeSensitiveString;

- (void).cxx_destruct;
- (id)_adjustedTitle:(id)arg1 maxLength:(unsigned long long)arg2;
- (id)_sharedDateFormatter;
- (id)_sharedDateTimeFormatter;
- (id)_sharedNumberFormatter;
- (id)_sharedTimeFormatter;
- (id)conflictStringForConflictDetails:(id)arg1 descriptions:(id)arg2;
- (id)conflictStringForConflictDetails:(id)arg1 maxTitleLength:(unsigned long long)arg2;
- (id)conflictStringForConflictDetails:(id)arg1 maxTitleLength:(unsigned long long)arg2 descriptions:(id)arg3;
- (id)timePeriodForTimeInterval:(id)arg1;

@end
