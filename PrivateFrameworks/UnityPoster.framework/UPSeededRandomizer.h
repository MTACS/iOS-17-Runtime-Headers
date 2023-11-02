
@interface UPSeededRandomizer : NSObject {
    unsigned long long  _nextValue;
    unsigned long long  _seedValue;
}

+ (id)randomizerWithSeedValue:(unsigned long long)arg1;

- (bool)boolValue;
- (bool)boolValueWithChance:(double)arg1;
- (double)floatValueBetweenFirstValue:(double)arg1 secondValue:(double)arg2;
- (double)fractionValue;
- (struct CGPoint { double x1; double x2; })pointBetweenFirstPoint:(struct CGPoint { double x1; double x2; })arg1 secondPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)reset;
- (unsigned long long)unsignedLongValue;

@end
