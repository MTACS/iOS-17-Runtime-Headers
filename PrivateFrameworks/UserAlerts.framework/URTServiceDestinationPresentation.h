
@interface URTServiceDestinationPresentation : NSObject <URTAlertServerToClientInterface, URTDestinationPresenting> {
    URTAlert * _alert;
    BSServiceConnection * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    <URTDestinationPresentationDelegate> * _delegate;
    long long  _destination;
    long long  _preferredPresentationStyle;
    NSObject<OS_dispatch_queue> * _remoteTargetQueue;
}

@property (nonatomic, readonly) URTAlert *alert;
@property (nonatomic, readonly) BSServiceConnection *connection;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *connectionQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <URTDestinationPresentationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long destination;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long preferredPresentationStyle;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *remoteTargetQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleConnectionActivated;
- (void)_handleConnectionInterrupted;
- (id)alert;
- (id)connection;
- (id)connectionQueue;
- (id)delegate;
- (id)description;
- (long long)destination;
- (void)dismiss;
- (oneway void)handleCancelAction;
- (oneway void)handleDefaultAction;
- (oneway void)handleOtherAction;
- (id)initWithAlert:(id)arg1 forDestination:(long long)arg2 preferredPresentationStyle:(long long)arg3;
- (void)invalidate;
- (long long)preferredPresentationStyle;
- (void)present;
- (id)remoteTargetQueue;
- (void)setDelegate:(id)arg1;

@end
