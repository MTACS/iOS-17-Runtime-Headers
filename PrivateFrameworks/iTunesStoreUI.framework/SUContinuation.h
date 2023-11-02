
@interface SUContinuation : NSObject {
    <SUContinuationDelegate> * _delegate;
}

@property (nonatomic) <SUContinuationDelegate> *delegate;

- (void)cancel;
- (id)delegate;
- (void)sendErrorToDelegate:(id)arg1;
- (void)sendFinishToDelegate;
- (void)setDelegate:(id)arg1;
- (void)start;

@end
