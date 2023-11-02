
@interface TDMToken : NSObject {
    _TtC16CryptoKitPrivate9TDMClient * _tdmClient;
}

@property (nonatomic, readonly) _TtC16CryptoKitPrivate9TDMClient *tdmClient;

- (void).cxx_destruct;
- (id)blindedElement;
- (id)finalizeWithEvaluatedElement:(id)arg1 proof:(id)arg2 publicKey:(id)arg3 fsr:(id)arg4 error:(id*)arg5;
- (id)initWithTID:(id)arg1;
- (id)tdmClient;

@end
