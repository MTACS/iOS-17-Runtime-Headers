
@interface DBDateFormatter : NSObject

+ (id)_dateFormatterFromToken:(id)arg1;
+ (id)_dateIntervalFormatterFromToken:(id)arg1;
+ (id)_formatDate:(id)arg1 withToken:(id)arg2;
+ (id)_formatIntervalFromDate:(id)arg1 toDate:(id)arg2 withToken:(id)arg3;
+ (id)dateFormatterForToken:(id)arg1;
+ (id)dateFormatters;
+ (id)dateIntervalFormatterForToken:(id)arg1;
+ (id)dateIntervalFormatters;
+ (id)formattedDate:(id)arg1;
+ (id)formattedDateTimeStamp:(id)arg1;
+ (id)formattedNow;
+ (id)formattedRange:(id)arg1;
+ (id)formattedRangeDateTimeStampStart:(id)arg1 end:(id)arg2;
+ (id)formattedRangeDateTimestamp:(id)arg1;
+ (id)formattedRangeStart:(id)arg1 end:(id)arg2;
+ (id)formattedRangeTimestamp:(id)arg1;
+ (id)formattedRangeTimestampStart:(id)arg1 end:(id)arg2;
+ (id)formattedTime:(id)arg1;
+ (id)formattedTimeStamp:(id)arg1;

@end
