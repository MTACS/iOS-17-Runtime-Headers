
@interface CWFXPCRequest : NSBlockOperation {
    NSUUID * _UUID;
    bool  _didSendResponse;
    NSDictionary * _info;
    bool  _isSubrequest;
    NSDate * _receivedAt;
    CWFRequestParameters * _requestParameters;
    id /* block */  _response;
    long long  _type;
}

@property (nonatomic, copy) NSUUID *UUID;
@property bool didSendResponse;
@property (nonatomic, copy) NSDictionary *info;
@property (nonatomic) bool isSubrequest;
@property (nonatomic, copy) NSDate *receivedAt;
@property (nonatomic, copy) CWFRequestParameters *requestParameters;
@property (nonatomic, copy) id /* block */ response;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)UUID;
- (id)description;
- (bool)didSendResponse;
- (id)info;
- (id)init;
- (bool)isExecuting;
- (bool)isFinished;
- (bool)isSubrequest;
- (id)receivedAt;
- (id)requestParameters;
- (id /* block */)response;
- (void)setDidSendResponse:(bool)arg1;
- (void)setInfo:(id)arg1;
- (void)setIsSubrequest:(bool)arg1;
- (void)setReceivedAt:(id)arg1;
- (void)setRequestParameters:(id)arg1;
- (void)setResponse:(id /* block */)arg1;
- (void)setType:(long long)arg1;
- (void)setUUID:(id)arg1;
- (long long)type;

@end
