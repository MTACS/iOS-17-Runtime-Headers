
@interface _DPOBHRandomizer : NSObject <_DPStringRandomizer> {
    _DPRandomBitPositionGenerator * _bitPositionGenerator;
    double  _cEpsilon;
    double  _epsilon;
    _DPBiasedCoin * _epsilonCoin;
    unsigned long long  _m;
}

@property (nonatomic, readonly) _DPRandomBitPositionGenerator *bitPositionGenerator;
@property (nonatomic, readonly) double cEpsilon;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double epsilon;
@property (nonatomic, readonly) _DPBiasedCoin *epsilonCoin;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long m;
@property (readonly) Class superclass;

+ (id)obhRandomizerWithDimensionality:(unsigned long long)arg1 epsilon:(double)arg2;

- (void).cxx_destruct;
- (id)bitPositionGenerator;
- (double)cEpsilon;
- (id)description;
- (double)epsilon;
- (id)epsilonCoin;
- (bool)getBitValueAtIndex:(unsigned long long)arg1 forString:(id)arg2;
- (id)init;
- (id)initWithDimensionality:(unsigned long long)arg1 epsilon:(double)arg2;
- (unsigned long long)m;
- (id)randomizeBitValues:(id)arg1 forKey:(id)arg2;
- (id)randomizeStrings:(id)arg1 forKey:(id)arg2;
- (id)randomizeWords:(id)arg1 fragmentWidth:(unsigned long long)arg2 forKey:(id)arg3;
- (id)randomizedBitForString:(id)arg1;

@end
