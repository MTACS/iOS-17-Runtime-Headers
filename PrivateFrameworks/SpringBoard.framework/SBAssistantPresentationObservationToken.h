
@interface SBAssistantPresentationObservationToken : SBPresentationObservationToken <SBAssistantObserver> {
    SBAssistantController * _assistantController;
}

@property (nonatomic, readonly) SBAssistantController *assistantController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assistantController;
- (void)assistantDidAppear:(id)arg1 windowScene:(id)arg2;
- (void)assistantDidDisappear:(id)arg1 windowScene:(id)arg2;
- (void)assistantWillAppear:(id)arg1 windowScene:(id)arg2;
- (void)assistantWillDisappear:(id)arg1 windowScene:(id)arg2;
- (void)dealloc;
- (id)initWithAssistantController:(id)arg1 scene:(id)arg2;
- (long long)state;

@end
