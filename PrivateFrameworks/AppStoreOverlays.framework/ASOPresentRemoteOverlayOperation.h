
@interface ASOPresentRemoteOverlayOperation : NSOperation {
    bool  _isExecuting;
    bool  _isFinished;
    ASORemoteOverlay * _remoteOverlay;
}

@property bool isExecuting;
@property bool isFinished;
@property (nonatomic, retain) ASORemoteOverlay *remoteOverlay;

- (void).cxx_destruct;
- (void)cancel;
- (void)finishExecuting;
- (id)initWithRemoteOverlay:(id)arg1;
- (bool)isExecuting;
- (bool)isFinished;
- (id)remoteOverlay;
- (void)setIsExecuting:(bool)arg1;
- (void)setIsFinished:(bool)arg1;
- (void)setRemoteOverlay:(id)arg1;
- (void)start;

@end
