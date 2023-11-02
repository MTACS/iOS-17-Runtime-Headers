
@interface COMessageChannelRequestInfo : NSObject {
    NSString * _destinationInfo;
    unsigned long long  _expectedRecipients;
    unsigned long long  _messageSize;
    unsigned long long  _receivedResponses;
    id /* block */  _recipientCallback;
    COMessageChannelRequest * _request;
    unsigned int  _requestID;
    long long  _requestType;
    id /* block */  _responseCallback;
}

@property (nonatomic, copy) NSString *destinationInfo;
@property (nonatomic) unsigned long long expectedRecipients;
@property (nonatomic) unsigned long long messageSize;
@property (nonatomic) unsigned long long receivedResponses;
@property (nonatomic, copy) id /* block */ recipientCallback;
@property (nonatomic, retain) COMessageChannelRequest *request;
@property (nonatomic, readonly) unsigned int requestID;
@property (nonatomic, readonly) long long requestType;
@property (nonatomic, copy) id /* block */ responseCallback;

- (void).cxx_destruct;
- (id)destinationInfo;
- (unsigned long long)expectedRecipients;
- (id)initWithRequestID:(unsigned int)arg1 type:(long long)arg2 request:(id)arg3;
- (unsigned long long)messageSize;
- (unsigned long long)receivedResponses;
- (id /* block */)recipientCallback;
- (id)request;
- (unsigned int)requestID;
- (long long)requestType;
- (id /* block */)responseCallback;
- (void)setDestinationInfo:(id)arg1;
- (void)setExpectedRecipients:(unsigned long long)arg1;
- (void)setMessageSize:(unsigned long long)arg1;
- (void)setReceivedResponses:(unsigned long long)arg1;
- (void)setRecipientCallback:(id /* block */)arg1;
- (void)setRequest:(id)arg1;
- (void)setResponseCallback:(id /* block */)arg1;

@end
