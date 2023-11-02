
@interface FPArchiveTemporaryFolder : NSObject {
    bool  _didStartAccessing;
    NSURL * _temporaryFolderURL;
    NSURL * _url;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithURL:(id)arg1;
- (id)temporaryFolderURLGetError:(id*)arg1;

@end
