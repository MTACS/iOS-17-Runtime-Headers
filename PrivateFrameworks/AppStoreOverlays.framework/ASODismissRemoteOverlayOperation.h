
@interface ASODismissRemoteOverlayOperation : NSOperation {
    <ASORemoteContextProvider> * _contextProvider;
    bool  _isExecuting;
    bool  _isFinished;
}

@property (nonatomic) <ASORemoteContextProvider> *contextProvider;
@property bool isExecuting;
@property bool isFinished;

- (void).cxx_destruct;
- (void)cancel;
- (id)contextProvider;
- (void)finishExecuting;
- (id)initWithContextProvider:(id)arg1;
- (bool)isExecuting;
- (bool)isFinished;
- (void)setContextProvider:(id)arg1;
- (void)setIsExecuting:(bool)arg1;
- (void)setIsFinished:(bool)arg1;
- (void)start;

@end
