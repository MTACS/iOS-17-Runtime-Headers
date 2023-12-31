
@interface SFUZipArchiveOutputStream : NSObject <SFUSimpleOutputStream> {
    char * mBuffer;
    SFUCryptoKey * mCryptoKey;
    SFUZipOutputEntry * mCurrentEntry;
    SFUZipFreeSpaceEntry * mCurrentFreeSpace;
    NSData * mEncryptedDocumentUuid;
    NSMutableArray * mEntries;
    <SFUOutputStream> * mEntryOutputStream;
    unsigned long long  mFreeBytes;
    NSMutableArray * mFreeList;
    SFUZipOutputEntry * mLastEntryInFile;
    SFUMoveableFileOutputStream * mOutputStream;
    NSData * mPassphraseHint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned long long)approximateBytesForEntryHeaderWithName:(id)arg1;

- (void)beginEntryWithName:(id)arg1 isCompressed:(bool)arg2 uncompressedSize:(unsigned long long)arg3;
- (id)beginUncompressedUnknownSizeEntryWithName:(id)arg1;
- (void)beginUnknownSizeEntryWithName:(id)arg1 isCompressed:(bool)arg2;
- (bool)canRemoveEntryWithName:(id)arg1;
- (void)close;
- (void)coalesceAndTruncateFreeSpace;
- (unsigned int)crc32ForEntry:(id)arg1;
- (void)dealloc;
- (id)entriesAtPath:(id)arg1;
- (id)entryNames;
- (void)finishEntry;
- (void)flush;
- (unsigned long long)freeBytes;
- (id)initWithOutputStream:(id)arg1 cryptoKey:(id)arg2 passphraseHint:(id)arg3;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 cryptoKey:(id)arg2 passphraseHint:(id)arg3;
- (void)moveToPath:(id)arg1;
- (void)removeEntryWithName:(id)arg1;
- (void)reset;
- (void)setCrc32ForCurrentEntry:(unsigned int)arg1;
- (void)setEncryptedDocumentUuid:(id)arg1;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long long)arg2;
- (void)writeCentralFileHeaderUsingEntry:(id)arg1 isFirstEntry:(bool)arg2;
- (void)writeEndOfCentralDirectoryWithOffset:(long long)arg1;
- (unsigned long long)writeLocalFileHeaderForEntry:(id)arg1;
- (void)writeZip64EndOfCentralDirectoryLocatorWithOffset:(long long)arg1;
- (void)writeZip64EndOfCentralDirectoryWithOffset:(long long)arg1;

@end
