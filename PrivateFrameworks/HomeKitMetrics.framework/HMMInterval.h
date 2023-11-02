
@interface HMMInterval : NSObject {
    NSNumber * _end;
    NSNumber * _start;
}

@property (readonly) NSString *allNumbersIntervalString;
@property (readonly) NSNumber *end;
@property (readonly) NSString *negativeInfinityIntervalString;
@property (readonly) NSString *positiveInfinityIntervalString;
@property (readonly) NSString *standardIntervalString;
@property (readonly) NSNumber *start;

+ (id)closedClosedIntervalFromStart:(id)arg1 toEnd:(id)arg2;
+ (id)closedOpenIntervalFromStart:(id)arg1 toEnd:(id)arg2;
+ (void)initialize;
+ (id)intervalForSingleValue:(id)arg1;
+ (id)negativeInfinityStart;
+ (id)openClosedIntervalFromStart:(id)arg1 toEnd:(id)arg2;
+ (id)openOpenIntervalFromStart:(id)arg1 toEnd:(id)arg2;
+ (id)positiveInfinityEnd;

- (void).cxx_destruct;
- (id)allNumbersIntervalString;
- (id)description;
- (id)end;
- (id)initFromStart:(id)arg1 toEnd:(id)arg2;
- (id)labelString;
- (id)negativeInfinityIntervalString;
- (id)positiveInfinityIntervalString;
- (id)standardIntervalString;
- (id)start;

@end
