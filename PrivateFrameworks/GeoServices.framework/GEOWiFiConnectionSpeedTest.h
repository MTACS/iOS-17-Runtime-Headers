
@interface GEOWiFiConnectionSpeedTest : PBCodable <NSCopying> {
    float  _avgDL;
    float  _avgUL;
    struct { 
        unsigned int has_avgDL : 1; 
        unsigned int has_avgUL : 1; 
    }  _flags;
}

@property (nonatomic) float avgDL;
@property (nonatomic) float avgUL;
@property (nonatomic) bool hasAvgDL;
@property (nonatomic) bool hasAvgUL;

+ (bool)isValid:(id)arg1;

- (float)avgDL;
- (float)avgUL;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAvgDL;
- (bool)hasAvgUL;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAvgDL:(float)arg1;
- (void)setAvgUL:(float)arg1;
- (void)setHasAvgDL:(bool)arg1;
- (void)setHasAvgUL:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
