
@interface NWConcrete_nw_unique_connection_request : NSObject <OS_nw_unique_connection_request> {
    NWConcrete_nw_connection * connection;
    NSObject<OS_nw_endpoint> * endpoint;
    unsigned int  hasBeenProcessed;
    unsigned int  hasRequestedPubKey;
    char * incomingReqBytesToVerify;
    unsigned int  incomingReqBytesToVerifyLen;
    unsigned int  isIncoming;
    unsigned int  isPending;
    unsigned int  isWaitingForActiveConnection;
    unsigned int  isWaitingForListenerReady;
    unsigned int  isWaitingForPathUpdate;
    NSObject<OS_nw_path_evaluator> * pathEvaluator;
    unsigned int  pendingRequestAccepted;
    void * preexistingConnectionTimer;
    void * rejectTimer;
    id /* block */  requestCompletionBlock;
    unsigned long long  sequenceNumber;
    BOOL  service;
    unsigned char  signature;
    unsigned long long  uniqueID;
    NSObject<OS_nw_parameters> * userParameters;
    unsigned char  uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;

@end
