
@interface SKCloudServiceController : NSObject {
    bool  _allowsPromptingForPrivacyAcknowledgement;
    ICCloudServiceStatusMonitor * _cloudServiceStatusMonitor;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (setter=_setAllowsPromptingForPrivacyAcknowledgement:, nonatomic) bool _allowsPromptingForPrivacyAcknowledgement;

+ (id)_publicErrorForPrivateError:(id)arg1;
+ (long long)authorizationStatus;
+ (void)requestAuthorization:(id /* block */)arg1;

- (void).cxx_destruct;
- (bool)_allowsPromptingForPrivacyAcknowledgement;
- (id)_cloudServiceStatusMonitorWithError:(id*)arg1;
- (void)_handleCapabilitiesDidChangeNotification:(id)arg1;
- (void)_handleStorefrontCountryCodeDidChangeNotification:(id)arg1;
- (void)_handleStorefrontIdentifierDidChangeNotification:(id)arg1;
- (void)_setAllowsPromptingForPrivacyAcknowledgement:(bool)arg1;
- (void)dealloc;
- (id)init;
- (void)requestCapabilitiesWithCompletionHandler:(id /* block */)arg1;
- (void)requestPersonalizationTokenForClientToken:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)requestStorefrontCountryCodeWithCompletionHandler:(id /* block */)arg1;
- (void)requestStorefrontIdentifierWithCompletionHandler:(id /* block */)arg1;
- (void)requestUserTokenForDeveloperToken:(id)arg1 completionHandler:(id /* block */)arg2;

@end
