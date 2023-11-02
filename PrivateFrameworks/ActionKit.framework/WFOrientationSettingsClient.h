
@interface WFOrientationSettingsClient : WFSettingsClient <WFBooleanStateSetting> {
    AXSpringBoardServer * _server;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AXSpringBoardServer *server;
@property (readonly) Class superclass;

+ (void)createClientWithCompletionHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)getStateWithCompletionHandler:(id /* block */)arg1;
- (id)initWithSpringBoardServer:(id)arg1;
- (id)server;
- (void)setState:(bool)arg1 completionHandler:(id /* block */)arg2;

@end
