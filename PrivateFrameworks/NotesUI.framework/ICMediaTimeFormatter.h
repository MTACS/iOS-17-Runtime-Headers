
@interface ICMediaTimeFormatter : NSDateComponentsFormatter

+ (id)timecodeFormatter;
+ (id)wordyFormatter;

- (id)stringForObjectValue:(id)arg1;
- (id)stringFromTimeInterval:(double)arg1;

@end
