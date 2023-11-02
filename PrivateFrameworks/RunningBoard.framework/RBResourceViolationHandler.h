
@interface RBResourceViolationHandler : NSObject {
    <RBAssertionManaging> * _assertionManager;
    NSObject<OS_xpc_object> * _listener;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;

@end
