
@interface ATXXPCActivity : NSObject <ATXActivityContinuousProtocol, ATXActivityDeferrableProtocol> {
    NSObject<OS_xpc_object> * _activity;
    NSObject<OS_os_log> * _handle;
    NSString * _name;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)didDefer;
- (id)init;
- (id)initWithActivity:(id)arg1 name:(id)arg2;
- (id)initWithActivity:(id)arg1 name:(id)arg2 logHandle:(id)arg3;
- (bool)setContinue;
- (bool)setDone;
- (bool)shouldDefer;

@end
