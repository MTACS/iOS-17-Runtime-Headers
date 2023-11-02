
@interface INUIRemoteViewController : _UIRemoteViewController <INUIExtensionHostContextDelegate, _INUIRemoteViewControllerHosting> {
    NSExtension * _activeExtension;
    INUIExtensionViewControllerConfiguration * _configuration;
    <NSCopying> * _currentRequestIdentifier;
    <INUIRemoteViewControllerDelegate> * _delegate;
    _INUIExtensionHostContext * _extensionHostContext;
    bool  _needsStateUpdate;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredContentSize;
    INUIExtensionRequestInfo * _requestInfo;
    INWidgetDescriptor * _widgetDescriptor;
    bool  _widgetHost;
}

@property (nonatomic, retain) NSExtension *activeExtension;
@property (nonatomic, copy) INUIExtensionViewControllerConfiguration *configuration;
@property (nonatomic, retain) <NSCopying> *currentRequestIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <INUIRemoteViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INUIExtensionHostContext *extensionHostContext;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool needsStateUpdate;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredContentSize;
@property (setter=_setRequestInfo:, nonatomic, copy) INUIExtensionRequestInfo *requestInfo;
@property (readonly) Class superclass;
@property (nonatomic, retain) INWidgetDescriptor *widgetDescriptor;
@property (getter=isWidgetHost, nonatomic) bool widgetHost;

+ (void)_attemptToConnectToRemoteViewControllerForRemainingExtensions:(id)arg1 delegate:(id)arg2 connectionHandler:(id /* block */)arg3;
+ (void)_getWidgetHostingRemoteViewControllerWithIntent:(id)arg1 descriptor:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)_getWidgetHostingRemoteViewControllerWithIntent:(id)arg1 extensionMatchingError:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)_requestRemoteViewControllerForSnippetExtensionInteraction:(id)arg1 delegate:(id)arg2 connectionHandler:(id /* block */)arg3;
+ (void)_requestRemoteViewControllerWithRequestInfo:(id)arg1 delegate:(id)arg2 reply:(id /* block */)arg3;
+ (void)attemptToConnectToRemoteViewControllerForRemainingExtensions:(id)arg1 delegate:(id)arg2 connectionHandler:(id /* block */)arg3;
+ (void)requestRemoteViewControllerForInteraction:(id)arg1 delegate:(id)arg2 connectionHandler:(id /* block */)arg3;
+ (void)requestRemoteViewControllerWithRequestInfo:(id)arg1 reply:(id /* block */)arg2;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_errorHandlingServiceViewControllerProxy;
- (void)_queryRepresentedPropertiesWithCompletion:(id /* block */)arg1;
- (void)_setRequestInfo:(id)arg1;
- (void)_updateExtensionContextStateWithCompletion:(id /* block */)arg1;
- (id)activeExtension;
- (id)configuration;
- (void)configureForParameters:(id)arg1 ofInteraction:(id)arg2 interactiveBehavior:(unsigned long long)arg3 context:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)configureWithInteraction:(id)arg1 context:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)configureWithInteraction:(id)arg1 context:(unsigned long long)arg2 errorHandlingCompletion:(id /* block */)arg3;
- (id)currentRequestIdentifier;
- (id)delegate;
- (void)desiresInteractivity:(id /* block */)arg1;
- (id)disconnect;
- (id)extensionHostContext;
- (void)extensionHostContext:(id)arg1 wantsToHandleIntent:(id)arg2;
- (void)extensionHostContextWillBeginEditing:(id)arg1;
- (bool)isWidgetHost;
- (bool)needsStateUpdate;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)requestCancellation;
- (id)requestInfo;
- (void)setActiveExtension:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setCurrentRequestIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 completion:(id /* block */)arg2;
- (void)setExtensionHostContext:(id)arg1;
- (void)setIdealConfiguration:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setNeedsStateUpdate:(bool)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setWidgetDescriptor:(id)arg1;
- (void)setWidgetHost:(bool)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (id)widgetDescriptor;

@end
