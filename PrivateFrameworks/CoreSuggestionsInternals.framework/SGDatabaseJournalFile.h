
@interface SGDatabaseJournalFile : NSObject {
    bool  _dead;
    int  _fd;
    unsigned long long  _len;
    NSString * _path;
    bool  _written;
}

- (void).cxx_destruct;
- (void)clear;
- (void)dealloc;
- (id)description;
- (void)destroy;
- (void)destroyAndUnlinkIfEmpty;
- (id)init;
- (id)initWithPath:(id)arg1;
- (id)read;
- (void)unlink;
- (void)write:(id)arg1;

@end
