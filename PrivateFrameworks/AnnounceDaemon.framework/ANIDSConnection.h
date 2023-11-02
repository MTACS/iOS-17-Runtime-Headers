
@interface ANIDSConnection : NSObject <ANIDSConnectionProvider, IDSServiceDelegate> {
    <ANConnectionDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _idsQueue;
    NSMutableDictionary * _outgoingMessages;
    IDSService * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ANConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *idsQueue;
@property (nonatomic, retain) NSMutableDictionary *outgoingMessages;
@property (nonatomic, readonly) IDSService *service;
@property (readonly) Class superclass;

+ (void)purgeTemporaryFiles;

- (void).cxx_destruct;
- (id)delegate;
- (id)idsQueue;
- (id)init;
- (id)outgoingMessages;
- (id)sendMessage:(id)arg1 messageUUIDString:(id)arg2 destination:(id)arg3;
- (id)service;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5 context:(id)arg6;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)setDelegate:(id)arg1;
- (void)setOutgoingMessages:(id)arg1;

@end
