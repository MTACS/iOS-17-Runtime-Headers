
@interface MRProtocolClientConnection : NSObject <MRExternalDeviceTransportConnectionDelegate, MSVMessageParserDelegate> {
    MRExternalDeviceTransportConnection * _connection;
    <MRProtocolClientConnectionDelegate> * _delegate;
    MRDeviceInfo * _deviceInfo;
    bool  _disconnected;
    NSError * _error;
    unsigned long long  _firstClientNanoseconds;
    unsigned long long  _firstDeviceTicks;
    NSString * _label;
    MSVMessageParser * _parser;
    NSMutableDictionary * _pendingReplyQueue;
    NSObject<OS_dispatch_queue> * _queue;
    MRSupportedProtocolMessages * _supportedMessages;
}

@property (nonatomic, readonly) MRExternalDeviceTransportConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MRProtocolClientConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MRDeviceInfo *deviceInfo;
@property (nonatomic, readonly) bool disconnected;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, retain) MRSupportedProtocolMessages *supportedMessages;

- (void).cxx_destruct;
- (id)connection;
- (id)dataForMessage:(id)arg1;
- (void)dealloc;
- (id)decryptData:(id)arg1 error:(id*)arg2;
- (id)delegate;
- (id)deviceInfo;
- (void)disconnectWithError:(id)arg1;
- (bool)disconnected;
- (id)encryptDataForMessage:(id)arg1;
- (id)error;
- (id)initWithConnection:(id)arg1 queue:(id)arg2;
- (bool)isValid;
- (id)label;
- (void)parser:(id)arg1 didParseMessage:(id)arg2;
- (id)queue;
- (void)sendMessage:(id)arg1;
- (void)sendMessage:(id)arg1 reply:(id /* block */)arg2;
- (void)sendMessage:(id)arg1 timeout:(double)arg2 reply:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)setDeviceInfo:(id)arg1;
- (void)setError:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setSupportedMessages:(id)arg1;
- (id)supportedMessages;
- (void)transport:(id)arg1 didReceiveData:(id)arg2;
- (void)transportDidClose:(id)arg1 error:(id)arg2;

@end
