
@interface SVXServiceCommandHandlerUIAddDialogs : NSObject <SVXServiceCommandHandling> {
    NSDictionary * _handlersByCommandType;
    NSString * _identifier;
    <MDModeProviding> * _modeProvider;
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
- (id)initWithHandlers:(id)arg1 modeProvider:(id)arg2;
- (bool)isCommandUUFR:(id)arg1;
- (void)prepareToHandleCommand:(id)arg1 completion:(id /* block */)arg2;
- (bool)shouldDependOnCommand:(id)arg1;

@end
