
@interface SOSStatusReporter : NSObject <SOSStatusManagerClientProtocol> {
    NSXPCConnection * _connection;
    int  _connectionRequestNotificationToken;
    long long  _flowState;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic) int connectionRequestNotificationToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long flowState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_updateSOSFlowState;
- (id)connection;
- (int)connectionRequestNotificationToken;
- (long long)flowState;
- (void)handleSosdLaunch;
- (id)init;
- (void)setConnection:(id)arg1;
- (void)setConnectionRequestNotificationToken:(int)arg1;
- (void)setFlowState:(long long)arg1;
- (void)updateSOSFlowState:(long long)arg1;

@end
