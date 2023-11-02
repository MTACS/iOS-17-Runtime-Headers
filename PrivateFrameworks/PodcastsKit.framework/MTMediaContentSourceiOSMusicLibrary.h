
@interface MTMediaContentSourceiOSMusicLibrary : MTMediaContentSource {
    bool  _iTunesMatchEnabled;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) bool iTunesMatchEnabled;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)determineiTunesMatchEnabledWithCompletion:(id /* block */)arg1;
- (bool)iTunesMatchEnabled;
- (id)init;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end
