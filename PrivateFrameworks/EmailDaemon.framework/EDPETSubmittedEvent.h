
@interface EDPETSubmittedEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int timezoneOffset : 1; 
    }  _has;
    unsigned long long  _timestamp;
    int  _timezoneOffset;
}

@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTimezoneOffset;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int timezoneOffset;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTimestamp;
- (bool)hasTimezoneOffset;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTimezoneOffset:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTimezoneOffset:(int)arg1;
- (unsigned long long)timestamp;
- (int)timezoneOffset;
- (void)writeTo:(id)arg1;

@end
