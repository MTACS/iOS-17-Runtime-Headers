
@interface NPKProtoPrepareProvisioningTargetResponse : PBCodable <NSCopying> {
    NSData * _encryptedTargetData;
    NSData * _errorData;
    struct { 
        unsigned int wasFamilyCircle : 1; 
    }  _has;
    bool  _wasFamilyCircle;
}

@property (nonatomic, retain) NSData *encryptedTargetData;
@property (nonatomic, retain) NSData *errorData;
@property (nonatomic, readonly) bool hasEncryptedTargetData;
@property (nonatomic, readonly) bool hasErrorData;
@property (nonatomic) bool hasWasFamilyCircle;
@property (nonatomic) bool wasFamilyCircle;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encryptedTargetData;
- (id)errorData;
- (bool)hasEncryptedTargetData;
- (bool)hasErrorData;
- (bool)hasWasFamilyCircle;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEncryptedTargetData:(id)arg1;
- (void)setErrorData:(id)arg1;
- (void)setHasWasFamilyCircle:(bool)arg1;
- (void)setWasFamilyCircle:(bool)arg1;
- (bool)wasFamilyCircle;
- (void)writeTo:(id)arg1;

@end
