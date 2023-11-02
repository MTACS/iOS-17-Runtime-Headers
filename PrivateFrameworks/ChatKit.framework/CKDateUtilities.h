
@interface CKDateUtilities : NSObject

+ (id)relativeDateFormatterFromDate:(id)arg1 toDate:(id)arg2;
+ (id)relativeDateOnlyFormatterFromDate:(id)arg1 toDate:(id)arg2;
+ (id)relativeFullDateOnlyFormatterFromDate:(id)arg1 toDate:(id)arg2;
+ (id)thePastDateFormatter;
+ (id)thePastDateFormatterNoTime;
+ (id)thePastFullDateFormatterNoTime;
+ (id)theRelativeStandaloneDateFormatter;
+ (id)theShortDateNoTimeInSentenceDateFormatter;
+ (id)thisWeekRelativeDateFormatter;
+ (id)thisWeekRelativeDateFormatterNoTime;
+ (id)thisYearDateFormatter;
+ (id)thisYearDateFormatterNoTime;
+ (id)thisYearFullDateFormatterNoTime;
+ (id)timestampDateFormatter;

@end
