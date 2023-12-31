
@interface AWDHomeKitResetConfiguration : PBCodable <NSCopying> {
    int  _errorCode;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int errorCode : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) int errorCode;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)errorCode;
- (bool)hasErrorCode;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
