
@interface PPSMetricType : NSObject {
    int  _category;
    unsigned long long  _value;
}

@property (readonly) int category;
@property (readonly) unsigned long long value;

+ (id)absoluteMeasure;
+ (id)accumulatedNegativeMeasure;
+ (id)accumulatedPositiveMeasure;
+ (id)deltaMeasure;
+ (id)genericDimension;
+ (bool)isValidMetricType:(int)arg1 value:(unsigned long long)arg2;
+ (bool)isValidMetricTypeJSON:(id)arg1;
+ (id)metricTypeWithJSONObject:(id)arg1;
+ (id)metricTypeWithProto:(id)arg1;
+ (id)stateDimension;

- (int)category;
- (id)initWithCategory:(int)arg1 value:(unsigned long long)arg2;
- (id)json;
- (id)proto;
- (unsigned long long)value;

@end
