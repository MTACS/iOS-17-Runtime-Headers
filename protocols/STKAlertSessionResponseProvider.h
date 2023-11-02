
@protocol STKAlertSessionResponseProvider <NSObject>

@required

- (bool)hasSentResponse;
- (NSObject<OS_os_log> *)logger;
- (void)sendResponse:(long long)arg1;
- (void)sendResponse:(long long)arg1 withStringResult:(NSString *)arg2;

@optional

- (void)sendResponse:(long long)arg1 withBOOLResult:(bool)arg2;
- (void)sendSuccessWithSelectedIndex:(unsigned long long)arg1;

@end
