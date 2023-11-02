
@interface VUIMPMediaLibraryConnectOperation : VUIAsynchronousOperation {
    NSError * _error;
    MPMediaLibrary * _mediaLibrary;
    id /* block */  _progressBlock;
    NSObject<OS_dispatch_source> * _progressTimer;
    bool  _success;
}

@property (nonatomic, copy) NSError *error;
@property (nonatomic, retain) MPMediaLibrary *mediaLibrary;
@property (nonatomic, copy) id /* block */ progressBlock;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *progressTimer;
@property (nonatomic) bool success;

- (void).cxx_destruct;
- (void)_notifyClientOfProgress:(float)arg1;
- (void)_startProgressTimer;
- (void)_stopProgressTimer;
- (id)error;
- (void)executionDidBegin;
- (id)init;
- (id)initWithMediaLibrary:(id)arg1;
- (id)mediaLibrary;
- (id /* block */)progressBlock;
- (id)progressTimer;
- (void)setError:(id)arg1;
- (void)setMediaLibrary:(id)arg1;
- (void)setProgressBlock:(id /* block */)arg1;
- (void)setProgressTimer:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;

@end
