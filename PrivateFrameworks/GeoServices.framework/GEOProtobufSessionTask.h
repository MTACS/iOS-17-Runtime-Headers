
@interface GEOProtobufSessionTask : NSObject <GEODataURLSessionTaskDelegate> {
    GEOApplicationAuditToken * _auditToken;
    bool  _completedAsCancelled;
    GEODataURLSessionTask * _dataTask;
    <GEOProtobufSessionTaskDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSError * _error;
    struct { 
        int type; 
        union { 
            int raw; 
            int tile; 
            int placeRequest; 
        } subtype; 
    }  _requestKind;
    unsigned int  _requestTypeCode;
    PBCodable * _response;
    Class  _responseClass;
    GEOProtobufSession * _session;
    GEODataRequestThrottlerToken * _throttleToken;
}

@property (nonatomic, readonly) GEOClientMetrics *clientMetrics;
@property (nonatomic, readonly) bool completedAsCancelled;
@property (nonatomic, readonly) GEODataURLSessionTask *dataTask;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long incomingPayloadSize;
@property (nonatomic, readonly) bool mptcpNegotiated;
@property (nonatomic, readonly) unsigned long long outgoingPayloadSize;
@property (nonatomic, readonly) bool receivedRNFNotification;
@property (nonatomic, readonly) NSString *remoteAddressAndPort;
@property (nonatomic, readonly) unsigned int requestTypeCode;
@property (nonatomic, readonly) unsigned long long requestedMultipathServiceType;
@property (nonatomic, readonly) PBCodable *response;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_decodeResponseFromTask:(id)arg1 completion:(id /* block */)arg2;
- (void)cancel;
- (id)clientMetrics;
- (void)completeWithErrorCode:(long long)arg1;
- (bool)completedAsCancelled;
- (id)dataTask;
- (void)dataURLSession:(id)arg1 didCompleteTask:(id)arg2;
- (void)dataURLSession:(id)arg1 willSendRequest:(id)arg2 forTask:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)debugDescription;
- (id)description;
- (id)error;
- (unsigned long long)incomingPayloadSize;
- (id)init;
- (bool)mptcpNegotiated;
- (unsigned long long)outgoingPayloadSize;
- (id)parseInnerProtobufFromData:(id)arg1;
- (bool)parsePreambleWithReader:(id)arg1;
- (bool)parseProtocolVersionWithReader:(id)arg1;
- (id)parseResponseFromResponseData:(id)arg1;
- (bool)parseResponseTypeWithReader:(id)arg1;
- (bool)receivedRNFNotification;
- (id)remoteAddressAndPort;
- (unsigned int)requestTypeCode;
- (unsigned long long)requestedMultipathServiceType;
- (id)response;
- (void)start;

@end
