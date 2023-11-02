
@interface FACircleRemoteUIDelegate : NSObject <RemoteUIControllerDelegate> {
    bool  _accumulateDismissInfo;
    RUIPage * _cachedPage;
    NSURLRequest * _cachedRequest;
    FACircleContext * _context;
    <FACircleRemoteUIDelegateDelegate> * _delegate;
    NSDictionary * _dismissInfo;
    NSArray * _emergencyContacts;
    FAProfilePictureStore * _familyPictureStore;
    bool  _isReplacing;
    NSMutableDictionary * _objectModelDecorators;
    NSArray * _recommendations;
    FARequestConfigurator * _requestConfigurator;
    AAUIServerUIHookHandler * _serverHookHandler;
    FAInviteSuggestions * _suggester;
}

@property (nonatomic, readonly) FACircleContext *context;
@property (readonly, copy) NSString *debugDescription;
@property <FACircleRemoteUIDelegateDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *dismissInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_broadcastServicesDidChangeNotification;
- (void)_handleObjectModelChangeForController:(id)arg1 objectModel:(id)arg2 isModal:(bool)arg3;
- (void)_notifyDelegateOfCompletionWithSuccess:(bool)arg1 error:(id)arg2;
- (void)_reportRequestFailureWithResponse:(id)arg1;
- (void)_setUserInteractionForRUIPage:(id)arg1 enabled:(bool)arg2;
- (void)_updateDismissInfo:(id)arg1;
- (void)configureHookHandlersForRUIController:(id)arg1;
- (id)context;
- (id)delegate;
- (id)dismissInfo;
- (id)getEmergencyContacts;
- (id)getIMessageHandlesForRecommendations;
- (id)getInviteSuggestionsDependencies;
- (id)init;
- (id)initWithContext:(id)arg1 serverHookHandler:(id)arg2 pictureStore:(id)arg3;
- (void)remoteUIController:(id)arg1 didDismissModalNavigationWithObjectModels:(id)arg2;
- (void)remoteUIController:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)remoteUIController:(id)arg1 didPresentObjectModel:(id)arg2 modally:(bool)arg3;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3;
- (void)remoteUIController:(id)arg1 didRefreshObjectModel:(id)arg2;
- (void)remoteUIController:(id)arg1 didRemoveObjectModel:(id)arg2;
- (void)remoteUIController:(id)arg1 loadResourcesForObjectModel:(id)arg2 completion:(id /* block */)arg3;
- (void)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(bool)arg3;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDismissInfo:(id)arg1;
- (void)setIMessageHandlesForRecommendations:(id)arg1;

@end
