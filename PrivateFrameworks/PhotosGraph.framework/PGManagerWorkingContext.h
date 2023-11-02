
@interface PGManagerWorkingContext : NSObject {
    CPAnalytics * _analytics;
    NSObject<OS_os_log> * _loggingConnection;
    PGManager * _manager;
}

@property (readonly) CPAnalytics *analytics;
@property (readonly) PGCurationManager *curationManager;
@property (readonly) NSObject<OS_os_log> *loggingConnection;
@property (readonly) PHPhotoLibrary *photoLibrary;

- (void).cxx_destruct;
- (id)analytics;
- (id)curationManager;
- (id)initWithManager:(id)arg1 loggingConnection:(id)arg2;
- (id)loggingConnection;
- (id)musicCuratorContextWithCurationOptions:(id)arg1 error:(id*)arg2;
- (id)musicCuratorContextWithRecentlyUsedSongAdamIDs:(id)arg1 error:(id*)arg2;
- (void)performSynchronousConcurrentGraphReadUsingBlock:(id /* block */)arg1;
- (id)photoLibrary;

@end
