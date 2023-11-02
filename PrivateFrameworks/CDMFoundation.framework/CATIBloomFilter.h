
@interface CATIBloomFilter : NSObject {
    unsigned long long  _expectedNumberOfItems;
    double  _falsePositiveRate;
    unsigned long long  _numberHashes;
    unsigned long long  _numberOfBits;
    unsigned int  _seed;
    CATIBitVector * bitVector;
}

@property (readonly) unsigned long long expectedNumberOfItems;
@property (readonly) double falsePositiveRate;
@property (readonly) unsigned int seed;

- (void).cxx_destruct;
- (void)add:(id)arg1;
- (bool)contains:(id)arg1;
- (unsigned long long)expectedNumberOfItems;
- (double)falsePositiveRate;
- (id)initWithExceptedNumberOfItems:(unsigned long long)arg1 falsePositiveRate:(double)arg2 seed:(unsigned int)arg3;
- (unsigned int)seed;

@end
