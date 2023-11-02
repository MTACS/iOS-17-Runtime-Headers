
@interface HIDPreferences : NSObject <HIDPreferencesProtocol> {
    NSObject<OS_xpc_object> * _connection;
    int  _option;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)destroyConnection:(id)arg1;
+ (id)getReply:(id)arg1;

- (void).cxx_destruct;
- (void)copy:(id)arg1 user:(id)arg2 host:(id)arg3 domain:(id)arg4 reply:(id /* block */)arg5;
- (void)copyDomain:(id)arg1 domain:(id)arg2 reply:(id /* block */)arg3;
- (void)copyMultiple:(id)arg1 user:(id)arg2 host:(id)arg3 domain:(id)arg4 reply:(id /* block */)arg5;
- (void)dealloc;
- (id)init;
- (id)initWithOption:(int)arg1;
- (void)set:(id)arg1 value:(id)arg2 user:(id)arg3 host:(id)arg4 domain:(id)arg5;
- (void)setDomain:(id)arg1 value:(id)arg2 domain:(id)arg3;
- (void)setMultiple:(id)arg1 keysToRemove:(id)arg2 user:(id)arg3 host:(id)arg4 domain:(id)arg5;
- (id)setupConnection;
- (void)synchronize:(id)arg1 host:(id)arg2 domain:(id)arg3;

@end
