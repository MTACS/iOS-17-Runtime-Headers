
@interface SWPresentationManager : NSObject <SWMessageHandler, SWPresentationManager> {
    NSNumber * _heightValue;
    <SWLogger> * _logger;
    unsigned long long  _presentationState;
    <SWScriptsManager> * _scriptsManager;
    id /* block */  loadBlock;
    id /* block */  presentableBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double height;
@property (nonatomic, retain) NSNumber *heightValue;
@property (setter=onLoad:, nonatomic, copy) id /* block */ loadBlock;
@property (nonatomic, readonly) <SWLogger> *logger;
@property (setter=onPresentable:, nonatomic, copy) id /* block */ presentableBlock;
@property (nonatomic) unsigned long long presentationState;
@property (nonatomic, readonly) <SWScriptsManager> *scriptsManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)descriptionForPresentationState:(unsigned long long)arg1;
- (void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2;
- (double)height;
- (id)heightValue;
- (id)initWithWebContentScriptsManager:(id)arg1 messageHandlerManager:(id)arg2 documentStateProvider:(id)arg3 logger:(id)arg4;
- (id /* block */)loadBlock;
- (id)logger;
- (void)onLoad:(id /* block */)arg1;
- (void)onPresentable:(id /* block */)arg1;
- (id /* block */)presentableBlock;
- (unsigned long long)presentationState;
- (void)refresh;
- (id)scriptsManager;
- (void)setHeightValue:(id)arg1;
- (void)setPresentationState:(unsigned long long)arg1;

@end
