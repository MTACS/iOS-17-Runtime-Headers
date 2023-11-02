
@interface SWLocalDatastoreSetupTask : NSObject <SWSetupTask> {
    <SWDatastoreManager> * _datastoreManager;
    <SWScriptsManager> * _scriptsManager;
}

@property (nonatomic, readonly) <SWDatastoreManager> *datastoreManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) <SWScriptsManager> *scriptsManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)datastoreManager;
- (id)identifier;
- (id)initWithDatastoreManager:(id)arg1 scriptsManager:(id)arg2;
- (void)performSetup;
- (id)scriptsManager;

@end
