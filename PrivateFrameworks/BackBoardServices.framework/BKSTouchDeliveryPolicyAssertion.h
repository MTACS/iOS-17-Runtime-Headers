
@interface BKSTouchDeliveryPolicyAssertion : NSObject {
    NSObject<OS_xpc_object> * _listener;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)endpoint;
- (id)init;
- (void)invalidate;

@end
