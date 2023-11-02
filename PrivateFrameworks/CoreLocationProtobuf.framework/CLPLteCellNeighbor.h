
@interface CLPLteCellNeighbor : PBCodable <NSCopying> {
    unsigned int  _bandwidth;
    int  _ecn0;
    struct { 
        unsigned int bandwidth : 1; 
        unsigned int ecn0 : 1; 
        unsigned int maxThroughput : 1; 
        unsigned int neighborType : 1; 
        unsigned int pid : 1; 
        unsigned int rscp : 1; 
        unsigned int rssi : 1; 
        unsigned int uarfcn : 1; 
    }  _has;
    unsigned int  _maxThroughput;
    unsigned int  _neighborType;
    int  _pid;
    int  _rscp;
    int  _rssi;
    int  _uarfcn;
}

@property (nonatomic) unsigned int bandwidth;
@property (nonatomic) int ecn0;
@property (nonatomic) bool hasBandwidth;
@property (nonatomic) bool hasEcn0;
@property (nonatomic) bool hasMaxThroughput;
@property (nonatomic) bool hasNeighborType;
@property (nonatomic) bool hasPid;
@property (nonatomic) bool hasRscp;
@property (nonatomic) bool hasRssi;
@property (nonatomic) bool hasUarfcn;
@property (nonatomic) unsigned int maxThroughput;
@property (nonatomic) unsigned int neighborType;
@property (nonatomic) int pid;
@property (nonatomic) int rscp;
@property (nonatomic) int rssi;
@property (nonatomic) int uarfcn;

- (unsigned int)bandwidth;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)ecn0;
- (bool)hasBandwidth;
- (bool)hasEcn0;
- (bool)hasMaxThroughput;
- (bool)hasNeighborType;
- (bool)hasPid;
- (bool)hasRscp;
- (bool)hasRssi;
- (bool)hasUarfcn;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)maxThroughput;
- (void)mergeFrom:(id)arg1;
- (unsigned int)neighborType;
- (int)pid;
- (bool)readFrom:(id)arg1;
- (int)rscp;
- (int)rssi;
- (void)setBandwidth:(unsigned int)arg1;
- (void)setEcn0:(int)arg1;
- (void)setHasBandwidth:(bool)arg1;
- (void)setHasEcn0:(bool)arg1;
- (void)setHasMaxThroughput:(bool)arg1;
- (void)setHasNeighborType:(bool)arg1;
- (void)setHasPid:(bool)arg1;
- (void)setHasRscp:(bool)arg1;
- (void)setHasRssi:(bool)arg1;
- (void)setHasUarfcn:(bool)arg1;
- (void)setMaxThroughput:(unsigned int)arg1;
- (void)setNeighborType:(unsigned int)arg1;
- (void)setPid:(int)arg1;
- (void)setRscp:(int)arg1;
- (void)setRssi:(int)arg1;
- (void)setUarfcn:(int)arg1;
- (int)uarfcn;
- (void)writeTo:(id)arg1;

@end
