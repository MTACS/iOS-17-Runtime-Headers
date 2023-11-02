
@interface AXIDSServices : NSObject <AXUIClientDelegate> {
    NSArray * _cachedConnectedDevices;
    NSHashTable * _clients;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _clientsLock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _connectedDevicesLock;
    AXUIClient * _idsServerClient;
    bool  _isConnectingToAXUIServer;
    <AXUIService> * _localService;
    NSObject<OS_dispatch_queue> * _localServiceQueue;
}

@property (nonatomic, retain) NSArray *cachedConnectedDevices;
@property (nonatomic, readonly) NSArray *connectedDevices;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AXUIClient *idsServerClient;
@property (nonatomic) bool isConnectingToAXUIServer;
@property (nonatomic, readonly) <AXUIService> *localService;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *localServiceQueue;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handleConnectedDevicesChanged:(id)arg1;
- (void)_handleIncomingDataWithMessage:(id)arg1;
- (id)_init;
- (void)_initializeServerConnection;
- (void)_performBlockOnClients:(id /* block */)arg1;
- (void)_sendAsynchronousMessage:(id)arg1 withMessageID:(unsigned long long)arg2;
- (id)_sendSynchronousMessage:(id)arg1 withMessageID:(unsigned long long)arg2;
- (id)cachedConnectedDevices;
- (id)connectedDevices;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1;
- (bool)containsClient:(id)arg1;
- (void)deregisterForIncomingData:(id)arg1;
- (void)handleMessage:(id)arg1 withMessageID:(unsigned long long)arg2;
- (id)idsServerClient;
- (bool)isConnectingToAXUIServer;
- (id)localService;
- (id)localServiceQueue;
- (id)publishData:(id)arg1;
- (id)publishData:(id)arg1 priority:(unsigned long long)arg2 requestingResponse:(bool)arg3;
- (id)publishData:(id)arg1 requestingResponse:(bool)arg2;
- (id)publishDirectIDSData:(id)arg1;
- (id)publishDirectIDSMessage:(id)arg1;
- (id)publishMessage:(id)arg1;
- (id)publishMessage:(id)arg1 priority:(unsigned long long)arg2 requestingResponse:(bool)arg3;
- (id)publishMessage:(id)arg1 requestingResponse:(bool)arg2;
- (id)publishResourceAtURL:(id)arg1;
- (id)publishResourceAtURL:(id)arg1 priority:(unsigned long long)arg2 requestingResponse:(bool)arg3;
- (id)publishResourceAtURL:(id)arg1 requestingResponse:(bool)arg2;
- (void)registerForIncomingData:(id)arg1;
- (id)sendPublishMessageToServer:(id)arg1;
- (void)setCachedConnectedDevices:(id)arg1;
- (void)setIsConnectingToAXUIServer:(bool)arg1;
- (void)setLocalServiceQueue:(id)arg1;
- (bool)shouldUseLocalServiceBundle;
- (id)userInterfaceClient:(id)arg1 accessQueueForProcessingMessageWithIdentifier:(unsigned long long)arg2;
- (id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned long long)arg3 error:(id*)arg4;

@end
