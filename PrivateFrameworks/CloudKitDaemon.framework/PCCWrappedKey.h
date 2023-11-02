
@interface PCCWrappedKey : NSObject {
    NSData * _routingToken;
    struct pcc_wrapped_invocation_key { char *x1; unsigned long long x2; } * _wrappedInvocationKey;
}

@property (retain) NSData *routingToken;
@property struct pcc_wrapped_invocation_key { char *x1; unsigned long long x2; }*wrappedInvocationKey;

- (void).cxx_destruct;
- (void)clear;
- (id)data;
- (void)dealloc;
- (id)initWithKey:(id)arg1 permittedRemoteMeasurement:(id)arg2 attestation:(id)arg3;
- (id)routingToken;
- (void)setRoutingToken:(id)arg1;
- (void)setWrappedInvocationKey:(struct pcc_wrapped_invocation_key { char *x1; unsigned long long x2; }*)arg1;
- (struct pcc_wrapped_invocation_key { char *x1; unsigned long long x2; }*)wrappedInvocationKey;

@end
