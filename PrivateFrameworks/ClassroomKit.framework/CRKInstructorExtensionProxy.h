
@interface CRKInstructorExtensionProxy : NSObject <LSApplicationWorkspaceObserverProtocol> {
    NSUUID * mContextIdentifier;
    NSExtension * mInstructorExtension;
    LSApplicationWorkspace * mWorkspace;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedExtensionProxy;

- (void).cxx_destruct;
- (void)applicationInstallsDidStart:(id)arg1;
- (void)beginExtensionRequestWithCompletionBlock:(id /* block */)arg1;
- (void)configureInstructorExtensionAfterFetchError:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)dealloc;
- (void)establishEndpointWithCompletionBlock:(id /* block */)arg1;
- (id)extensionAttributesForExtensionIdentifier:(id)arg1 containingAppURL:(id)arg2;
- (void)fetchListenerEndpointForExtensionBundleIdentifier:(id)arg1 fromClassroomBundleWithURL:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)fetchListenerEndpointWithCompletionBlock:(id /* block */)arg1;
- (id)init;
- (bool)proxiesContainClassroomApp:(id)arg1;
- (void)resetExtension;

@end
