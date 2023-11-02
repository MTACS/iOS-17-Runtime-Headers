
@interface PFLInvernessService : NSObject <PFLNetworkProvider> {
    CKContainer * _container;
}

@property (nonatomic, retain) CKContainer *container;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_appBundleIdentifier;
- (id)_taskConfigurationsFromPFLTasks:(id)arg1;
- (id)_teamIdentifier;
- (id)container;
- (void)fetchModelForTask:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchTasks:(id /* block */)arg1;
- (id)init;
- (void)setContainer:(id)arg1;
- (void)uploadDeviceResult:(id)arg1 completion:(id /* block */)arg2;

@end
