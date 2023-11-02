
@interface ICDeviceManager : NSObject <ICDeviceManagerProtocol> {
    bool  _controlAuthorizedOnce;
    NSMutableArray * _deviceHandles;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _deviceHandlesLock;
    NSDictionary * _deviceMatchingInfo;
    NSOperationQueue * _deviceOperationQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _deviceOperationQueueLock;
    bool  _deviceOperationQueueSuspended;
    NSMutableDictionary * _devices;
    NSXPCConnection * _managerConnection;
    unsigned int  _managerInvalidationCount;
    bool  _managerIsRunning;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSOperationQueue *deviceOperations;
@property (nonatomic, retain) NSMutableDictionary *devices;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCConnection *managerConnection;
@property (readonly) Class superclass;

- (void)addInitiatedOperation:(id)arg1;
- (void)addInteractiveOperation:(id)arg1;
- (void)addSelectorToInterface:(id)arg1 selectorString:(id)arg2 origin:(bool)arg3;
- (long long)closeDevice:(id)arg1 contextInfo:(void*)arg2;
- (void)closeDeviceHandle:(id)arg1;
- (void)closeDeviceImp:(id)arg1;
- (long long)closeSession:(id)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)closeSessionImp:(id)arg1;
- (void)dealloc;
- (long long)deleteFile:(id)arg1 fromDevice:(id)arg2 completion:(id /* block */)arg3;
- (void)deleteFileImp:(id)arg1;
- (id)deviceForConnection:(id)arg1;
- (id)deviceForUUID:(id)arg1;
- (id)deviceManagerConnection;
- (id)deviceOperations;
- (id)devices;
- (long long)downloadFile:(id)arg1 fromDevice:(id)arg2 withOptions:(id)arg3 completion:(id /* block */)arg4;
- (void)downloadFileImp:(id)arg1;
- (long long)ejectDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)ejectImp:(id)arg1;
- (void)enumerateContent;
- (long long)enumerateContent:(id)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)enumerateContentImp:(id)arg1;
- (void)getDeviceList;
- (long long)getFileData:(id)arg1 fromDevice:(id)arg2 withOptions:(id)arg3 completion:(id /* block */)arg4;
- (void)getFileDataImp:(id)arg1;
- (long long)getFileMetadata:(id)arg1 fromDevice:(id)arg2 withOptions:(id)arg3 completion:(id /* block */)arg4;
- (void)getFileMetadataImp:(id)arg1;
- (long long)getFileThumbnail:(id)arg1 fromDevice:(id)arg2 withOptions:(id)arg3 completion:(id /* block */)arg4;
- (void)getFileThumbnailImp:(id)arg1;
- (long long)getSecurityScopedURL:(id)arg1 fromDevice:(id)arg2 completion:(id /* block */)arg3;
- (void)getSecurityScopedURLImp:(id)arg1;
- (id)init;
- (id)managerConnection;
- (void)notifyAddedDevice:(id)arg1;
- (void)notifyRemovedDevice:(id)arg1;
- (long long)openDevice:(id)arg1 contextInfo:(void*)arg2;
- (void)openDeviceHandle:(id)arg1;
- (void)openDeviceImp:(id)arg1;
- (bool)openRemoteDeviceManager;
- (long long)openSession:(id)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)openSessionImp:(id)arg1;
- (void)postCommandCompletionNotification:(id)arg1;
- (void)postNotification:(id)arg1;
- (long long)refreshObjectHandleInfo:(id)arg1 fromDevice:(id)arg2 completion:(id /* block */)arg3;
- (void)refreshObjectHandleInfoImp:(id)arg1;
- (long long)registerDevice:(id)arg1 forImageCaptureEventNotifications:(id)arg2;
- (void)registerDevice:(id)arg1 forImageCaptureEventNotificationsImp:(id)arg2;
- (id)remoteManager;
- (void)restartRunning;
- (void)resumeOperations;
- (long long)sendDevice:(id)arg1 ptpCommand:(id)arg2 andPayload:(id)arg3 completion:(id /* block */)arg4;
- (void)sendDevicePTPCommandImp:(id)arg1;
- (void)setDeviceOperationQueueMaxConcurrentOperationCount:(unsigned long long)arg1;
- (void)setDeviceOperationQueueName:(id)arg1;
- (void)setDeviceOperations:(id)arg1;
- (void)setDevices:(id)arg1;
- (void)setManagerConnection:(id)arg1;
- (void)startDeviceWithHandle:(id)arg1;
- (void)startRunning;
- (void)stopRunning;
- (void)suspendOperations;
- (long long)syncClock:(id)arg1 completion:(id /* block */)arg2;
- (void)syncClockImp:(id)arg1;
- (long long)unregisterDevice:(id)arg1 forImageCaptureEventNotifications:(id)arg2;
- (void)unregisterDevice:(id)arg1 forImageCaptureEventNotificationsImp:(id)arg2;

@end
