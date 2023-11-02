
@interface ENArchive : NSObject {
    struct archive { } * _archive;
    bool  _endOfArchive;
    struct archive_entry { } * _entry;
    struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; } * _fileHandle;
}

@property (nonatomic, readonly) bool endOfArchive;
@property (nonatomic, readonly) unsigned short entryFileType;
@property (nonatomic, readonly, copy) NSString *entryPath;

- (bool)_checkEntryAndReturnError:(id*)arg1;
- (void)_closeArchive;
- (bool)_openArchiveAndReturnError:(id*)arg1;
- (bool)advanceEntryAndReturnError:(id*)arg1;
- (void)close;
- (void)dealloc;
- (bool)endOfArchive;
- (unsigned short)entryFileType;
- (id)entryPath;
- (id)initWithFD:(int)arg1 error:(id*)arg2;
- (id)initWithPath:(id)arg1 error:(id*)arg2;
- (bool)readDataIntoBuffer:(void*)arg1 length:(unsigned long long)arg2 error:(id*)arg3;
- (long long)readDataIntoBuffer:(void*)arg1 maxLength:(unsigned long long)arg2 error:(id*)arg3;
- (bool)resetAndReturnError:(id*)arg1;
- (bool)resetToCurrentEntryAndReturnError:(id*)arg1;
- (bool)skipBytes:(unsigned long long)arg1 error:(id*)arg2;

@end
