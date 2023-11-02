
@interface _DPBitValueRandomizer : NSObject <_DPStringRandomizer> {
    double  _epsilon;
    _DPBiasedCoin * _epsilonCoin;
    unsigned long long  _p;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double epsilon;
@property (nonatomic, readonly) _DPBiasedCoin *epsilonCoin;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long p;
@property (readonly) Class superclass;

+ (id)bitValueRandomizerWithDimensionality:(unsigned long long)arg1 epsilon:(double)arg2;

- (void).cxx_destruct;
- (id)description;
- (double)epsilon;
- (id)epsilonCoin;
- (id)init;
- (id)initWithDimensionality:(unsigned long long)arg1 epsilon:(double)arg2;
- (unsigned long long)p;
- (id)randomize:(id)arg1;
- (id)randomizeBitValues:(id)arg1 forKey:(id)arg2;
- (id)randomizeStrings:(id)arg1 forKey:(id)arg2;
- (id)randomizeWords:(id)arg1 fragmentWidth:(unsigned long long)arg2 forKey:(id)arg3;

@end
