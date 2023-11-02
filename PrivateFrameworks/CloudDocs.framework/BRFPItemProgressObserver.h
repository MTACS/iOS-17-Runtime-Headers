
@interface BRFPItemProgressObserver : NSObject {
    NSProgress * _downloadProgress;
    FPItemID * _fpItemID;
    id /* block */  _progressHandler;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _started;
    NSProgress * _uploadProgress;
}

@property (nonatomic, readonly) NSNumber *downloadPercentCompleted;
@property (nonatomic, readonly) FPItemID *fpItemID;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic, readonly) NSNumber *uploadPercentCompleted;

- (void).cxx_destruct;
- (void)_startObservingProgress:(id)arg1;
- (id)description;
- (id)downloadPercentCompleted;
- (id)fpItemID;
- (id)initWithFPItem:(id)arg1 queue:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id /* block */)progressHandler;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)start;
- (void)stop;
- (void)updateWithFPItem:(id)arg1;
- (id)uploadPercentCompleted;

@end
