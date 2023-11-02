
@interface AWDWifiP2PAirplayHistogramBin : PBCodable <NSCopying> {
    int  _binEnd;
    int  _binStart;
    unsigned int  _count;
    struct { 
        unsigned int binEnd : 1; 
        unsigned int binStart : 1; 
        unsigned int count : 1; 
    }  _has;
}

@property (nonatomic) int binEnd;
@property (nonatomic) int binStart;
@property (nonatomic) unsigned int count;
@property (nonatomic) bool hasBinEnd;
@property (nonatomic) bool hasBinStart;
@property (nonatomic) bool hasCount;

- (int)binEnd;
- (int)binStart;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBinEnd;
- (bool)hasBinStart;
- (bool)hasCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBinEnd:(int)arg1;
- (void)setBinStart:(int)arg1;
- (void)setCount:(unsigned int)arg1;
- (void)setHasBinEnd:(bool)arg1;
- (void)setHasBinStart:(bool)arg1;
- (void)setHasCount:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
