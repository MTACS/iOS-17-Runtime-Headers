
@interface CAMAnalyticsEvent : NSObject {
    NSMutableDictionary * __eventMap;
    NSString * _uuid;
}

@property (nonatomic, readonly) NSMutableDictionary *_eventMap;
@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) NSString *uuid;

+ (id)bucketedGigabytesStringForBytes:(long long)arg1;
+ (id)bucketedGigabytesStringForBytes:(long long)arg1 allowZero:(bool)arg2 minPositiveValue:(double)arg3 maxValue:(double)arg4;
+ (double)bucketedPowerOf2ForValue:(double)arg1 allowZero:(bool)arg2 minPositiveValue:(double)arg3 maxValue:(double)arg4;
+ (id)durationRangeStringForDuration:(double)arg1;
+ (double)gigabytesForBytes:(long long)arg1;

- (void).cxx_destruct;
- (id)_eventMap;
- (id)eventName;
- (id)init;
- (id)initWithEvent:(id)arg1;
- (void)publish;
- (id)uuid;

@end
