
@interface NSISO8601DateFormatter : NSFormatter <NSSecureCoding> {
    unsigned long long  _formatOptions;
    struct __CFDateFormatter { } * _formatter;
    NSTimeZone * _timeZone;
}

@property unsigned long long formatOptions;
@property (copy) NSTimeZone *timeZone;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)stringFromDate:(id)arg1 timeZone:(id)arg2 formatOptions:(unsigned long long)arg3;
+ (bool)supportsSecureCoding;

- (id)dateFromString:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)formatOptions;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 range:(inout struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 error:(out id*)arg4;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setFormatOptions:(unsigned long long)arg1;
- (void)setTimeZone:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromDate:(id)arg1;
- (id)timeZone;
- (void)updateFormatter;

// Image: /System/Library/PrivateFrameworks/APFoundation.framework/APFoundation

+ (id)apDefaultSharedFormatter;
+ (id)apLocalSharedFormatter;
+ (id)apUTCSharedFormatter;

// Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit

+ (id)rem_formatterWithTimeZone:(id)arg1;

- (id)rem_dateComponentsFromString:(id)arg1;
- (id)rem_stringFromDateComponents:(id)arg1;

@end
