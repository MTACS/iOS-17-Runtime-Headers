
@interface CRKOSTransactionAssertionProvider : NSObject <CATAssertionProviding> {
    <CRKOSTransactionPrimitives> * _primitives;
    NSString * _reason;
}

@property (nonatomic, readonly) <CRKOSTransactionPrimitives> *primitives;
@property (nonatomic, readonly, copy) NSString *reason;

- (void).cxx_destruct;
- (id)acquireAssertion;
- (id)initWithReverseDNSReason:(id)arg1 primitives:(id)arg2;
- (id)primitives;
- (id)reason;

@end
