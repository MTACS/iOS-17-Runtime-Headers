
@interface HMDDataStreamStreamProtocol : NSObject <HMDDataStreamProtocol, HMFLogging> {
    <HMDDataStreamProtocolDelegate> * _dataStream;
    NSMapTable * _sockets;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (readonly) <HMDDataStreamProtocolDelegate> *dataStream;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSMapTable *sockets;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)protocolName;

- (void).cxx_destruct;
- (void)_closeAllSocketsWithError:(id)arg1;
- (void)_notifyActiveStatusChangedFromPreviousValue:(bool)arg1;
- (void)_reevaluateTrafficClassForDataStream;
- (id)dataStream;
- (void)dataStream:(id)arg1 didFailWithError:(id)arg2;
- (void)dataStream:(id)arg1 didReceiveEvent:(id)arg2 header:(id)arg3 payload:(id)arg4;
- (void)dataStream:(id)arg1 didReceiveRequest:(id)arg2 header:(id)arg3 payload:(id)arg4;
- (void)dataStream:(id)arg1 didReceiveResponse:(id)arg2 header:(id)arg3 payload:(id)arg4;
- (void)dataStreamDidClose:(id)arg1;
- (void)dataStreamDidOpen:(id)arg1;
- (void)dataStreamInitiatedClose:(id)arg1;
- (void)evaluateOptionsForSocket:(id)arg1;
- (id)initWithDataStream:(id)arg1;
- (bool)isActive;
- (void)registerSocket:(id)arg1;
- (void)sendData:(id)arg1 socket:(id)arg2 completion:(id /* block */)arg3;
- (id)sockets;
- (void)unregisterSocket:(id)arg1;

@end
