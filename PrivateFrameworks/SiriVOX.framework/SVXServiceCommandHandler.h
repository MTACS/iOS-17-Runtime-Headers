
@interface SVXServiceCommandHandler : NSObject <SVXModuleInstance> {
    SVXServiceCommandDelayedActionStore * _delayedActionStore;
    SVXServiceCommandHandlerFallback * _fallbackHandler;
    MDFixedModeProvider * _fallbackModeProvider;
    SVXServiceCommandHandlerRegistry * _handlerRegistry;
    SVXModule * _module;
    NSMutableSet * _transactions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleCommand:(id)arg1 taskTracker:(id)arg2 completion:(id /* block */)arg3;
- (void)_reset;
- (id)fallbackModeProvider;
- (void)handleCommand:(id)arg1 taskTracker:(id)arg2 completion:(id /* block */)arg3;
- (void)handleResult:(id)arg1 forCommand:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithModule:(id)arg1;
- (bool)isCommandUUFR:(id)arg1;
- (void)reset;
- (void)startWithModuleInstanceProvider:(id)arg1 platformDependencies:(id)arg2;
- (void)stopWithModuleInstanceProvider:(id)arg1;

@end
