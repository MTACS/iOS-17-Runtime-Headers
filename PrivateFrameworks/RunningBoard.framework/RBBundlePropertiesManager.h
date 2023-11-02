
@interface RBBundlePropertiesManager : NSObject <RBBundlePropertiesLSProviderDelegate, RBBundlePropertiesManaging, RBStateCapturing> {
    <RBBundlePropertiesManagerDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    RBBundlePropertiesLSProvider * _lsProvider;
    RBProcessIndex * _processIndex;
    RBBundlePropertiesBSXPCProvider * _xpcProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RBBundlePropertiesManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *stateCaptureTitle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addProcess:(id)arg1;
- (void)bundlePropertiesProvider:(id)arg1 didChangePropertiesForProcessIdentities:(id)arg2;
- (id)captureState;
- (id)debugDescription;
- (id)delegate;
- (id)init;
- (id)propertiesForIdentity:(id)arg1 identifier:(id)arg2;
- (void)removeProcess:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)stateCaptureTitle;

@end
