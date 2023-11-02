
@interface HMIDESPackageResult : HMFObject {
    bool  _didEncryptPackageResult;
    bool  _didPrivatizePackageResult;
    float  _l2Norm;
    double  _maxNorm;
    NSData * _result;
}

@property (readonly) bool didEncryptPackageResult;
@property (readonly) bool didPrivatizePackageResult;
@property (readonly) float l2Norm;
@property (readonly) double maxNorm;
@property (readonly) NSData *result;

- (void).cxx_destruct;
- (bool)didEncryptPackageResult;
- (bool)didPrivatizePackageResult;
- (id)initWithPackageResult:(id)arg1 didPrivatizePackageResult:(bool)arg2 didEncryptPackageResult:(bool)arg3 maxNorm:(double)arg4 l2Norm:(float)arg5;
- (float)l2Norm;
- (double)maxNorm;
- (id)result;

@end
