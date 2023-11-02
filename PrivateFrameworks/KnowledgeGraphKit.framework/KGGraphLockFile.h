
@interface KGGraphLockFile : NSObject {
    int  _fd;
    NSURL * _fileURL;
    bool  _locked;
}

- (void).cxx_destruct;
- (id)initWithDatabaseURL:(id)arg1;
- (bool)isLocked;
- (bool)lock;
- (void)unlock;

@end
