
@interface GEOTileData : NSObject <GEOXPCSerializable> {
    unsigned long long  _cachedFileSize;
    NSData * _data;
    id  _decodedRepresentation;
    int  _fileDescriptor;
    NSFileHandle * _fileHandle;
    NSURL * _fileURL;
    bool  _isDir;
    long long  _sandboxExtension;
}

@property (nonatomic, readonly) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) id decodedRepresentation;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) bool hasFileDescriptor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long length;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_replaceFileURL:(id)arg1;
- (int)consumeFileDescriptor;
- (id)data;
- (void)dealloc;
- (id)decodedRepresentation;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)fileURL;
- (bool)hasFileDescriptor;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDecodedRepresentation:(id)arg1;
- (id)initWithFileHandle:(id)arg1;
- (id)initWithFileURL:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)length;
- (id)readDataWithError:(id*)arg1;
- (id)readDataWithOptions:(unsigned long long)arg1 error:(id*)arg2;

@end
