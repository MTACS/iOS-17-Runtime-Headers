
@interface AWDCoreRoutinePersistenceMirroringResetSync : PBCodable <NSCopying> {
    int  _code;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int code : 1; 
        unsigned int reason : 1; 
    }  _has;
    int  _reason;
    unsigned long long  _timestamp;
}

@property (nonatomic) int code;
@property (nonatomic) bool hasCode;
@property (nonatomic) bool hasReason;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int reason;
@property (nonatomic) unsigned long long timestamp;

- (int)code;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCode;
- (bool)hasReason;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (void)setCode:(int)arg1;
- (void)setHasCode:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setReason:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
