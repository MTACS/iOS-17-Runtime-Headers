
@interface LNEmbeddedApplicationConnection : LNApplicationConnection <NSXPCListenerDelegate> {
    FBSOpenApplicationService * _openApplicationService;
    PDCPreflightManager * _preflightManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FBSOpenApplicationService *openApplicationService;
@property (nonatomic, readonly) PDCPreflightManager *preflightManager;
@property (readonly) Class superclass;

+ (Class)connectionOptionsClass;
+ (id)optionsForAction:(id)arg1 interactionMode:(long long)arg2 source:(unsigned short)arg3;
+ (id)sharedOpenApplicationOperationQueue;

- (void).cxx_destruct;
- (void)connectWithOptions:(id)arg1;
- (void)enqueueOpenApplicationOperation:(id /* block */)arg1;
- (id)initWithBundleIdentifier:(id)arg1 appBundleIdentifier:(id)arg2 error:(id*)arg3;
- (id)openApplicationService;
- (void)openApplicationWithOptions:(id)arg1 connectionAction:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)preflightManager;
- (bool)refreshWithOptions:(id)arg1;
- (void)resumeOpenApplicationOperationQueue;

@end
