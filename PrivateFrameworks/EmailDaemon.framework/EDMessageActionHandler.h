
@interface EDMessageActionHandler : NSObject <EFLoggable, MEAppExtensionsObserver> {
    MEAppExtensionsController * _extensionsController;
    EFCancelationToken * _extensionsObserverCancelable;
    EFLocked * _remoteExtensions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *messageActionProviders;
@property (nonatomic, readonly, copy) NSArray *requiredHeaders;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (id)actionDecisionForMessage:(id)arg1 usingMessageActionProvider:(id)arg2;
- (id)actionProviderInterfacesByExtensionID;
- (void)dealloc;
- (void)extensionsMatched:(id)arg1;
- (void)extensionsNoLongerMatching:(id)arg1;
- (id)initWithExtensionsController:(id)arg1;
- (id)messageActionProviders;
- (id)requiredHeaders;

@end
