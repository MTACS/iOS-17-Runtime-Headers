
@interface HMDApplicationRegistry : HMFObject <HMFLogging, LSApplicationWorkspaceObserverProtocol> {
    NSMutableSet * _applications;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    LSApplicationWorkspace * _workspace;
}

@property (readonly, copy) NSArray *applications;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)sharedRegistry;

- (void).cxx_destruct;
- (id)applicationInfoForBundleIdentifier:(id)arg1;
- (id)applicationInfoForBundleURL:(id)arg1;
- (id)applications;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)dealloc;
- (id)init;

@end
