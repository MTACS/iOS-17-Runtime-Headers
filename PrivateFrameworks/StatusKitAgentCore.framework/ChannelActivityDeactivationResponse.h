
@interface ChannelActivityDeactivationResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int serverTimestampSeconds : 1; 
        unsigned int status : 1; 
    }  _has;
    unsigned long long  _serverTimestampSeconds;
    int  _status;
    NSData * _uuid;
}

@property (nonatomic) bool hasServerTimestampSeconds;
@property (nonatomic) bool hasStatus;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic) unsigned long long serverTimestampSeconds;
@property (nonatomic) int status;
@property (nonatomic, retain) NSData *uuid;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasServerTimestampSeconds;
- (bool)hasStatus;
- (bool)hasUuid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)serverTimestampSeconds;
- (void)setHasServerTimestampSeconds:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setServerTimestampSeconds:(unsigned long long)arg1;
- (void)setStatus:(int)arg1;
- (void)setUuid:(id)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end
