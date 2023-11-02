
@interface _STKSIMToolkitResponseProvider : NSObject <STKAlertSessionResponseProvider> {
    CTXPCServiceSubscriptionContext * _context;
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
- (struct __CFString { }*)_responseFromResponseType:(long long)arg1;
- (bool)hasSentResponse;
- (id)initWithQueue:(id)arg1 telephonyClient:(id)arg2 context:(id)arg3 options:(id)arg4 logger:(id)arg5;
- (id)logger;
- (void)sendResponse:(long long)arg1;
- (void)sendResponse:(long long)arg1 withBOOLResult:(bool)arg2;
- (void)sendResponse:(long long)arg1 withStringResult:(id)arg2;
- (void)sendSuccessWithSelectedIndex:(unsigned long long)arg1;

@end
