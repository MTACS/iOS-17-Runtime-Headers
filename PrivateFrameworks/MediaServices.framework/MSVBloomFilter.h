
@interface MSVBloomFilter : NSObject <NSSecureCoding> {
    long long  _capacity;
    float  _falsePositiveTolerance;
    long long  _hashCount;
    unsigned long long  _murmurSeed;
    struct __CFBitVector { } * _vector;
    long long  _vectorCapacity;
}

@property (nonatomic, readonly) long long capacity;
@property (nonatomic, readonly) long long estimatedCount;
@property (nonatomic, readonly) float falsePositiveProbability;
@property (nonatomic, readonly) float falsePositiveTolerance;

+ (bool)supportsSecureCoding;

- (unsigned long long)_fnvHashObject:(id)arg1;
- (unsigned long long)_murmur2HashObject:(id)arg1;
- (id)_vectorIndexSetForObject:(id)arg1;
- (void)addObject:(id)arg1;
- (long long)capacity;
- (bool)containsObject:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)estimatedCount;
- (float)falsePositiveProbability;
- (float)falsePositiveTolerance;
- (id)initWithCapacity:(long long)arg1 falsePositiveTolerance:(float)arg2;
- (id)initWithCapacity:(long long)arg1 falsePositiveTolerance:(float)arg2 murmurSeed:(unsigned long long)arg3;
- (id)initWithCoder:(id)arg1;

@end
