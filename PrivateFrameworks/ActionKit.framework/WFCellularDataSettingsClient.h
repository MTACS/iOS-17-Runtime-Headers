
@interface WFCellularDataSettingsClient : WFSettingsClient <WFBooleanStateSetting> {
    struct __CTServerConnection { } * _connection;
}

@property (nonatomic, readonly) struct __CTServerConnection { }*connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)createClientWithCompletionHandler:(id /* block */)arg1;

- (struct __CTServerConnection { }*)connection;
- (void)dealloc;
- (void)getStateWithCompletionHandler:(id /* block */)arg1;
- (id)initWithServerConnection:(struct __CTServerConnection { }*)arg1;
- (void)setState:(bool)arg1 completionHandler:(id /* block */)arg2;

@end
