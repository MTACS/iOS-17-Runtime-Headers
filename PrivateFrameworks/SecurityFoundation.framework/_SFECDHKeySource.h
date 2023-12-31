
@interface _SFECDHKeySource : NSObject {
    id  _ecdhKeySourceInternal;
}

@property (nonatomic, retain) _SFECKeyPair *localKeyPair;
@property (nonatomic, retain) _SFECPublicKey *remotePublicKey;

- (void).cxx_destruct;
- (id)initWithLocalKeyPair:(id)arg1 remotePublickKey:(id)arg2;
- (id)localKeyPair;
- (id)remotePublicKey;
- (void)setLocalKeyPair:(id)arg1;
- (void)setRemotePublicKey:(id)arg1;

@end
