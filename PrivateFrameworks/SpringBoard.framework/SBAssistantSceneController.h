
@interface SBAssistantSceneController : NSObject <SBAssistantObserver, SBAssistantSceneControlling> {
    NSHashTable * _observers;
    SBWindowScene * _windowScene;
}

@property (nonatomic, readonly) SBAssistantRootViewController *assistantRootViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSHashTable *observers;
@property (readonly) Class superclass;
@property (getter=isVisible, nonatomic, readonly) bool visible;
@property (nonatomic, readonly) SBWindow *window;
@property (nonatomic, readonly) SBWindowScene *windowScene;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)assistantDidAppear:(id)arg1 windowScene:(id)arg2;
- (void)assistantDidDisappear:(id)arg1 windowScene:(id)arg2;
- (id)assistantRootViewController;
- (void)assistantWillAppear:(id)arg1 windowScene:(id)arg2;
- (void)assistantWillDisappear:(id)arg1 windowScene:(id)arg2;
- (void)dismissAssistantViewIfNecessary;
- (void)dismissAssistantViewIfNecessaryForGestureTranslation:(struct CGPoint { double x1; double x2; })arg1 velocity:(struct CGPoint { double x1; double x2; })arg2;
- (void)dismissAssistantViewIfNecessaryWithAnimation:(long long)arg1;
- (void)dismissAssistantViewIfNecessaryWithAnimation:(long long)arg1 completion:(id /* block */)arg2;
- (id)initWithWindowScene:(id)arg1;
- (bool)isVisible;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (id)window;
- (id)windowScene;

@end
