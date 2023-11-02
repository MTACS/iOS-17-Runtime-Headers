
@interface UIRemoteInputViewHost : NSObject <_UIRemoteInputViewHostWindowDelegate> {
    UIViewController * _assistantViewController;
    UIWindow * _assistantViewWindow;
    UIViewController * _inputRootViewController;
    UIView * _inputView;
    NSLayoutConstraint * _inputViewBottomConstraint;
    UIInputViewController * _inputViewController;
    NSLayoutConstraint * _inputViewHeightConstraint;
    UIInputViewSet * _inputViewSet;
    NSLayoutConstraint * _inputViewWidthConstraint;
    UIWindow * _inputViewWindow;
    struct CGSize { 
        double width; 
        double height; 
    }  _previousInputViewSize;
    bool  _shouldShowDockView;
}

@property (nonatomic, readonly) UIRemoteInputViewInfo *assistantViewInfo;
@property (nonatomic, readonly) UIWindow *assistantViewWindow;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIRemoteInputViewInfo *inputViewInfo;
@property (nonatomic, retain) UIInputViewSet *inputViewSet;
@property (nonatomic, readonly) UIWindow *inputViewWindow;
@property (nonatomic) bool shouldShowDockView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assistantViewInfo;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })assistantViewInsets;
- (id)assistantViewWindow;
- (id)inputViewInfo;
- (id)inputViewSet;
- (id)inputViewWindow;
- (id)remoteAssistantItemForResponder:(id)arg1;
- (id)rtiGroupsForBarButtonItemGroups:(id)arg1;
- (void)setInputViewSet:(id)arg1;
- (void)setShouldShowDockView:(bool)arg1;
- (id)settingsScene;
- (bool)shouldShowDockView;
- (bool)updateAssistantViewIfNecessary;
- (bool)updateCustomInputViewIfNecessary;
- (void)updateInputViewsIfNecessary;

@end
