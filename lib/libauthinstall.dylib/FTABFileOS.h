
@interface FTABFileOS : NSObject <NSCopying> {
    NSData * _bootNonce;
    NSMutableData * _dataWriteDestination;
    NSData * _fileData;
    NSFileHandle * _fileHandleWriteDestination;
    unsigned long long  _fileLength;
    const char * _filePointer;
    unsigned int  _generation;
    NSData * _magic;
    FTABSubfileOS * _manifest;
    NSMutableArray * _subFileArray;
    NSURL * _url;
    unsigned int  _valid;
}

@property (readonly) NSData *bootNonce;
@property (readonly) unsigned long long fileLength;
@property (readonly) const char *filePointer;
@property (readonly) unsigned int generation;
@property (readonly) NSData *magic;
@property (readonly) FTABSubfileOS *manifest;
@property (readonly) NSArray *subfiles;
@property (readonly) NSURL *url;
@property (readonly) unsigned int valid;

- (void).cxx_destruct;
- (bool)addSubfileWithTagName:(id)arg1 contentsOfURL:(id)arg2;
- (bool)addSubfileWithTagName:(id)arg1 subfileData:(id)arg2;
- (void)addSubfiles:(id)arg1;
- (id)bootNonce;
- (void)configureDataWriteDestination;
- (bool)configureFileHandleWriteDestinationForURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createFileHandleForWritingToURL:(id)arg1;
- (id)description;
- (unsigned long long)fileLength;
- (const char *)filePointer;
- (bool)fileValidForOffset:(unsigned int)arg1 length:(unsigned int)arg2;
- (unsigned int)generation;
- (id)init;
- (bool)initFile;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)magic;
- (id)manifest;
- (bool)parseFileData;
- (void)removeSubfileWithTag:(id)arg1;
- (void)setManifest:(id)arg1;
- (id)subfileWithTag:(id)arg1;
- (id)subfiles;
- (id)url;
- (unsigned int)valid;
- (bool)writeBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (bool)writeBytes:(const void*)arg1 length:(unsigned long long)arg2 handle:(id)arg3;
- (bool)writeSubfileToURL:(id)arg1 tag:(id)arg2;
- (id)writeToData;
- (bool)writeToDestination;
- (bool)writeToURL:(id)arg1;

@end
