
@interface URTAlertConnection : NSObject {
    URTAlert * _alert;
    BSServiceConnection * _connection;
}

@property (nonatomic, retain) URTAlert *alert;
@property (nonatomic, readonly) BSServiceConnection *connection;

- (void).cxx_destruct;
- (id)alert;
- (id)connection;
- (id)initWithConnection:(id)arg1;
- (void)setAlert:(id)arg1;

@end
