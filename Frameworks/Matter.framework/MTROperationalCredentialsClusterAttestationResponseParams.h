
@interface MTROperationalCredentialsClusterAttestationResponseParams : NSObject <NSCopying> {
    NSData * _attestationElements;
    NSData * _attestationSignature;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSData *attestationElements;
@property (nonatomic, copy) NSData *attestationSignature;
@property (nonatomic, copy) NSData *signature;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_setFieldsFromDecodableStruct:(const void*)arg1;
- (id)attestationElements;
- (id)attestationSignature;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithResponseValue:(id)arg1 error:(id*)arg2;
- (void)setAttestationElements:(id)arg1;
- (void)setAttestationSignature:(id)arg1;
- (void)setSignature:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)signature;
- (id)timedInvokeTimeoutMs;

@end
