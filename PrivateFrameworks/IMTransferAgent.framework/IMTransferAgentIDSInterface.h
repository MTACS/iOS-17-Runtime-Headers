
@interface IMTransferAgentIDSInterface : NSObject <IDSServiceDelegate> {
    IDSService * _idsService;
    int  _numTransfers;
    int  _totalTransfers;
    NSMutableDictionary * _uniqueIDToFilePathMap;
    NSMutableDictionary * _uniqueIDToTransferCompletionBlockMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handleUploadRequest:(id)arg1;
- (void)_handleUploadResponse:(id)arg1;
- (bool)_sendIDSMessage:(id)arg1 topic:(id)arg2 localPath:(id)arg3;
- (void)_sendUploadRequest:(id)arg1 topic:(id)arg2 transferID:(id)arg3 sourceAppID:(id)arg4 allowReauthorize:(bool)arg5;
- (void)_sendUploadResponse:(id)arg1 topic:(id)arg2 success:(bool)arg3 error:(id)arg4 ownerID:(id)arg5 signature:(id)arg6 requestURLString:(id)arg7 transferID:(id)arg8;
- (void)dealloc;
- (void)decrementTransferCount;
- (void)incrementTransferCount;
- (id)init;
- (bool)isLocalDevicePresent;
- (id)localCompanionDevice;
- (void)remoteUploadFileRequest:(id)arg1 topic:(id)arg2 transferID:(id)arg3 sourceAppID:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;

@end
