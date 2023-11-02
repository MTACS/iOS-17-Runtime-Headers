
@interface _DPBSFPWithOHE : NSObject {
    double  _epsilon;
    unsigned long long  _hashSeed;
    unsigned long long  _hashSeedInVerification;
    unsigned long long  _maxRecordBitLength;
    unsigned long long  _numOfSegments;
    double  _probabilityOfVerification;
    unsigned long long  _segmentBitLength;
    unsigned long long  _signatureBitLength;
    unsigned long long  _signatureBitLengthInVerification;
}

- (id)encode:(id)arg1 isVerificationMode:(bool)arg2 segmentIndex:(unsigned long long)arg3;
- (id)init;
- (id)initWithEpsilon:(double)arg1 maxRecordBitLength:(unsigned long long)arg2 segmentBitLength:(unsigned long long)arg3 probabilityOfVerification:(double)arg4 hashSeed:(unsigned long long)arg5 hashSeedInVerification:(unsigned long long)arg6 signatureBitLength:(unsigned long long)arg7 signatureBitLengthInVerification:(unsigned long long)arg8;
- (id)privatize:(id)arg1;
- (id)privatizeWithOHE:(id)arg1 isVerificationMode:(bool)arg2;

@end
