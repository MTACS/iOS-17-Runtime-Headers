
@interface SBKPullValueTransaction : SBKTransaction {
    <SBKKeyValuePayloadPair> * _clientItemPayloadPair;
    NSString * _clientItemVersionAnchor;
    NSString * _requestedKey;
    NSString * _resultDomainVersion;
    <SBKKeyValuePayloadPair> * _resultItemPayloadPair;
    NSString * _resultItemVersionAnchor;
    bool  _success;
}

@property (nonatomic, readonly) <SBKKeyValuePayloadPair> *clientItemPayloadPair;
@property (nonatomic, readonly) NSString *clientItemVersionAnchor;
@property (nonatomic, readonly, copy) NSString *requestedKey;
@property (nonatomic, readonly) NSString *resultDomainVersion;
@property (nonatomic, readonly) <SBKKeyValuePayloadPair> *resultItemPayloadPair;
@property (nonatomic, readonly) NSString *resultItemVersionAnchor;
@property (nonatomic, readonly) bool success;

- (void).cxx_destruct;
- (id)clampsKey;
- (id)clientItemPayloadPair;
- (id)clientItemVersionAnchor;
- (id)description;
- (id)initWithStoreBagContext:(id)arg1 requestedKey:(id)arg2 clientItemPayloadPair:(id)arg3 clientItemVersionAnchor:(id)arg4;
- (id)newRequest;
- (void)processDataInResponse:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)requestedKey;
- (id)resultDomainVersion;
- (id)resultItemPayloadPair;
- (id)resultItemVersionAnchor;
- (bool)success;

@end
