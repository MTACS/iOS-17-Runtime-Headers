
@interface NTKAppleEncryptedArchiveHandle : NSObject {
    id /* block */  _archiveEntryEvent;
    struct AAArchiveStream_impl { } * _archiveStream;
    NSURL * _archiveURL;
    struct AEAContext_impl { } * _context;
    struct AAByteStream_impl { } * _decryptedStream;
    struct AAByteStream_impl { } * _encryptedStream;
    NSData * _symmetricKey;
}

@property (copy) id /* block */ archiveEntryEvent;
@property (readonly, copy) NSURL *archiveURL;
@property (readonly, copy) NSData *symmetricKey;

- (void).cxx_destruct;
- (id /* block */)archiveEntryEvent;
- (id)archiveURL;
- (bool)closeReturningError:(id*)arg1;
- (void)dealloc;
- (id)initWithArchiveURL:(id)arg1 symmetricKey:(id)arg2;
- (struct AAArchiveStream_impl { }*)openReturningError:(id*)arg1;
- (void)setArchiveEntryEvent:(id /* block */)arg1;
- (id)symmetricKey;

@end
