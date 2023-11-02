
@interface TPTypedSignedData : NSObject {
    NSData * _data;
    <TPPublicKey> * _lastSigValidationPubkey;
    bool  _lastSigValidationResult;
    NSData * _sig;
    NSString * _sigTypeName;
    NSObject<OS_dispatch_queue> * _sigValidationQueue;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, retain) <TPPublicKey> *lastSigValidationPubkey;
@property (nonatomic) bool lastSigValidationResult;
@property (nonatomic, readonly) NSData *sig;
@property (nonatomic, readonly) NSString *sigTypeName;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *sigValidationQueue;

- (void).cxx_destruct;
- (bool)checkSignatureWithKey:(id)arg1;
- (id)data;
- (id)initWithData:(id)arg1 key:(id)arg2 signatureTypeName:(id)arg3 error:(id*)arg4;
- (id)initWithData:(id)arg1 sig:(id)arg2 pubkey:(id)arg3 sigTypeName:(id)arg4;
- (id)initWithData:(id)arg1 sig:(id)arg2 signatureTypeName:(id)arg3;
- (id)lastSigValidationPubkey;
- (bool)lastSigValidationResult;
- (void)setLastSigValidationPubkey:(id)arg1;
- (void)setLastSigValidationResult:(bool)arg1;
- (id)sig;
- (id)sigTypeName;
- (id)sigValidationQueue;

@end
