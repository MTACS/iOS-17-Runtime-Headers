
@interface _STKUSSDResponseProvider : NSObject <STKAlertSessionResponseProvider> {
    bool  _hasSentResponse;
    NSObject<OS_os_log> * _logger;
    NSDictionary * _options;
    NSObject<OS_dispatch_queue> * _queue;
    CoreTelephonyClient * _telephonyClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasSentResponse;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_os_log> *logger;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)hasSentResponse;
- (id)initWithQueue:(id)arg1 telephonyClient:(id)arg2 options:(id)arg3 logger:(id)arg4;
- (id)logger;
- (void)sendResponse:(long long)arg1;
- (void)sendResponse:(long long)arg1 withStringResult:(id)arg2;

@end
