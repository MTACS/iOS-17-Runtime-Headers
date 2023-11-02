
@interface SPRPINData : NSObject <NSSecureCoding> {
    NSData * _casd;
    bool  _isPinBypass;
    NSData * _pinAppletAttestationData;
    NSData * _pinBlock;
    NSData * _pinKEKHash;
}

@property (nonatomic, readonly, copy) NSData *casd;
@property (nonatomic, readonly) bool isPinBypass;
@property (nonatomic, readonly, copy) NSData *pinAppletAttestationData;
@property (nonatomic, readonly, copy) NSData *pinBlock;
@property (nonatomic, readonly, copy) NSData *pinKEKHash;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)casd;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPinBlock:(id)arg1 casd:(id)arg2 pinAppletAttestationData:(id)arg3 pinKEKHash:(id)arg4;
- (id)initWithPinBlock:(id)arg1 casd:(id)arg2 pinAppletAttestationData:(id)arg3 pinKEKHash:(id)arg4 isPinBypass:(bool)arg5;
- (bool)isPinBypass;
- (id)pinAppletAttestationData;
- (id)pinBlock;
- (id)pinKEKHash;

@end
