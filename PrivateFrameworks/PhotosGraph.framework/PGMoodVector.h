
@interface PGMoodVector : NSObject <NSCopying> {
    double  _vector;
}

- (void)addMoodVector:(id)arg1;
- (void)addValue:(double)arg1 forMood:(unsigned long long)arg2;
- (void)addValue:(double)arg1 forMoods:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)enumerateWithBlock:(id /* block */)arg1;
- (void)filterWithMoods:(unsigned long long)arg1;
- (id)init;
- (id)initWithArray:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)moodArray;
- (unsigned long long)moodsWithThreshold:(double)arg1;
- (void)multiplyByWeight:(double)arg1;
- (void)multiplyByWeight:(double)arg1 forMood:(unsigned long long)arg2;
- (void)multiplyMoodVector:(id)arg1;
- (void)normalize;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (void)setValue:(double)arg1 forMood:(unsigned long long)arg2;
- (void)substractMoodVector:(id)arg1;
- (double)sum;
- (double)valueForMood:(unsigned long long)arg1;
- (unsigned long long)weightedRandomMoodWithSeed:(unsigned long long)arg1;

@end
