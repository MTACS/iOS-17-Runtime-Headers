
@interface JFXCompositionUpdateRequest : JFXCompositionPlayerRequest {
    bool  _readyForDisplayReceived;
    bool  _refreshCompletedReceived;
}

@property (nonatomic, readonly) bool hasCompleted;

- (void)didBegin;
- (void)didCancel;
- (void)didComplete;
- (void)didEnqueue;
- (bool)hasCompleted;
- (id)initWithBlock:(id /* block */)arg1;
- (void)setReadyForDisplayReceived;
- (void)setRefreshCompletedReceived;

@end
