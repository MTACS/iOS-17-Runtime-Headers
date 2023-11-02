
@interface MRRapportTransportConnection : MRExternalDeviceTransportConnection {
    RPCompanionLinkClient * _connection;
    NSString * _eventID;
    NSString * _sessionUID;
}

@property (nonatomic, retain) RPCompanionLinkClient *connection;
@property (nonatomic, readonly) NSString *eventID;
@property (nonatomic, readonly) NSString *sessionUID;

- (void).cxx_destruct;
- (void)_registerCallbacks;
- (bool)_targetDeviceMatch:(id)arg1 deviceUID:(id)arg2;
- (void)closeWithError:(id)arg1;
- (id)connection;
- (id)eventID;
- (id)initWithCompanionLinkClient:(id)arg1 device:(id)arg2 sessionUID:(id)arg3;
- (id)initWithDeviceUID:(id)arg1 sessionUID:(id)arg2 targetDevice:(id*)arg3 error:(id*)arg4;
- (bool)isValid;
- (id)runLoop;
- (unsigned long long)sendTransportData:(id)arg1 options:(id)arg2;
- (id)sessionUID;
- (void)setConnection:(id)arg1;
- (void)setRunLoop:(id)arg1;

@end
