
@interface AWDWiFiMetricsScanObj : PBCodable <NSCopying> {
    unsigned int  _durScans;
    struct { 
        unsigned int durScans : 1; 
        unsigned int numScans : 1; 
        unsigned int scanType : 1; 
    }  _has;
    unsigned int  _numScans;
    unsigned int  _scanType;
}

@property (nonatomic) unsigned int durScans;
@property (nonatomic) bool hasDurScans;
@property (nonatomic) bool hasNumScans;
@property (nonatomic) bool hasScanType;
@property (nonatomic) unsigned int numScans;
@property (nonatomic) unsigned int scanType;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)durScans;
- (bool)hasDurScans;
- (bool)hasNumScans;
- (bool)hasScanType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numScans;
- (bool)readFrom:(id)arg1;
- (unsigned int)scanType;
- (void)setDurScans:(unsigned int)arg1;
- (void)setHasDurScans:(bool)arg1;
- (void)setHasNumScans:(bool)arg1;
- (void)setHasScanType:(bool)arg1;
- (void)setNumScans:(unsigned int)arg1;
- (void)setScanType:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
