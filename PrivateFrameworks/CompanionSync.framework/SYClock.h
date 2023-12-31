
@interface SYClock : PBCodable <NSCopying> {
    SYPeer * _peer;
    unsigned long long  _version;
}

@property (nonatomic, retain) SYPeer *peer;
@property (nonatomic) unsigned long long version;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_myDescription;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (unsigned long long)increaseBy:(unsigned long long)arg1;
- (unsigned long long)increment;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)peer;
- (bool)readFrom:(id)arg1;
- (void)setPeer:(id)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (unsigned long long)version;
- (void)writeTo:(id)arg1;

@end
