
@interface _PASDatabaseJournalFile : NSObject {
    bool  _dead;
    int  _fd;
    unsigned long long  _len;
    NSString * _path;
    unsigned long long  _readCursor;
    bool  _written;
}

@property (nonatomic, readonly) bool isAlive;
@property (nonatomic, readonly) bool isFullyRead;
@property (nonatomic, readonly) unsigned long long length;

- (void).cxx_destruct;
- (void)clear;
- (void)dealloc;
- (id)description;
- (void)destroy;
- (void)destroyAndUnlinkIfEmpty;
- (id)init;
- (id)initWithPath:(id)arg1;
- (bool)isAlive;
- (bool)isFullyRead;
- (unsigned long long)length;
- (id)read;
- (void)unlink;
- (void)write:(id)arg1;

@end
