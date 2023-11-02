
@interface RCDurationFormatter : NSObject {
    NSNumberFormatter * _defaultFormatter;
    NSNumberFormatter * _nonPaddedHourFormatter;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _styleToLocalizedDateTimeFormatTemplate;
}

+ (id)_dateTimeFormatTemplateForStyle:(long long)arg1;
+ (id)_localizedDateTimeFormatTemplateForStyle:(long long)arg1;
+ (id)sharedFormatter;

- (void).cxx_destruct;
- (void)_onQueueReloadLocalizedFormatStrings;
- (id)_onQueueStringFromDuration:(double)arg1 byReplacingDigitsWithDigit:(long long)arg2 hideComponentOptions:(long long)arg3 style:(long long)arg4;
- (void)_replaceComponentPlaceholderForType:(unsigned long long)arg1 withString:(id)arg2 inLocalizedDataFormatTemplate:(id)arg3;
- (struct RCDurationIntegers { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })durationIntegersFromDuration:(double)arg1 byReplacingDigitsWithDigit:(long long)arg2 style:(long long)arg3;
- (struct RCDurationStrings { id x1; id x2; id x3; id x4; })durationStringsFromDurationIntegers:(struct RCDurationIntegers { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 hideComponentOptions:(long long)arg2 style:(long long)arg3;
- (id)init;
- (id)localizedStringFromDurationStrings:(struct RCDurationStrings { id x1; id x2; id x3; id x4; })arg1 style:(long long)arg2;
- (void)reloadLocalizedFormatStrings;
- (id)stringFromDuration:(double)arg1 hideComponentOptions:(long long)arg2 style:(long long)arg3;
- (id)stringFromDuration:(double)arg1 replacingDigitsWithDigit:(unsigned long long)arg2 style:(long long)arg3;

@end
