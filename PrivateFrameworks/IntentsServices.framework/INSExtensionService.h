
@interface INSExtensionService : NSObject <INSAnalyticsDataSource, INSAnalyticsObserver, INSAppLaunchCommandDelegate> {
    NSString * _currentBundleIdForDisplay;
    INCExtensionConnection * _currentConnection;
    <INSExtensionServiceDelegate> * _delegate;
    INExtensionContext * _extensionContext;
    NSDictionary * _options;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_queue> * _requestDelegateQueue;
}

@property (nonatomic, copy) NSArray *airPlayRouteIdentifiers;
@property (nonatomic, readonly, copy) NSArray *commandIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <INSExtensionServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) INExtensionContext *extensionContext;
@property (nonatomic, readonly, copy) NSString *groupIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDictionary *options;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_connectionForIntent:(id)arg1;
- (bool)_errorImpliesCloudRelay:(id)arg1;
- (id)_extensionInputItems;
- (void)_extensionRequestDidFinishForIntent:(id)arg1 error:(id)arg2;
- (void)_extensionRequestWillStartForIntent:(id)arg1;
- (bool)_isVoiceShortcutsRemoteExecutionUnavailable:(id)arg1;
- (void)_logEventWithType:(long long)arg1 context:(id)arg2 contextNoCopy:(bool)arg3;
- (void)_logPrewarmDidEndWithCommand:(id)arg1 applicationIdentifier:(id)arg2 wasPrewarmed:(bool)arg3 completionHandler:(id /* block */)arg4;
- (bool)_prewarmExtensionWithIntent:(id)arg1 applicationIdentifier:(id)arg2 command:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_requiresHandlingCommand:(id)arg1 completion:(id /* block */)arg2;
- (bool)_shouldPrepareAudioSessionForCommand:(id)arg1 intent:(id)arg2;
- (id)_siriLanguageCode;
- (id)_updatedEventContextWithExtensionLoadType:(id)arg1 wasPrewarmed:(bool)arg2;
- (id)airPlayRouteIdentifiers;
- (id)analytics:(id)arg1 contextDictionaryForCommand:(id)arg2;
- (id)analytics:(id)arg1 contextDictionaryForError:(id)arg2;
- (void)analytics:(id)arg1 needsToLogEventWithType:(long long)arg2 context:(id)arg3 contextNoCopy:(bool)arg4;
- (id)commandIdentifiers;
- (id /* block */)completionHandlerForAppLaunchCommand:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)delegate;
- (id)extensionContext;
- (id)groupIdentifier;
- (void)handleCommand:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)handleCommand:(id)arg1 fromRemoteDevice:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (id)initWithOptions:(id)arg1;
- (id)options;
- (void)resetExternalResources;
- (void)setAirPlayRouteIdentifiers:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
