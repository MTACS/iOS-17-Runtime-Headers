
@interface SBFluidSwitcherModifierTimelineController : NSObject {
    SBFluidSwitcherModifierTimelineViewController * _rootViewController;
    bool  _visible;
    UIWindow * _window;
    UIWindowScene * _windowScene;
}

@property (getter=isVisible, nonatomic) bool visible;

+ (bool)_isNoisyEvent:(id)arg1;

- (void).cxx_destruct;
- (void)addEntry:(id)arg1;
- (id)initWithWindowScene:(id)arg1;
- (bool)isVisible;
- (void)setVisible:(bool)arg1;
- (bool)wantsEvent:(id)arg1;

@end
