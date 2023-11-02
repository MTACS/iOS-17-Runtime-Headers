
@interface AWDDEDFinisherStarted : PBCodable <NSCopying> {
    struct { 
        unsigned int numbytes : 1; 
        unsigned int numfiles : 1; 
        unsigned int timestamp : 1; 
        unsigned int type : 1; 
    }  _has;
    unsigned long long  _numbytes;
    unsigned long long  _numfiles;
    unsigned long long  _timestamp;
    int  _type;
}

@property (nonatomic) bool hasNumbytes;
@property (nonatomic) bool hasNumfiles;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasType;
@property (nonatomic) unsigned long long numbytes;
@property (nonatomic) unsigned long long numfiles;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int type;

- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNumbytes;
- (bool)hasNumfiles;
- (bool)hasTimestamp;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)numbytes;
- (unsigned long long)numfiles;
- (bool)readFrom:(id)arg1;
- (void)setHasNumbytes:(bool)arg1;
- (void)setHasNumfiles:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setNumbytes:(unsigned long long)arg1;
- (void)setNumfiles:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setType:(int)arg1;
- (unsigned long long)timestamp;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
