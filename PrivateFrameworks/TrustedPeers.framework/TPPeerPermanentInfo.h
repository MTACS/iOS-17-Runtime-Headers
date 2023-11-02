
@interface TPPeerPermanentInfo : NSObject {
    NSData * _data;
    <TPPublicKey> * _encryptionPubKey;
    unsigned long long  _epoch;
    NSString * _machineID;
    NSString * _modelID;
    NSString * _peerID;
    NSData * _sig;
    <TPPublicKey> * _signingPubKey;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) <TPPublicKey> *encryptionPubKey;
@property (nonatomic, readonly) unsigned long long epoch;
@property (nonatomic, readonly) NSString *machineID;
@property (nonatomic, readonly) NSString *modelID;
@property (nonatomic, readonly) NSString *peerID;
@property (nonatomic, readonly) NSData *sig;
@property (nonatomic, readonly) <TPPublicKey> *signingPubKey;

+ (id)mungeModelID:(id)arg1;
+ (id)peerIDForData:(id)arg1 sig:(id)arg2 peerIDHashAlgo:(long long)arg3;
+ (id)permanentInfoWithMachineID:(id)arg1 modelID:(id)arg2 epoch:(unsigned long long)arg3 signingKeyPair:(id)arg4 encryptionKeyPair:(id)arg5 peerIDHashAlgo:(long long)arg6 error:(id*)arg7;
+ (id)permanentInfoWithPeerID:(id)arg1 data:(id)arg2 sig:(id)arg3 keyFactory:(id)arg4;

- (void).cxx_destruct;
- (id)data;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encryptionPubKey;
- (unsigned long long)epoch;
- (id)initWithMachineID:(id)arg1 modelID:(id)arg2 epoch:(unsigned long long)arg3 signingPubKey:(id)arg4 encryptionPubKey:(id)arg5 data:(id)arg6 sig:(id)arg7 peerID:(id)arg8;
- (id)machineID;
- (id)modelID;
- (id)peerID;
- (id)sig;
- (id)signingPubKey;

@end
