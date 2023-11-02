
@interface _DPStringRandomizer : NSObject {
    unsigned long long  _algorithm;
    <_DPStringRandomizer> * _randomizer;
}

@property (nonatomic, readonly) unsigned long long algorithm;
@property (nonatomic, readonly) <_DPStringRandomizer> *randomizer;

+ (id)numbersRandomizerWithEpsilon:(double)arg1 privatizationAlgorithm:(unsigned long long)arg2 dataAlgorithm:(unsigned long long)arg3 range:(unsigned long long)arg4;
+ (id)stringRandomizerWithEpsilon:(double)arg1 privatizationAlgorithm:(unsigned long long)arg2 dataAlgorithm:(unsigned long long)arg3 algorithmParameters:(id)arg4;
+ (id)stringRandomizerWithEpsilon:(double)arg1 privatizationAlgorithm:(unsigned long long)arg2 dataAlgorithm:(unsigned long long)arg3 algorithmParameters:(id)arg4 huffmanTableClass:(id)arg5;

- (void).cxx_destruct;
- (unsigned long long)algorithm;
- (id)description;
- (id)init;
- (id)initWithEpsilon:(double)arg1 privatizationAlgorithm:(unsigned long long)arg2 dataAlgorithm:(unsigned long long)arg3 algorithmParameters:(id)arg4 huffmanTableClass:(id)arg5;
- (id)initWithEpsilon:(double)arg1 privatizationAlgorithm:(unsigned long long)arg2 dataAlgorithm:(unsigned long long)arg3 range:(unsigned long long)arg4;
- (id)randomizer;

@end
