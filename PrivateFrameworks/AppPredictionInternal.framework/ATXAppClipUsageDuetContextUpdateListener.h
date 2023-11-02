
@interface ATXAppClipUsageDuetContextUpdateListener : NSObject <ATXAppClipLaunchListenerProtocol> {
    id /* block */  _appClipUsageHandler;
}

@property (nonatomic, readonly) id /* block */ appClipUsageHandler;

- (void).cxx_destruct;
- (id /* block */)appClipUsageHandler;
- (void)startListeningWithCallback:(id /* block */)arg1 clientId:(id)arg2;
- (void)startListeningWithClientId:(id)arg1;

@end
