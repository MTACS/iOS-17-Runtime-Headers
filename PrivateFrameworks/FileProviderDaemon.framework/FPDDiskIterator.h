
@interface FPDDiskIterator : FPDIterator {
    NSString * _basePath;
    struct _ftsent { struct _ftsent {} *x1; struct _ftsent {} *x2; struct _ftsent {} *x3; long long x4; void *x5; char *x6; char *x7; int x8; int x9; unsigned short x10; unsigned short x11; unsigned long long x12; int x13; unsigned short x14; short x15; unsigned short x16; unsigned short x17; unsigned short x18; struct stat {} *x19; BOOL x20[1]; } * _entry;
    NSError * _error;
    struct { struct _ftsent {} *x1; struct _ftsent {} *x2; struct _ftsent {} **x3; int x4; char *x5; int x6; int x7; int x8; union { int (*x_9_1_1)(); id /* block */ x_9_1_2; } x9; int x10; } * _fts;
    bool  _isFile;
    bool  _lastItemWasPackage;
    unsigned long long  _numFoldersPopped;
    NSURL * _rootURL;
    int  _state;
    bool  _stopAccessingRoot;
}

@property (nonatomic, readonly) NSURL *rootURL;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)done;
- (id)error;
- (id)initWithURL:(id)arg1 isDirectory:(bool)arg2;
- (id)nextWithError:(id*)arg1;
- (unsigned long long)numFoldersPopped;
- (id)rootURL;
- (void)skipDescendants;

@end
