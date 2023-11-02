
@interface CRKFTSEnumeration : NSObject {
    NSString * mDirectoryPath;
    int  mOptions;
}

+ (int)defaultOptions;

- (void).cxx_destruct;
- (void)closeFTS:(struct { struct _ftsent {} *x1; struct _ftsent {} *x2; struct _ftsent {} **x3; int x4; char *x5; int x6; int x7; int x8; union { int (*x_9_1_1)(); id /* block */ x_9_1_2; } x9; int x10; }*)arg1;
- (id)entriesWithError:(id*)arg1;
- (id)init;
- (id)initWithDirectoryPath:(id)arg1;
- (id)initWithDirectoryPath:(id)arg1 options:(int)arg2;
- (struct { struct _ftsent {} *x1; struct _ftsent {} *x2; struct _ftsent {} **x3; int x4; char *x5; int x6; int x7; int x8; union { int (*x_9_1_1)(); id /* block */ x_9_1_2; } x9; int x10; }*)makeFTSWithError:(id*)arg1;
- (id)readAllEntriesFromFTS:(struct { struct _ftsent {} *x1; struct _ftsent {} *x2; struct _ftsent {} **x3; int x4; char *x5; int x6; int x7; int x8; union { int (*x_9_1_1)(); id /* block */ x_9_1_2; } x9; int x10; }*)arg1 error:(id*)arg2;
- (id)readNextEntryFromFTS:(struct { struct _ftsent {} *x1; struct _ftsent {} *x2; struct _ftsent {} **x3; int x4; char *x5; int x6; int x7; int x8; union { int (*x_9_1_1)(); id /* block */ x_9_1_2; } x9; int x10; }*)arg1 error:(id*)arg2;
- (bool)shouldSkipEntry:(struct _ftsent { struct _ftsent {} *x1; struct _ftsent {} *x2; struct _ftsent {} *x3; long long x4; void *x5; char *x6; char *x7; int x8; int x9; unsigned short x10; unsigned short x11; unsigned long long x12; int x13; unsigned short x14; short x15; unsigned short x16; unsigned short x17; unsigned short x18; struct stat {} *x19; BOOL x20[1]; }*)arg1;

@end
