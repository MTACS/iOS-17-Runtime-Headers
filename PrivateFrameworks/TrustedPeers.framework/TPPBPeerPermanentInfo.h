
@interface TPPBPeerPermanentInfo : PBCodable <NSCopying> {
    NSData * _encryptionPubKey;
    unsigned long long  _epoch;
    struct { 
        unsigned int epoch : 1; 
    }  _has;
    NSString * _machineId;
    NSString * _modelId;
    NSData * _signingPubKey;
}

@property (nonatomic, retain) NSData *encryptionPubKey;
@property (nonatomic) unsigned long long epoch;
@property (nonatomic, readonly) bool hasEncryptionPubKey;
@property (nonatomic) bool hasEpoch;
@property (nonatomic, readonly) bool hasMachineId;
@property (nonatomic, readonly) bool hasModelId;
@property (nonatomic, readonly) bool hasSigningPubKey;
@property (nonatomic, retain) NSString *machineId;
@property (nonatomic, retain) NSString *modelId;
@property (nonatomic, retain) NSData *signingPubKey;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encryptionPubKey;
- (unsigned long long)epoch;
- (bool)hasEncryptionPubKey;
- (bool)hasEpoch;
- (bool)hasMachineId;
- (bool)hasModelId;
- (bool)hasSigningPubKey;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)machineId;
- (void)mergeFrom:(id)arg1;
- (id)modelId;
- (bool)readFrom:(id)arg1;
- (void)setEncryptionPubKey:(id)arg1;
- (void)setEpoch:(unsigned long long)arg1;
- (void)setHasEpoch:(bool)arg1;
- (void)setMachineId:(id)arg1;
- (void)setModelId:(id)arg1;
- (void)setSigningPubKey:(id)arg1;
- (id)signingPubKey;
- (void)writeTo:(id)arg1;

@end
