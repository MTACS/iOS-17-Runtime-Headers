
@interface SIRINLUINTERNALSNLP_INTERMEDIATESNLPAssetVersion : PBCodable <NSCopying> {
    NSString * _boltTaskId;
    struct { 
        unsigned int ncvNumber : 1; 
        unsigned int osRelease : 1; 
        unsigned int patchNumber : 1; 
    }  _has;
    unsigned int  _ncvNumber;
    unsigned int  _osRelease;
    unsigned int  _patchNumber;
}

@property (nonatomic, retain) NSString *boltTaskId;
@property (nonatomic, readonly) bool hasBoltTaskId;
@property (nonatomic) bool hasNcvNumber;
@property (nonatomic) bool hasOsRelease;
@property (nonatomic) bool hasPatchNumber;
@property (nonatomic) unsigned int ncvNumber;
@property (nonatomic) unsigned int osRelease;
@property (nonatomic) unsigned int patchNumber;

- (void).cxx_destruct;
- (id)boltTaskId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBoltTaskId;
- (bool)hasNcvNumber;
- (bool)hasOsRelease;
- (bool)hasPatchNumber;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)ncvNumber;
- (unsigned int)osRelease;
- (unsigned int)patchNumber;
- (bool)readFrom:(id)arg1;
- (void)setBoltTaskId:(id)arg1;
- (void)setHasNcvNumber:(bool)arg1;
- (void)setHasOsRelease:(bool)arg1;
- (void)setHasPatchNumber:(bool)arg1;
- (void)setNcvNumber:(unsigned int)arg1;
- (void)setOsRelease:(unsigned int)arg1;
- (void)setPatchNumber:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
