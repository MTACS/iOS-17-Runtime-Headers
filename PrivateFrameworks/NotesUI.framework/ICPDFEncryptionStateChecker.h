
@interface ICPDFEncryptionStateChecker : NSObject <NSCopying> {
    unsigned long long  _encryptionState;
    NSURL * _pdfURL;
}

@property (nonatomic) unsigned long long encryptionState;
@property (nonatomic, readonly, copy) NSURL *pdfURL;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)encryptionState;
- (id)initWithPDFURL:(id)arg1;
- (id)pdfURL;
- (void)setEncryptionState:(unsigned long long)arg1;

@end
