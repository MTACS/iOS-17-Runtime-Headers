
@interface OCXReader : OCDEncryptedReader {
    const void * mDataBytes;
    OCPZipPackage * mZipPackage;
}

@property (nonatomic, retain) OCPZipPackage *zipPackage;

- (void).cxx_destruct;
- (bool)isBinaryReader;
- (id)read;
- (void)restartReaderToUseDecryptedDocument;
- (bool)retainDecryptorWithErrorCode:(int*)arg1;
- (void)setZipPackage:(id)arg1;
- (bool)start;
- (bool)verifyFileFormat;
- (id)zipPackage;

@end
