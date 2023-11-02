
@interface AWDIMessageDowngrade : PBCodable <NSCopying> {
    unsigned int  _durationBeforeDowngrade;
    NSString * _guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int durationBeforeDowngrade : 1; 
        unsigned int isManualDowngrade : 1; 
    }  _has;
    unsigned int  _isManualDowngrade;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int durationBeforeDowngrade;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic) bool hasDurationBeforeDowngrade;
@property (nonatomic, readonly) bool hasGuid;
@property (nonatomic) bool hasIsManualDowngrade;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int isManualDowngrade;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)durationBeforeDowngrade;
- (id)guid;
- (bool)hasDurationBeforeDowngrade;
- (bool)hasGuid;
- (bool)hasIsManualDowngrade;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)isManualDowngrade;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDurationBeforeDowngrade:(unsigned int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasDurationBeforeDowngrade:(bool)arg1;
- (void)setHasIsManualDowngrade:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIsManualDowngrade:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end