
@interface HAP2EncodedListPairingsResponseThread : HAP2EncodedResponseThread <HAP2EncodedListPairingsResponse> {
    NSArray * _pairings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEncrypted, nonatomic, readonly) bool encrypted;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *pairings;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithBTLEResponse:(id)arg1 pairings:(id)arg2;
- (id)pairings;

@end
