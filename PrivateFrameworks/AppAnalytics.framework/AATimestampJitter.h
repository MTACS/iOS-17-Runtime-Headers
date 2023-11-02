
@interface AATimestampJitter : NSObject {
    void enabled;
    void lowerBound;
    void upperBound;
}

@property (nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) double lowerBound;
@property (nonatomic, readonly) double upperBound;

+ (id)default;

- (void).cxx_destruct;
- (bool)enabled;
- (id)init;
- (double)lowerBound;
- (double)upperBound;
- (id)withEnabled:(bool)arg1;
- (id)withLowerBound:(double)arg1;
- (id)withUpperBound:(double)arg1;

@end
