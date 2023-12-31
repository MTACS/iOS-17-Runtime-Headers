
@interface WPAWDL : WPClient {
    <WPAWDLDelegate> * _delegate;
    bool  _useSmallerAirDrop;
}

@property (nonatomic) <WPAWDLDelegate> *delegate;
@property bool useSmallerAirDrop;

+ (id)generateDataFromEmails:(id)arg1;
+ (id)hashEmail:(id)arg1;

- (void).cxx_destruct;
- (void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2;
- (void)advertisingPendingOfType:(unsigned char)arg1;
- (void)advertisingStartedOfType:(unsigned char)arg1;
- (void)advertisingStoppedOfType:(unsigned char)arg1 withError:(id)arg2;
- (id)clientAsString;
- (id)delegate;
- (void)deviceDiscovered:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 machName:(id)arg3;
- (void)invalidate;
- (void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2;
- (void)scanningStartedOfType:(unsigned char)arg1;
- (void)scanningStoppedOfType:(unsigned char)arg1;
- (void)setDelegate:(id)arg1;
- (void)setUseSmallerAirDrop:(bool)arg1;
- (void)startConnectionlessAWDLServiceAdvertisingWithData:(id)arg1;
- (void)startConnectionlessAWDLServiceScanning;
- (void)stateDidChange:(long long)arg1;
- (void)stopConnectionlessAWDLServiceAdvertising;
- (void)stopConnectionlessAWDLServiceScanning;
- (void)updateAdvertisingRequest:(id)arg1 withUpdate:(id /* block */)arg2;
- (bool)useSmallerAirDrop;

@end
