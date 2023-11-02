
@interface CryptoKitPrivate.AlishaSPAKE2ProverConfirmed : NSObject {
    void KEnc;
    void KMac;
    void KRMac;
    void Kble_intro;
    void Kble_oob_master;
    void M2;
    void SymmetricLTS;
    void alishaKey;
}

@property (nonatomic, readonly) NSData *KEnc;
@property (nonatomic, readonly) NSData *KMac;
@property (nonatomic, readonly) NSData *KRMac;
@property (nonatomic, readonly) NSData *Kble_intro;
@property (nonatomic, readonly) NSData *Kble_oob_master;
@property (nonatomic, readonly) NSData *M2;
@property (nonatomic, readonly) NSData *SymmetricLTS;
@property (nonatomic, readonly) NSData *alishaKey;

- (void).cxx_destruct;
- (id)KEnc;
- (id)KMac;
- (id)KRMac;
- (id)Kble_intro;
- (id)Kble_oob_master;
- (id)M2;
- (id)SymmetricLTS;
- (id)alishaKey;
- (id)init;

@end
