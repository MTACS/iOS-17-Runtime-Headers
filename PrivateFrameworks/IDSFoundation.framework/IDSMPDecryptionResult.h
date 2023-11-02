
@interface IDSMPDecryptionResult : NSObject {
    NSDictionary * _additionalDecryptionResult;
    id /* block */  _commitBlock;
    NSData * _decryptedData;
    NSDictionary * _encryptedAttributes;
}

@property (nonatomic, retain) NSDictionary *additionalDecryptionResult;
@property (nonatomic, copy) id /* block */ commitBlock;
@property (nonatomic, retain) NSData *decryptedData;
@property (nonatomic, retain) NSDictionary *encryptedAttributes;

- (void).cxx_destruct;
- (id)additionalDecryptionResult;
- (id /* block */)commitBlock;
- (id)decryptedData;
- (id)encryptedAttributes;
- (id)initWithData:(id)arg1 encryptedAttributes:(id)arg2 withCommitState:(id /* block */)arg3 additionalDecryptionResult:(id)arg4;
- (void)setAdditionalDecryptionResult:(id)arg1;
- (void)setCommitBlock:(id /* block */)arg1;
- (void)setDecryptedData:(id)arg1;
- (void)setEncryptedAttributes:(id)arg1;

@end
