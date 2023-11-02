
@interface AWDIDSConnectedAfterPipeConnectedTimeInMs : PBCodable <NSCopying> {
    long long  _connectionTimeInMs;
    struct { 
        unsigned int connectionTimeInMs : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) long long connectionTimeInMs;
@property (nonatomic) bool hasConnectionTimeInMs;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (long long)connectionTimeInMs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConnectionTimeInMs;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConnectionTimeInMs:(long long)arg1;
- (void)setHasConnectionTimeInMs:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
