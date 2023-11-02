
@interface GTDownloadPoint : NSObject {
    GTDownloadContext * _downloadContext;
    <MTLCommandQueue> * _downloadQueue;
    <MTLSharedEvent> * downloadEvent;
    unsigned long long  downloadValue;
    <MTLSharedEvent> * waitEvent;
    unsigned long long  waitValue;
}

@property (nonatomic, readonly) GTDownloadContext *downloadContext;
@property (nonatomic, retain) <MTLSharedEvent> *downloadEvent;
@property (nonatomic, retain) <MTLCommandQueue> *downloadQueue;
@property (nonatomic) unsigned long long downloadValue;
@property (nonatomic, retain) <MTLSharedEvent> *waitEvent;
@property (nonatomic) unsigned long long waitValue;

- (void).cxx_destruct;
- (void)createContext:(struct apr_array_header_t { struct apr_pool_t {} *x1; int x2; int x3; int x4; char *x5; }*)arg1;
- (id)downloadContext;
- (id)downloadEvent;
- (id)downloadQueue;
- (unsigned long long)downloadValue;
- (void)setDownloadEvent:(id)arg1;
- (void)setDownloadQueue:(id)arg1;
- (void)setDownloadValue:(unsigned long long)arg1;
- (void)setWaitEvent:(id)arg1;
- (void)setWaitValue:(unsigned long long)arg1;
- (id)waitEvent;
- (unsigned long long)waitValue;

@end
