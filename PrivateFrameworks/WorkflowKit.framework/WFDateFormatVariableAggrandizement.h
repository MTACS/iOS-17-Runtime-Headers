
@interface WFDateFormatVariableAggrandizement : WFVariableAggrandizement

@property (nonatomic, readonly) NSString *customDateFormat;
@property (nonatomic, readonly) NSString *dateStyle;
@property (nonatomic, readonly) bool includesTimeForISO8601;
@property (nonatomic, readonly) NSString *relativeDateStyle;
@property (nonatomic, readonly) NSString *timeStyle;

+ (id)defaultAggrandizement;

- (void)applyToContentCollection:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)customDateFormat;
- (id)dateStyle;
- (bool)includesTimeForISO8601;
- (id)initWithCustomDateFormat:(id)arg1;
- (id)initWithDateStyle:(id)arg1 timeStyle:(id)arg2 relativeDateStyle:(id)arg3;
- (id)initWithDateStyle:(id)arg1 timeStyle:(id)arg2 relativeDateStyle:(id)arg3 customDateFormat:(id)arg4 includesTimeForISO8601:(bool)arg5;
- (id)initWithISO8601DateStyleAndTime:(bool)arg1;
- (id)initWithRFC2822DateStyle;
- (id)initWithRelativeDateStyle:(id)arg1 timeStyle:(id)arg2;
- (id)initWithRelativeTimeStyle;
- (id)processedContentClasses:(id)arg1;
- (id)relativeDateStyle;
- (id)timeStyle;

@end
