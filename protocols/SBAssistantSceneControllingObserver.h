
@protocol SBAssistantSceneControllingObserver <NSObject>

@optional

- (void)assistantDidAppear:(id <SBAssistantSceneControlling>)arg1;
- (void)assistantDidDisappear:(id <SBAssistantSceneControlling>)arg1;
- (void)assistantWillAppear:(id <SBAssistantSceneControlling>)arg1;
- (void)assistantWillDisappear:(id <SBAssistantSceneControlling>)arg1;

@end
