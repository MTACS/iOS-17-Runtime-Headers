
@interface NMSMediaSyncService : NSObject <IDSServiceDelegate> {
    NSObject<OS_dispatch_queue> * _idsActionHandlerQueue;
    NSMutableDictionary * _keepLocalCompletionsByIDSMsgID;
    IDSService * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_callAndRemoveKeepLocalCompletionWithIDSMessageID:(id)arg1 error:(id)arg2;
- (void)_cleanupKeepLocalCompletionWithID:(id)arg1;
- (int)_containerTypeForModelObject:(id)arg1;
- (int)_convertMPModelObjectKeepLocalEnableState:(long long)arg1;
- (unsigned long long)_convertMediaSyncServiceKeepLocalCellularPolicy:(int)arg1;
- (long long)_convertMediaSyncServiceKeepLocalEnableState:(int)arg1;
- (unsigned long long)_convertMediaSyncServiceKeepLocalPowerPolicy:(int)arg1;
- (int)_convertNMSKeepLocalRequestCellularPolicy:(unsigned long long)arg1;
- (int)_convertNMSKeepLocalRequestPowerPolicy:(unsigned long long)arg1;
- (id)_defaultPairedDevice;
- (void)_handleMediaSyncServiceKeepLocalRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_handleMediaSyncServiceKeepLocalResponse:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (id)_idsMessageOptionsWithTimeout:(double)arg1;
- (id)_midDataFromModelObject:(id)arg1;
- (Class)_modelClassForContainerType:(int)arg1;
- (unsigned long long)_nmsKeepLocalExceptionFromNMSSyncServiceException:(int)arg1;
- (int)_nmsQOSFromNSQOS:(long long)arg1;
- (long long)_nsQOSFromNMSQOS:(int)arg1;
- (void)_performFailSafeWithIDSMessageIdentifier:(id)arg1 timeout:(double)arg2;
- (id)_sendUrgentMessage:(id)arg1 messageType:(long long)arg2 timeout:(double)arg3 completion:(id /* block */)arg4;
- (id)_sendUrgentProtoBufForMessage:(id)arg1 messageType:(long long)arg2 timeout:(double)arg3 error:(id*)arg4;
- (bool)_sendUrgentServiceResponseWithError:(id)arg1 idsMessageID:(id)arg2 timeout:(double)arg3;
- (bool)_sendUrgentServiceResultMessage:(id)arg1 idsMessageID:(id)arg2 timeout:(double)arg3;
- (void)_setMessage:(id)arg1 withValidatorException:(unsigned long long)arg2;
- (void)_setProtobufHandlers;
- (void)dealloc;
- (id)init;
- (void)performKeepLocalRequestWithEnableState:(long long)arg1 modelObject:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5 context:(id)arg6;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;

@end
