
@interface OCDEncryptedReader : OCDReader {
    OCCDecryptor * mDecryptor;
}

@property (nonatomic, readonly) OCCDecryptor *decryptor;

- (void).cxx_destruct;
- (id)decryptor;
- (id)defaultPassphrase;
- (void)restartReaderToUseDecryptedDocument;
- (bool)retainDecryptorWithErrorCode:(int*)arg1;
- (void)useUnencryptedDocument;

@end
