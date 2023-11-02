
@interface _UIFindNavigatorSceneComponent : NSObject <_UIFindNavigatorHosting, _UIFindNavigatorViewControllerDelegate, _UISceneComponentProviding, _UIViewSubtreeMonitor> {
    _UIFindNavigatorResponder * _findNavigatorResponder;
    _UIFindNavigatorViewController * _findNavigatorViewController;
    UIScene * _scene;
}

@property (getter=_scene, setter=_setScene:, nonatomic) UIScene *_scene;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _UIFindNavigatorResponder *findNavigatorResponder;
@property (nonatomic, retain) _UIFindNavigatorViewController *findNavigatorViewController;
@property (getter=isFindNavigatorVisible, nonatomic, readonly) bool findNavigatorVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sceneComponentForView:(id)arg1;

- (void).cxx_destruct;
- (bool)_keyboardIsPreservingFindNavigatorAsRestorableResponder;
- (void)_monitoredView:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (void)_monitoredView:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (bool)_monitorsView:(id)arg1;
- (id)_scene;
- (id)_searchableView;
- (void)_sendPlacementUpdate;
- (void)_setScene:(id)arg1;
- (void)dismissFindNavigatorEndingActiveSession:(bool)arg1;
- (id)findNavigatorResponder;
- (bool)findNavigatorShouldDismissOnResponderChange:(id)arg1;
- (id)findNavigatorViewController;
- (void)findNavigatorViewControllerDidRequestDismissal:(id)arg1;
- (void)findNavigatorViewControllerViewDidChangeIntrinsicContentSize:(id)arg1;
- (id)initWithScene:(id)arg1;
- (bool)isFindNavigatorVisible;
- (void)presentFindNavigatorWithFindSession:(id)arg1 showingReplace:(bool)arg2;
- (void)setFindNavigatorResponder:(id)arg1;
- (void)setFindNavigatorViewController:(id)arg1;

@end
