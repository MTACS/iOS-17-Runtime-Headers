
@interface MRExternalDeviceTransportConnection : NSObject {
    unsigned int  _connectOptions;
    NSDictionary * _connectUserInfo;
    <MRExternalDeviceTransportConnectionDelegate> * _delegate;
    NSString * _destinationGroupUID;
    NSString * _destinationOutputDeviceUID;
    NSString * _label;
}

@property (nonatomic) unsigned int connectOptions;
@property (nonatomic, retain) NSDictionary *connectUserInfo;
@property (nonatomic) <MRExternalDeviceTransportConnectionDelegate> *delegate;
@property (nonatomic, retain) NSString *destinationGroupUID;
@property (nonatomic, retain) NSString *destinationOutputDeviceUID;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, retain) NSString *label;

- (void).cxx_destruct;
- (void)_notifyDelegateDidCloseWithError:(id)arg1;
- (void)_notifyDelegateDidReceiveData:(id)arg1;
- (void)_notifyDelegateHasSpaceAvailable;
- (void)close;
- (void)closeWithError:(id)arg1;
- (unsigned int)connectOptions;
- (id)connectUserInfo;
- (id)delegate;
- (id)destinationGroupUID;
- (id)destinationOutputDeviceUID;
- (id)error;
- (id)exportEndpoint:(id)arg1;
- (id)exportEndpoints:(id)arg1;
- (id)exportOutputDevice:(id)arg1 endpoint:(id)arg2;
- (id)exportOutputDevices:(id)arg1 endpoint:(id)arg2;
- (bool)hasAccessToPlayerPath:(id)arg1;
- (bool)isAllowedToSendCommand:(unsigned int)arg1;
- (bool)isAllowedToSendMessageType:(unsigned long long)arg1;
- (bool)isValid;
- (id)label;
- (unsigned long long)sendTransportData:(id)arg1 options:(id)arg2;
- (void)setConnectOptions:(unsigned int)arg1;
- (void)setConnectUserInfo:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDestinationGroupUID:(id)arg1;
- (void)setDestinationOutputDeviceUID:(id)arg1;
- (void)setLabel:(id)arg1;

@end
