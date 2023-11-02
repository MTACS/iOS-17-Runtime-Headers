
@interface _PXCompletionHandlerManager : NSObject {
    NSMutableArray * _completionHandlers;
    <_PXCompletionHandlerManagerDelegate> * _delegate;
}

@property (nonatomic) <_PXCompletionHandlerManagerDelegate> *delegate;

- (void).cxx_destruct;
- (void)_handleTimeoutOfCompletionHandler:(id /* block */)arg1;
- (void)addCompletionHandler:(id /* block */)arg1;
- (void)callCompletionHandlers;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;

@end
