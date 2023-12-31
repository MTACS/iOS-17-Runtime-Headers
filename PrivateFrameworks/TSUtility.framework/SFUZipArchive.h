
@interface SFUZipArchive : NSObject {
    <SFUZipArchiveDelegate> * _delegate;
    SFUCryptoKey * mCryptoKey;
    SFUDataRepresentation<SFUZipArchiveDataRepresentation> * mDataRepresentation;
    NSData * mEncryptedDocumentUuid;
    NSMutableDictionary * mEntries;
    NSString * mPassphraseHint;
    NSData * mPassphraseVerifier;
}

@property (nonatomic) <SFUZipArchiveDelegate> *delegate;

+ (bool)isZipArchiveAtPath:(id)arg1;

- (id)allEntryNames;
- (void)collapseCommonRootDirectory;
- (void)dealloc;
- (bool)decompressAtPath:(id)arg1;
- (id)delegate;
- (id)encryptedDocumentUuid;
- (id)entryWithName:(id)arg1;
- (id)entryWithName:(id)arg1 dataLength:(long long)arg2;
- (id)initWithData:(id)arg1 collapseCommonRootDirectory:(bool)arg2;
- (id)initWithPath:(id)arg1 collapseCommonRootDirectory:(bool)arg2;
- (bool)isEncrypted;
- (id)passphraseHint;
- (id)passphraseVerifier;
- (struct SFUZipEndOfCentralDirectory { unsigned long long x1; long long x2; long long x3; })readEndOfCentralDirectoryFromInputStream:(id)arg1;
- (void)readEntries;
- (void)readExtraFieldFromBuffer:(const char *)arg1 size:(unsigned long long)arg2 entry:(id)arg3;
- (id)readFilenameFromBuffer:(const char *)arg1 size:(unsigned long long)arg2;
- (struct SFUZipEndOfCentralDirectory { unsigned long long x1; long long x2; long long x3; })readZip64EndOfCentralDirectoryFromInputStream:(id)arg1 eocdOffset:(long long)arg2;
- (struct SFUZipEndOfCentralDirectory { unsigned long long x1; long long x2; long long x3; })readZip64EndOfCentralDirectoryFromInputStream:(id)arg1 offset:(long long)arg2;
- (const char *)searchForEndOfCentralDirectoryFromInputStream:(id)arg1 offset:(long long*)arg2;
- (void)setCryptoKey:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
