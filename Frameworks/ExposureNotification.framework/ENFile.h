
@interface ENFile : NSObject {
    ENArchive * _archive;
    struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; } * _fileHandle;
    unsigned long long  _keyIndex;
    NSDictionary * _metadata;
    unsigned int  _metadataFlags;
    NSMutableDictionary * _mutableMetadata;
    NSMutableData * _outputData;
    ENProtobufCoder * _protobufCoder;
    bool  _reading;
    NSData * _sha256Data;
    ENProtobufCoder * _tekProtobufCoder;
}

@property (nonatomic, copy) NSDictionary *metadata;
@property (nonatomic, readonly, copy) NSData *sha256Data;

- (void).cxx_destruct;
- (bool)_readHashFromArchive:(id)arg1 error:(id*)arg2;
- (bool)_readHashFromFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 error:(id*)arg2;
- (bool)_readHeaderFromFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 error:(id*)arg2;
- (id)_readKeyWithPtr:(const char *)arg1 length:(unsigned long long)arg2 error:(id*)arg3;
- (bool)_readMetadataFromArchive:(id)arg1 error:(id*)arg2;
- (bool)_readMetadataFromCoder:(id)arg1 error:(id*)arg2;
- (bool)_readMetadataFromFileHandle:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 error:(id*)arg2;
- (bool)_readPrepareAndReturnError:(id*)arg1;
- (bool)_resetAndReadHeaderFromArchive:(id)arg1 error:(id*)arg2;
- (bool)_writeMetadataAndReturnError:(id*)arg1;
- (bool)_writePrepareAndReturnError:(id*)arg1;
- (bool)closeAndReturnError:(id*)arg1;
- (void)dealloc;
- (id)metadata;
- (bool)openForWritingToData:(id)arg1 error:(id*)arg2;
- (bool)openWithArchive:(id)arg1 error:(id*)arg2;
- (bool)openWithFD:(int)arg1 reading:(bool)arg2 error:(id*)arg3;
- (bool)openWithFileSystemRepresentation:(const char *)arg1 reading:(bool)arg2 error:(id*)arg3;
- (id)readTEKAndReturnError:(id*)arg1;
- (id)readTEKWithFlags:(unsigned int)arg1 error:(id*)arg2;
- (void)setMetadata:(id)arg1;
- (id)sha256Data;
- (bool)writeTEK:(id)arg1 error:(id*)arg2;
- (bool)writeTEK:(id)arg1 flags:(unsigned int)arg2 error:(id*)arg3;

@end
