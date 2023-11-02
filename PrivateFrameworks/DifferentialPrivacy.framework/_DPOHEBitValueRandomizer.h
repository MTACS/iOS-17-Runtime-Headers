
@interface _DPOHEBitValueRandomizer : NSObject <_DPStringRandomizer> {
    unsigned long long  _domainSize;
    double  _epsilon;
    double  _flipProbability;
    struct mersenne_twister_engine<unsigned int, 32UL, 624UL, 397UL, 31UL, 2567483615U, 11UL, 4294967295U, 7UL, 2636928640U, 15UL, 4022730752U, 18UL, 1812433253U> { 
        unsigned int __x_[624]; 
        unsigned long long __i_; 
    }  _rng;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)oheBitValueRandomizerWithDimensionality:(unsigned long long)arg1 epsilon:(double)arg2;

- (id).cxx_construct;
- (id)description;
- (unsigned long long)drawNumberOfFlippedBits;
- (id)init;
- (id)initWithDimensionality:(unsigned long long)arg1 epsilon:(double)arg2;
- (id)randomize:(id)arg1;
- (id)randomizeBitValues:(id)arg1 forKey:(id)arg2;
- (id)randomizeStrings:(id)arg1 forKey:(id)arg2;
- (id)randomizeWithMessageIndex:(unsigned long long)arg1 numberOfFlippedBits:(unsigned long long)arg2;
- (id)randomizeWords:(id)arg1 fragmentWidth:(unsigned long long)arg2 forKey:(id)arg3;

@end
