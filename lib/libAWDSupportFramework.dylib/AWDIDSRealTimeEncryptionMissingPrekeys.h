
@interface AWDIDSRealTimeEncryptionMissingPrekeys : PBCodable <NSCopying> {
    unsigned long long  _activeParticipants;
    struct { 
        unsigned int activeParticipants : 1; 
        unsigned int missingPrekeys : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _missingPrekeys;
    NSString * _serviceName;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned long long activeParticipants;
@property (nonatomic) bool hasActiveParticipants;
@property (nonatomic) bool hasMissingPrekeys;
@property (nonatomic, readonly) bool hasServiceName;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long missingPrekeys;
@property (nonatomic, retain) NSString *serviceName;
@property (nonatomic) unsigned long long timestamp;

- (unsigned long long)activeParticipants;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActiveParticipants;
- (bool)hasMissingPrekeys;
- (bool)hasServiceName;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)missingPrekeys;
- (bool)readFrom:(id)arg1;
- (id)serviceName;
- (void)setActiveParticipants:(unsigned long long)arg1;
- (void)setHasActiveParticipants:(bool)arg1;
- (void)setHasMissingPrekeys:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setMissingPrekeys:(unsigned long long)arg1;
- (void)setServiceName:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
