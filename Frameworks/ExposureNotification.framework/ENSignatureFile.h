
@interface ENSignatureFile : NSObject {
    struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; } * _fileHandle;
    NSMutableData * _outputData;
    NSArray * _signatures;
}

@property (nonatomic, copy) NSArray *signatures;

+ (id)_signatureFileWithProtobufCoder:(id)arg1 error:(id*)arg2;
+ (id)signatureFileWithArchive:(id)arg1 error:(id*)arg2;
+ (id)signatureFileWithBytes:(const char *)arg1 length:(unsigned long long)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (bool)closeAndReturnError:(id*)arg1;
- (bool)openForWritingToData:(id)arg1 error:(id*)arg2;
- (bool)openWithFileSystemRepresentation:(const char *)arg1 reading:(bool)arg2 error:(id*)arg3;
- (void)setSignatures:(id)arg1;
- (id)signatures;
- (bool)writeAndReturnError:(id*)arg1;

@end
