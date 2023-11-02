
@interface WFHKGroupingIndexPathTransformer : NSValueTransformer {
    NSCalendar * _conversionCalendar;
    long long  _groupingOption;
}

@property (nonatomic, retain) NSCalendar *conversionCalendar;
@property (nonatomic) long long groupingOption;

+ (bool)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (void).cxx_destruct;
- (id)conversionCalendar;
- (long long)groupingOption;
- (id)init;
- (id)initWithGroupingOption:(long long)arg1;
- (id)reverseTransformedValue:(id)arg1;
- (void)setConversionCalendar:(id)arg1;
- (void)setGroupingOption:(long long)arg1;
- (id)transformedValue:(id)arg1;

@end
