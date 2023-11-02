
@interface BCSIconRemoteFetch : NSObject {
    <BCSCoalesceHelperProtocol> * _coalesceHelper;
}

@property (nonatomic, readonly, retain) <BCSCoalesceHelperProtocol> *coalesceHelper;

- (void).cxx_destruct;
- (id)coalesceHelper;

@end
