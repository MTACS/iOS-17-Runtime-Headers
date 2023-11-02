
@interface AWDDEDBugSessionEnded : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int sessionState : 1; 
    }  _has;
    int  _sessionState;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasSessionState;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int sessionState;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsSessionState:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSessionState;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)sessionState;
- (id)sessionStateAsString:(int)arg1;
- (void)setHasSessionState:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setSessionState:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
