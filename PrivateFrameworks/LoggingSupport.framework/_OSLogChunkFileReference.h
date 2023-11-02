
@interface _OSLogChunkFileReference : NSObject {
    _OSLogCollectionReference * _oslcr;
    char * _path;
    unsigned long long  _xet;
    unsigned long long  _xot;
}

@property (nonatomic, readonly) char *path;
@property (nonatomic, readonly) unsigned long long xattrEndTime;
@property (nonatomic, readonly) unsigned long long xattrOldestTime;

- (void).cxx_destruct;
- (id)copyMappedChunkFile:(id*)arg1;
- (void)dealloc;
- (id)initWithCollection:(id)arg1 subpath:(const char *)arg2;
- (char *)path;
- (bool)readXattrForTimespan:(id*)arg1;
- (unsigned long long)xattrEndTime;
- (unsigned long long)xattrOldestTime;

@end
