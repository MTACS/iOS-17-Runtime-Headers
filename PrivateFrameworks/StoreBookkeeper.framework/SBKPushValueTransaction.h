
@interface SBKPushValueTransaction : SBKTransaction {
    <SBKKeyValuePayloadPair> * _clientItemPayloadPair;
    NSString * _clientItemVersionAnchor;
    bool  _isRechedulable;
    <SBKKeyValuePayloadPair> * _requestItemPayloadPair;
    NSString * _requestItemVersionAnchor;
    NSString * _resultDomainVersion;
    <SBKKeyValuePayloadPair> * _resultItemPayloadPair;
    NSString * _resultItemVersionAnchor;
    bool  _success;
}

@property (nonatomic, readonly) <SBKKeyValuePayloadPair> *clientItemPayloadPair;
@property (nonatomic, readonly) NSString *clientItemVersionAnchor;
@property (nonatomic, readonly) <SBKKeyValuePayloadPair> *requestItemPayloadPair;
@property (nonatomic, readonly) NSString *requestItemVersionAnchor;
@property (nonatomic, readonly) NSString *resultDomainVersion;
@property (nonatomic, readonly) <SBKKeyValuePayloadPair> *resultItemPayloadPair;
@property (nonatomic, readonly) NSString *resultItemVersionAnchor;
@property (nonatomic, readonly) bool success;

- (void).cxx_destruct;
- (id)_resolveConflictBetweenClientPayloadPair:(id)arg1 andServerPayloadPair:(id)arg2;
- (id)clampsKey;
- (id)clientItemPayloadPair;
- (id)clientItemVersionAnchor;
- (id)description;
- (id)initWithStoreBagContext:(id)arg1 clientItemPayloadPair:(id)arg2 clientItemVersionAnchor:(id)arg3;
- (id)newRequest;
- (void)processDataInResponse:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)requestItemPayloadPair;
- (id)requestItemVersionAnchor;
- (id)resultDomainVersion;
- (id)resultItemPayloadPair;
- (id)resultItemVersionAnchor;
- (bool)success;

@end
