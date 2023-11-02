
@interface AWDDEDDeferredCheckIn : PBCodable <NSCopying> {
    struct { 
        unsigned int numtasks : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _numtasks;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasNumtasks;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long numtasks;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNumtasks;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)numtasks;
- (bool)readFrom:(id)arg1;
- (void)setHasNumtasks:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setNumtasks:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
