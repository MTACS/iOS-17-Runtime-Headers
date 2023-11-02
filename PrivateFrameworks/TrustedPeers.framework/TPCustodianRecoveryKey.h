
@interface TPCustodianRecoveryKey : NSObject {
    NSData * _data;
    <TPPublicKey> * _encryptionPublicKey;
    int  _kind;
    NSString * _peerID;
    NSData * _sig;
    <TPPublicKey> * _signingPublicKey;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, retain) <TPPublicKey> *encryptionPublicKey;
@property (nonatomic) int kind;
@property (nonatomic, retain) NSString *peerID;
@property (nonatomic, readonly) NSData *sig;
@property (nonatomic, retain) <TPPublicKey> *signingPublicKey;
@property (nonatomic, retain) NSUUID *uuid;

+ (id)custodianRecoveryKeyWithData:(id)arg1 sig:(id)arg2 keyFactory:(id)arg3;
+ (id)peerIDForData:(id)arg1 sig:(id)arg2 peerIDHashAlgo:(long long)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)dictionaryRepresentation;
- (id)encryptionPublicKey;
- (id)initWithUUID:(id)arg1 signingPublicKey:(id)arg2 encryptionPublicKey:(id)arg3 kind:(int)arg4 data:(id)arg5 sig:(id)arg6 peerID:(id)arg7;
- (id)initWithUUID:(id)arg1 signingPublicKey:(id)arg2 encryptionPublicKey:(id)arg3 signingKeyPair:(id)arg4 kind:(int)arg5 error:(id*)arg6;
- (int)kind;
- (id)peerID;
- (void)setEncryptionPublicKey:(id)arg1;
- (void)setKind:(int)arg1;
- (void)setPeerID:(id)arg1;
- (void)setSigningPublicKey:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)sig;
- (id)signingPublicKey;
- (id)uuid;

@end
