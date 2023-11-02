
@interface _STKClass0SMSResponseProvider : NSObject <STKAlertSessionResponseProvider> {
    NSObject<OS_os_log> * _logger;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasSentResponse;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_os_log> *logger;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)hasSentResponse;
- (id)initWithLogger:(id)arg1;
- (id)logger;
- (void)sendResponse:(long long)arg1;
- (void)sendResponse:(long long)arg1 withStringResult:(id)arg2;

@end
