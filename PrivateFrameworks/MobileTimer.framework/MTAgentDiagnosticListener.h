
@interface MTAgentDiagnosticListener : NSObject <MTAgentNotificationListener> {
    <MTAgentDiagnosticDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MTAgentDiagnosticDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addStateHandler;
- (id)delegate;
- (void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(id /* block */)arg3;
- (bool)handlesNotification:(id)arg1 ofType:(long long)arg2;
- (id)initWithDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
