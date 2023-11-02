
@interface HIDPreferencesHelperListener : NSObject {
    NSMutableArray * _clients;
    NSObject<OS_xpc_object> * _listener;
}

- (void).cxx_destruct;
- (void)acceptConnection:(id)arg1;
- (id)init;
- (void)removeClient:(id)arg1;
- (bool)setupListener;

@end
