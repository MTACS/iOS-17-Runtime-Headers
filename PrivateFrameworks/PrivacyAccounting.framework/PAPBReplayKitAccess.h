
@interface PAPBReplayKitAccess : PBCodable <NSCopying> {
    PAPBAccess * _access;
    PAPBApplication * _broadcaster;
}

@property (nonatomic, retain) PAPBAccess *access;
@property (nonatomic, retain) PAPBApplication *broadcaster;
@property (nonatomic, readonly) bool hasAccess;
@property (nonatomic, readonly) bool hasBroadcaster;

- (void).cxx_destruct;
- (id)access;
- (id)broadcaster;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccess;
- (bool)hasBroadcaster;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccess:(id)arg1;
- (void)setBroadcaster:(id)arg1;
- (void)writeTo:(id)arg1;

@end
