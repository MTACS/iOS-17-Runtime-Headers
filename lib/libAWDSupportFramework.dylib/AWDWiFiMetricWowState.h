
@interface AWDWiFiMetricWowState : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int isWowEnabled : 1; 
    }  _has;
    bool  _isWowEnabled;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasIsWowEnabled;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool isWowEnabled;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsWowEnabled;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isWowEnabled;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsWowEnabled:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIsWowEnabled:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
