
@interface WFShareAction : WFAction <WFAppListProvider, WFStandaloneShortcutAction> {
    <NSObject> * _supportedExtensionsChangedObserver;
}

@property (nonatomic, readonly, copy) NSString *associatedAppBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) <NSObject> *supportedExtensionsChangedObserver;

+ (id)sharedEnumerator;
+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (void).cxx_destruct;
- (id)anyExtensionBundleIdentifierForIdentifier:(id)arg1 extensionPointIdentifier:(id)arg2 isContentManaged:(bool)arg3 error:(id*)arg4;
- (id)appEnumerator;
- (id)associatedAppBundleIdentifier;
- (id)contentDestinationWithError:(id*)arg1;
- (void)dealloc;
- (void)generateStandaloneShortcutRepresentation:(id /* block */)arg1;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;
- (void)initializeParameters;
- (id)overrideExtensionIdentifier;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)selectedIdentifier;
- (void)setSupportedExtensionsChangedObserver:(id)arg1;
- (void)showUIWithArchivedItems:(id)arg1 isContentManaged:(bool)arg2 extensionBundleIdentifier:(id)arg3;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;
- (id)supportedExtensionsChangedObserver;

@end
