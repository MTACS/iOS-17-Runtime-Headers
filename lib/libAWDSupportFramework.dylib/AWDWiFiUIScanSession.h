
@interface AWDWiFiUIScanSession : PBCodable <NSCopying> {
    NSMutableArray * _counts;
    unsigned int  _duration;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int duration : 1; 
    }  _has;
    NSString * _process;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSMutableArray *counts;
@property (nonatomic) unsigned int duration;
@property (nonatomic) bool hasDuration;
@property (nonatomic, readonly) bool hasProcess;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSString *process;
@property (nonatomic) unsigned long long timestamp;

+ (Class)countsType;

- (void)addCounts:(id)arg1;
- (void)clearCounts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)counts;
- (id)countsAtIndex:(unsigned long long)arg1;
- (unsigned long long)countsCount;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)duration;
- (bool)hasDuration;
- (bool)hasProcess;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)process;
- (bool)readFrom:(id)arg1;
- (void)setCounts:(id)arg1;
- (void)setDuration:(unsigned int)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setProcess:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
