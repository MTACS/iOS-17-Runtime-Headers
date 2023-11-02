
@interface _DPNumberRandomizer : NSObject <_DPStringRandomizer> {
    double  _epsilon;
    _DPLaplaceNoiseGenerator * _generator;
    unsigned long long  _range;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double epsilon;
@property (nonatomic, readonly) _DPLaplaceNoiseGenerator *generator;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long range;
@property (readonly) Class superclass;

+ (id)numberRandomizerWithRange:(unsigned long long)arg1 epsilon:(double)arg2;

- (void).cxx_destruct;
- (id)description;
- (double)epsilon;
- (id)generator;
- (id)init;
- (id)initWithRange:(unsigned long long)arg1 epsilon:(double)arg2;
- (id)randomize:(id)arg1;
- (id)randomizeBitValues:(id)arg1 forKey:(id)arg2;
- (id)randomizeNumbers:(id)arg1 forKey:(id)arg2;
- (id)randomizeStrings:(id)arg1 forKey:(id)arg2;
- (id)randomizeWords:(id)arg1 fragmentWidth:(unsigned long long)arg2 forKey:(id)arg3;
- (unsigned long long)range;

@end
