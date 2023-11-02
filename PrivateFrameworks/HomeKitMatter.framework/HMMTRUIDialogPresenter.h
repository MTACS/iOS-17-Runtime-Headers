
@interface HMMTRUIDialogPresenter : NSObject {
    NSObject<OS_dispatch_queue> * _clientQueue;
    id  _context;
    id  _dialogDelegate;
}

@property (retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, readonly) id context;
@property (nonatomic) id dialogDelegate;

- (void).cxx_destruct;
- (id)clientQueue;
- (id)context;
- (id)dialogDelegate;
- (id)initWithQueue:(id)arg1 context:(id)arg2;
- (void)requestUserPermissionForUnauthenticatedAccessory:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setClientQueue:(id)arg1;
- (void)setDialogDelegate:(id)arg1;

@end
