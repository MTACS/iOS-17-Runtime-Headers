
@interface COOnDemandIDSNodeCreationRequest : COUnhandledRequest {
    NSString * _fromURIToken;
    NSString * _idsIdentifier;
    COIDSMessage * _message;
    NSString * _requestIdentifier;
    NSString * _responseIdentifier;
}

@property (nonatomic, readonly) NSString *fromURIToken;
@property (nonatomic, readonly) NSString *idsIdentifier;
@property (nonatomic, readonly) COIDSMessage *message;
@property (nonatomic, readonly) NSString *requestIdentifier;
@property (nonatomic, readonly) NSString *responseIdentifier;

- (void).cxx_destruct;
- (id)fromURIToken;
- (id)idsIdentifier;
- (id)initWithMessage:(id)arg1 idsIdentifier:(id)arg2 uriToken:(id)arg3 requestIdentifier:(id)arg4 responseIdentifier:(id)arg5;
- (id)message;
- (id)requestIdentifier;
- (id)responseIdentifier;

@end
