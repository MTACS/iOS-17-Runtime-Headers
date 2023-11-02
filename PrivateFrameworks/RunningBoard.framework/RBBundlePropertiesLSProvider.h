
@interface RBBundlePropertiesLSProvider : NSObject <LSApplicationWorkspaceObserverProtocol> {
    <RBBundlePropertiesLSProviderDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSCache * _propertiesByIdentity;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RBBundlePropertiesLSProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)init;
- (id)propertiesForIdentity:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
