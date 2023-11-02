
@interface SWScriptsSetupTask : NSObject <SWSetupTask> {
    <SWScriptsManager> * _scriptsManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) <SWScriptsManager> *scriptsManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithScriptsManager:(id)arg1;
- (void)performSetup;
- (id)scriptsManager;

@end
