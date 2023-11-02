
@interface SVXServiceCommandHandlerUICloseAssistant : NSObject <SVXServiceCommandHandling> {
    NSString * _identifier;
    SVXSessionManager * _sessionManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) Class superclass;

+ (Class)supportedCommandClass;

- (void).cxx_destruct;
- (void)handleCommand:(id)arg1 withContext:(id)arg2 taskTracker:(id)arg3 completion:(id /* block */)arg4;
- (id)identifier;
- (id)initWithSessionManager:(id)arg1;
- (bool)isCommandUUFR:(id)arg1;

@end
