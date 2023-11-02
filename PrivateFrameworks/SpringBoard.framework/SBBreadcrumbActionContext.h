
@interface SBBreadcrumbActionContext : NSObject {
    UISystemNavigationAction * _action;
    unsigned long long  _analyticsType;
    NSDictionary * _appLinkState;
    NSString * _breadcrumbAppBundleID;
    NSString * _breadcrumbSceneID;
    NSString * _breadcrumbTitle;
    NSDictionary * _destinationContexts;
    bool  _didCaptureContext;
    unsigned long long  _lastSource;
    NSString * _previousSideBundleId;
    id /* block */  _responseHandler;
    bool  _wasFromAssistant;
    bool  _wasFromSpotlight;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
