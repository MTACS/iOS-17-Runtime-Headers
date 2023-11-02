
@interface SVXServiceCommandHandlerUIAddViews : NSObject <SVXServiceCommandHandling> {
    NSString * _identifier;
    <MDModeProviding> * _modeProvider;
    SVXModule * _module;
    SVXSpeechSynthesizer * _speechSynthesizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) Class superclass;

+ (Class)supportedCommandClass;

- (void).cxx_destruct;
- (void)handleAceView:(id)arg1 isExpository:(bool)arg2 taskTracker:(id)arg3 completion:(id /* block */)arg4;
- (void)handleCommand:(id)arg1 withContext:(id)arg2 taskTracker:(id)arg3 completion:(id /* block */)arg4;
- (id)identifier;
- (id)initWithSpeechSynthesizer:(id)arg1 module:(id)arg2 modeProvider:(id)arg3;
- (bool)isCommandUUFR:(id)arg1;
- (void)prepareToHandleCommand:(id)arg1 completion:(id /* block */)arg2;
- (bool)shouldDependOnCommand:(id)arg1;

@end
