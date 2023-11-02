
@interface MTROperationalCredentialsClusterCSRResponseParams : NSObject <NSCopying> {
    NSData * _attestationSignature;
    NSData * _nocsrElements;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSData *attestationSignature;
@property (nonatomic, copy) NSData *nocsrElements;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_setFieldsFromDecodableStruct:(const void*)arg1;
- (id)attestationSignature;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithResponseValue:(id)arg1 error:(id*)arg2;
- (id)nocsrElements;
- (void)setAttestationSignature:(id)arg1;
- (void)setNocsrElements:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end
