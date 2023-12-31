
@interface SCRCWebDateTimeParser : NSObject {
    NSMutableDictionary * _dateFormats;
    NSMutableDictionary * _expressions;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_cachedDateFormatterForFormat:(id)arg1;
- (id)_expressionForRule:(id)arg1;
- (id)_handleDatesAndTimes:(id)arg1;
- (id)_handleDuration:(id)arg1;
- (id)_handleTimes:(id)arg1;
- (id)init;
- (id)spokenStringForDateTimeAttribute:(id)arg1;

@end
