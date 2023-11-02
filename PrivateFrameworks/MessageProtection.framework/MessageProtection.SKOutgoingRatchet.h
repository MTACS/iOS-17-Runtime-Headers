
@interface MessageProtection.SKOutgoingRatchet : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  currentMessageKey;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  currentSubscriptionKey;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  ratchet;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  signingKey;
}

+ (id)generate;

- (void).cxx_destruct;
- (id)currentSubscriptionKeys;
- (id)init;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (bool)ratchetForward;
- (id)sealMessage:(id)arg1 authenticating:(id)arg2 error:(id*)arg3;
- (id)serializedData;
- (id)signingKeyIdentifier;

@end
