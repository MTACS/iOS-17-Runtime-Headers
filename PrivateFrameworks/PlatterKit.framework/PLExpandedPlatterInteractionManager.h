
@interface PLExpandedPlatterInteractionManager : NSObject <UIContextMenuInteractionDelegate_Private> {
    id /* block */  _cachedCompletion;
    UIContextMenuInteraction * _contextMenuInteraction;
    <PLExpandedPlatterInteractionManagerDelegate> * _delegate;
    struct { 
        unsigned int delegateImplementsIdentifier : 1; 
        unsigned int delegateImplementsContentViewController : 1; 
        unsigned int delegateImplementsMenu : 1; 
        unsigned int delegateImplementsShouldBeginInteraction : 1; 
        unsigned int delegateImplementsWillPresentContent : 1; 
        unsigned int delegateImplementsShouldCommitInteraction : 1; 
        unsigned int delegateImplementsShouldAllowInitialSwipeToDismiss : 1; 
        unsigned int delegateImplementsWillDismissContent : 1; 
        unsigned int delegateImplementsShouldAllowLongPressGesture : 1; 
    }  _expandedPlatterInteractionManagerDelegateFlags;
    bool  _initialPanOccurred;
    UIViewController<PLExpandedPlatterInteractionHosting> * _presentingViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <PLExpandedPlatterInteractionManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIViewController<PLExpandedPlatterInteractionHosting> *presentingViewController;
@property (getter=reachedForceThreshold, nonatomic, readonly) bool reachedForceThreshold;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (unsigned long long)_activationMethodForContextMenuInteraction:(id)arg1;
- (id)_contextMenuConfigurationIdentifier;
- (void)_contextMenuInteraction:(id)arg1 shouldPresentWithCompletion:(id /* block */)arg2;
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;
- (bool)_contextMenuInteractionShouldAllowSwipeToDismiss:(id)arg1;
- (id)_identifier;
- (void)_setPresentingViewControllerHighlighted:(bool)arg1 animated:(bool)arg2;
- (id)contextMenuInteraction:(id)arg1 configuration:(id)arg2 highlightPreviewForItemWithIdentifier:(id)arg3;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (id)delegate;
- (void)dismiss;
- (id)initWithPresentingViewController:(id)arg1 delegate:(id)arg2;
- (void)presentAtLocation:(struct CGPoint { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (id)presentingViewController;
- (bool)reachedForceThreshold;
- (void)updateVisibleMenuWithBlock:(id /* block */)arg1;

@end
