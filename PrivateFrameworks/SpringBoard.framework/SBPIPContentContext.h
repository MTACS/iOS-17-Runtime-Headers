
@interface SBPIPContentContext : NSObject {
    SBPIPContainerViewController * _containerViewController;
    SBPictureInPictureWindow * _window;
    SBWindowScene * _windowScene;
}

@property (nonatomic, readonly) SBPIPContainerViewController *containerViewController;
@property (nonatomic, readonly) long long contentZOrderPriority;
@property (nonatomic, retain) SBPictureInPictureWindow *window;
@property (nonatomic, retain) SBWindowScene *windowScene;

- (void).cxx_destruct;
- (id)containerViewController;
- (long long)contentZOrderPriority;
- (id)debugDescription;
- (id)initWithWindowScene:(id)arg1 containerViewController:(id)arg2;
- (void)setWindow:(id)arg1;
- (void)setWindowScene:(id)arg1;
- (id)window;
- (id)windowScene;

@end
