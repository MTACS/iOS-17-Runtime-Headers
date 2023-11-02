
@interface _EXExtensionProcess : NSObject <MTSDeviceSetupExtensionProcess, RBSProcessIdentifier, _EXExtensionProcessObserver> {
    _EXHostConfiguration * _configuration;
    _EXExtensionProcessHandle * _internalExtensionProcess;
    id /* block */  _invalidationHandler;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _invalidationHandlerLock;
}

@property (readonly) struct { unsigned int x1[8]; } auditToken;
@property (readonly) _EXHostConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) _EXExtensionProcessHandle *internalExtensionProcess;
@property (copy) id /* block */ invalidationHandler;
@property struct os_unfair_lock_s { unsigned int x1; } invalidationHandlerLock;
@property (readonly) int pid;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/ExtensionFoundation.framework/ExtensionFoundation

+ (id)_extensionProcessBackgroundQueue;
+ (void)extensionProcessWithConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)extensionProcessWithConfiguration:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (struct { unsigned int x1[8]; })auditToken;
- (id)configuration;
- (id)initWithInternalExtensionProcess:(id)arg1;
- (id)initWithInternalExtensionProcess:(id)arg1 invalidationHandler:(id /* block */)arg2;
- (id)internalExtensionProcess;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (struct os_unfair_lock_s { unsigned int x1; })invalidationHandlerLock;
- (id)makeXPCConnectionWithError:(id*)arg1;
- (bool)matchesProcess:(id)arg1;
- (id)newXPCConnectionWithError:(id*)arg1;
- (int)pid;
- (void)processDidInvalidate:(id)arg1;
- (id)processPredicate;
- (int)rbs_pid;
- (void)setInternalExtensionProcess:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setInvalidationHandlerLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;

// Image: /System/Library/Frameworks/MatterSupport.framework/MatterSupport

- (id)makeMTSXPCConnectionWithError:(id*)arg1;

@end
