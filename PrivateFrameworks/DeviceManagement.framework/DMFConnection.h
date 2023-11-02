
@interface DMFConnection : NSObject <CATTaskClientDelegate, DMFTransportProvider> {
    unsigned long long  _connectionState;
    bool  _isSystemConnection;
    CATOperationQueue * _operationQueue;
    CATTaskClient * _taskClient;
    <DMFTransportProvider> * _transportProvider;
}

@property (nonatomic) unsigned long long connectionState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isSystemConnection;
@property (nonatomic, readonly) CATOperationQueue *operationQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CATTaskClient *taskClient;
@property (nonatomic, readonly) <DMFTransportProvider> *transportProvider;

// Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement

+ (id)connectionForAppleID:(id)arg1;
+ (id)connectionForUID:(unsigned int)arg1;
+ (id)currentUserConnection;
+ (id)sharedConnection;
+ (id)systemConnection;

- (void).cxx_destruct;
- (void)_operationDidFinish:(id)arg1 completion:(id /* block */)arg2;
- (void)_reconnectTaskClient;
- (id)batchOperationToPerformOperations:(id)arg1;
- (void)client:(id)arg1 didInterruptWithError:(id)arg2;
- (void)clientDidConnect:(id)arg1;
- (void)clientDidDisconnect:(id)arg1;
- (void)clientDidInvalidate:(id)arg1;
- (unsigned long long)connectionState;
- (void)dealloc;
- (id)initWithTransportProvider:(id)arg1 userInfo:(id)arg2;
- (id)initWithUserInfo:(id)arg1;
- (void)invalidate;
- (bool)isSystemConnection;
- (id)makeNewTransport;
- (id)operationQueue;
- (void)performRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)prepareOperationForRequest:(id)arg1;
- (void)setConnectionState:(unsigned long long)arg1;
- (void)setIsSystemConnection:(bool)arg1;
- (id)taskClient;
- (id)transportProvider;

// Image: /System/Library/PrivateFrameworks/MDM.framework/MDM

- (id)performRequest:(id)arg1 error:(id*)arg2;

@end
