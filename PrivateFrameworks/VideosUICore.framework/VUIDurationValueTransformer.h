
@interface VUIDurationValueTransformer : NSValueTransformer {
    NSDateComponentsFormatter * _hoursMinutesFormatter;
    NSDateComponentsFormatter * _secondsFormatter;
}

@property (nonatomic, retain) NSDateComponentsFormatter *hoursMinutesFormatter;
@property (nonatomic, retain) NSDateComponentsFormatter *secondsFormatter;

+ (bool)allowsReverseTransformation;
+ (void)initialize;
+ (Class)transformedValueClass;

- (void).cxx_destruct;
- (id)hoursMinutesFormatter;
- (id)init;
- (id)secondsFormatter;
- (void)setHoursMinutesFormatter:(id)arg1;
- (void)setSecondsFormatter:(id)arg1;
- (id)transformedValue:(id)arg1;

@end
