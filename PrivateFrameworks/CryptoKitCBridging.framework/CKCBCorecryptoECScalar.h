
@interface CKCBCorecryptoECScalar : NSObject {
    const unsigned long long * _corecryptoScalar;
    struct ccec_cp { unsigned long long x1; unsigned long long x2; struct cczp_funcs {} *x3; unsigned long long x4[0]; } * _group;
}

@property (nonatomic, readonly) const unsigned long long*corecryptoScalar;
@property (nonatomic, readonly) struct ccec_cp { unsigned long long x1; unsigned long long x2; struct cczp_funcs {} *x3; unsigned long long x4[0]; }*group;

- (id)add:(id)arg1 corecryptoError:(int*)arg2;
- (const unsigned long long*)corecryptoScalar;
- (void)dealloc;
- (struct ccec_cp { unsigned long long x1; unsigned long long x2; struct cczp_funcs {} *x3; unsigned long long x4[0]; }*)group;
- (id)initWithData:(id)arg1 inGroup:(struct ccec_cp { unsigned long long x1; unsigned long long x2; struct cczp_funcs {} *x3; unsigned long long x4[0]; }*)arg2 reduction:(bool)arg3 corecryptoError:(int*)arg4;
- (id)initWithRandomScalarInGroup:(struct ccec_cp { unsigned long long x1; unsigned long long x2; struct cczp_funcs {} *x3; unsigned long long x4[0]; }*)arg1;
- (id)initWithScalarPointer:(unsigned long long*)arg1 forGroup:(struct ccec_cp { unsigned long long x1; unsigned long long x2; struct cczp_funcs {} *x3; unsigned long long x4[0]; }*)arg2;
- (id)initWithx963Representation:(id)arg1 group:(struct ccec_cp { unsigned long long x1; unsigned long long x2; struct cczp_funcs {} *x3; unsigned long long x4[0]; }*)arg2;
- (id)inverseModOrder;
- (bool)isEqual:(id)arg1;
- (id)mapToCurve_SSWU_RandomOracle;
- (id)multiply:(id)arg1 corecryptoError:(int*)arg2;
- (unsigned long long)scalarAllocationSizeForGroup:(struct ccec_cp { unsigned long long x1; unsigned long long x2; struct cczp_funcs {} *x3; unsigned long long x4[0]; }*)arg1;
- (id)serializedBigEndianScalar;
- (id)sub:(id)arg1 corecryptoError:(int*)arg2;
- (id)x963Representation;

@end
