
@interface HDCodableUserDomainConceptLink : PBCodable <NSCopying> {
    struct { 
        unsigned int type : 1; 
    }  _has;
    NSData * _targetUUID;
    long long  _type;
}

@property (nonatomic, readonly) bool hasTargetUUID;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSData *targetUUID;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTargetUUID;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setTargetUUID:(id)arg1;
- (void)setType:(long long)arg1;
- (id)targetUUID;
- (long long)type;
- (void)writeTo:(id)arg1;

@end
