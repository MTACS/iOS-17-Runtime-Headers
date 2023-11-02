
@interface _DPPiRapporEncoderResult : NSObject {
    unsigned long long  _numberOfEncodedIndices;
    unsigned long long  _numberOfOtherPhi;
    NSData * _otherPhi;
    NSData * _phi0;
}

@property (nonatomic, readonly) unsigned long long numberOfEncodedIndices;
@property (nonatomic, readonly) unsigned long long numberOfOtherPhi;
@property (nonatomic, readonly) NSData *otherPhi;
@property (nonatomic, readonly) NSData *phi0;

+ (id)encoderResultWithPhi0:(id)arg1 otherPhi:(id)arg2;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPhi0:(id)arg1 otherPhi:(id)arg2;
- (unsigned long long)numberOfEncodedIndices;
- (unsigned long long)numberOfOtherPhi;
- (id)otherPhi;
- (id)phi0;

@end
