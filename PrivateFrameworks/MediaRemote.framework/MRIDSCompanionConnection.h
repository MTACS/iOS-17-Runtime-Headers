
@interface MRIDSCompanionConnection : NSObject <IDSServiceDelegate> {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSMutableDictionary * _destinationMessageHandlers;
    IDSDevice * _device;
    MRDeviceInfo * _deviceInfo;
    int  _firstUnlockToken;
    NSObject<OS_dispatch_queue> * _idsQueue;
    NSMutableDictionary * _messageHandlers;
    NSMutableDictionary * _responseHandlers;
    IDSService * _service;
    unsigned long long  _totalOutgoingMessageCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) IDSDevice *device;
@property (nonatomic, readonly) MRDeviceInfo *deviceInfo;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isConnected;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_configurationFromDestination:(id)arg1 session:(id)arg2;
- (unsigned long long)_generateMessageID;
- (void)_maybeDeviceConnectionStatusChanged;
- (bool)_sendMessage:(id)arg1 type:(id)arg2 destination:(id)arg3 session:(id)arg4 options:(id)arg5 priority:(long long)arg6 replyID:(id)arg7 response:(id /* block */)arg8;
- (id)description;
- (id)device;
- (id)deviceDebugName;
- (id)deviceInfo;
- (void)handleDidReceiveResetConnectionRequest;
- (id)init;
- (void)initializeService;
- (bool)isConnected;
- (id)name;
- (void)removeMessageHandlerForType:(id)arg1;
- (void)removeMessageHandlerForType:(id)arg1 destination:(id)arg2 session:(id)arg3;
- (void)resetConnection;
- (bool)sendMessage:(id)arg1 type:(id)arg2 destination:(id)arg3 session:(id)arg4 options:(id)arg5 priority:(long long)arg6;
- (bool)sendMessage:(id)arg1 type:(id)arg2 destination:(id)arg3 session:(id)arg4 options:(id)arg5 priority:(long long)arg6 response:(id /* block */)arg7;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)setDevice:(id)arg1;
- (void)setMessageHandler:(id /* block */)arg1 forType:(id)arg2;
- (void)setMessageHandler:(id /* block */)arg1 forType:(id)arg2 destination:(id)arg3 session:(id)arg4;

@end
