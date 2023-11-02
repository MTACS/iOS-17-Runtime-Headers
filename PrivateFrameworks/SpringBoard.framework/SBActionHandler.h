
@interface SBActionHandler : NSObject <SBFActionProviding> {
    bool  _capturingDisplayDump;
    NSHashTable * _externalHandlers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_captureRadarAttachmentsWithCompletion:(id /* block */)arg1;
- (void)_executeRestartAction:(id)arg1 fromProcess:(id)arg2;
- (void)_reportAndKillInsecureProcesses:(id)arg1;
- (bool)_shouldPromptForSecureDrawViolations;
- (void)addActionHandler:(id)arg1;
- (void)handleActions:(id)arg1 origin:(id)arg2 withResult:(id /* block */)arg3;
- (void)removeActionHandler:(id)arg1;

@end
