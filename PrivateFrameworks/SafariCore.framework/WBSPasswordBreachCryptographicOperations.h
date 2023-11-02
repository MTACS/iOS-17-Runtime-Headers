
@interface WBSPasswordBreachCryptographicOperations : NSObject {
    struct cc_blinding_keys_ctx { unsigned long long x1; struct _CCECCryptor {} *x2; struct _CCECCryptor {} *x3; } * _blindingKeys;
    WBSPasswordBreachConfiguration * _configuration;
}

+ (bool)isValidScryptHashWorkFactor:(unsigned long long)arg1 blockSizeR:(unsigned long long)arg2 parallelismFactorP:(unsigned long long)arg3;

- (void).cxx_destruct;
- (id)_blindPasswordHash:(id)arg1;
- (id)_bucketIdentifierWithBitCount:(unsigned long long)arg1 ofData:(id)arg2;
- (id)_encodePasswordForLowFrequencyBucket:(id)arg1 withHashSmoothingBits:(unsigned char)arg2;
- (id)_exportHashToCurve:(id)arg1;
- (id)_exportKeyFromCryptor:(struct _CCECCryptor { }*)arg1;
- (struct _CCECCryptor { }*)_hashToCurve:(id)arg1;
- (void)dealloc;
- (id)encodePasswordForHighFrequencyBucket:(id)arg1;
- (id)encodePasswordForLowFrequencyBucket:(id)arg1;
- (id)generateFakeEncodedPasswordForHighFrequencyBucket;
- (id)generateFakeEncodedPasswordForLowFrequencyBucket;
- (id)initWithConfiguration:(id)arg1;
- (id)unblindHash:(id)arg1;

@end
