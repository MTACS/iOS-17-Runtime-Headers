
@interface _DPPiRapporAlgorithm : NSObject {
    double  _alpha0;
    double  _alpha1;
    _DPBiasedCoin * _coin;
    unsigned long long  _numberOfClasses;
    unsigned long long  _numberOfOtherPhi;
    unsigned int  _prime;
    unsigned int  _threshold;
}

@property (nonatomic, readonly) double alpha0;
@property (nonatomic, readonly) double alpha1;
@property (nonatomic, readonly) _DPBiasedCoin *coin;
@property (nonatomic, readonly) unsigned long long numberOfClasses;
@property (nonatomic, readonly) unsigned long long numberOfOtherPhi;
@property (nonatomic, readonly) unsigned int prime;
@property (nonatomic, readonly) unsigned int threshold;

+ (id)piRapporWithNumberOfClasses:(unsigned long long)arg1 prime:(unsigned int)arg2 alpha0:(double)arg3 alpha1:(double)arg4;

- (void).cxx_destruct;
- (double)alpha0;
- (double)alpha1;
- (id)coin;
- (id)decode:(id)arg1;
- (id)encodeClassIndex:(unsigned long long)arg1;
- (bool)encodeClassIndex:(unsigned long long)arg1 coeffs:(unsigned int*)arg2 phi0Buf:(unsigned int*)arg3 otherPhiBuf:(unsigned int*)arg4;
- (id)encodeClassIndices:(id)arg1;
- (id)init;
- (id)initWithNumberOfClasses:(unsigned long long)arg1 prime:(unsigned int)arg2 alpha0:(double)arg3 alpha1:(double)arg4;
- (unsigned long long)numberOfClasses;
- (unsigned long long)numberOfOtherPhi;
- (unsigned int)prime;
- (unsigned int)threshold;

@end
