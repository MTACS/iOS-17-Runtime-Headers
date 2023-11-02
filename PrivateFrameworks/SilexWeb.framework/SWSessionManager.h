
@interface SWSessionManager : NSObject <SWSessionManager> {
    <SWLogger> * _logger;
    <SWScriptsManager> * _scriptsManager;
    <SWSession> * _session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SWLogger> *logger;
@property (nonatomic, readonly) <SWScriptsManager> *scriptsManager;
@property (nonatomic, readonly) <SWSession> *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithScriptsManager:(id)arg1 logger:(id)arg2;
- (id)logger;
- (void)refresh;
- (id)scriptsManager;
- (id)session;

@end
