
@interface ENEncryptedContentInfo : NSObject {
    NSString * _cipher;
    NSMutableString * _cipherText;
    NSString * _hint;
    long long  _keyLength;
}

@property (nonatomic, copy) NSString *cipher;
@property (nonatomic, retain) NSMutableString *cipherText;
@property (nonatomic, copy) NSString *hint;
@property long long keyLength;

- (void).cxx_destruct;
- (id)cipher;
- (id)cipherText;
- (id)hint;
- (id)init;
- (long long)keyLength;
- (void)setCipher:(id)arg1;
- (void)setCipherText:(id)arg1;
- (void)setHint:(id)arg1;
- (void)setKeyLength:(long long)arg1;

@end
