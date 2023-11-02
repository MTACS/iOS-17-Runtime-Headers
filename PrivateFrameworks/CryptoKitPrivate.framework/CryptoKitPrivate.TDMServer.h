
@interface CryptoKitPrivate.TDMServer : NSObject {
    void oprfServer;
    void secret;
}

- (void).cxx_destruct;
- (id)evaluateWithBlindedElement:(id)arg1 error:(id*)arg2;
- (id)info;
- (id)init;
- (id)publicKey;
- (bool)verifyTokenWithOutput:(id)arg1 TID:(id)arg2 FSR:(id)arg3;

@end
