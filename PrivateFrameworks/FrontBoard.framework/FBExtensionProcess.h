
@interface FBExtensionProcess : FBProcess {
    FBSExtensionInfo * _extensionInfo;
    int  _hostPID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _hostProcessLock;
    FBProcess * _lock_hostProcess;
}

@property (nonatomic, readonly) FBSExtensionInfo *extensionInfo;
@property (nonatomic, readonly) int hostPID;
@property (nonatomic, readonly) FBProcess *hostProcess;

// Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard

- (void).cxx_destruct;
- (void)_finishInit;
- (id)extensionInfo;
- (int)hostPID;
- (id)hostProcess;
- (bool)isExtensionProcess;
- (id)succinctDescriptionBuilder;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

- (id)sb_bundleIdentifierWithFallback;

@end
