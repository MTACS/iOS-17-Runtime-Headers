
@interface UIKeyboardScenePresentationModeManager : NSObject {
    unsigned long long  _currentPresentationMode;
    <UIKeyboardScenePresentationModeManagerDelegate> * _delegate;
    bool  _enhancedWindowingModeEnabled;
}

@property (nonatomic) unsigned long long currentPresentationMode;
@property (nonatomic) <UIKeyboardScenePresentationModeManagerDelegate> *delegate;
@property (nonatomic) bool enhancedWindowingModeEnabled;
@property (nonatomic, readonly) unsigned long long presentationMode;

- (void).cxx_destruct;
- (void)_enhancedWindowingModeEnabledDidChange:(id)arg1;
- (unsigned long long)currentPresentationMode;
- (id)delegate;
- (unsigned long long)determinePresentationMode;
- (unsigned long long)determineiPadPresentationMode;
- (unsigned long long)determineiPhonePresentationMode;
- (void)didChangeToPresentationMode:(unsigned long long)arg1;
- (bool)enhancedWindowingModeEnabled;
- (void)enhancedWindowingModeEnabledDidChange:(bool)arg1;
- (unsigned long long)presentationMode;
- (void)setCurrentPresentationMode:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnhancedWindowingModeEnabled:(bool)arg1;

@end
