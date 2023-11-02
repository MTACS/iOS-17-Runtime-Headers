
@interface GEOVLFUsageTileID : PBCodable <NSCopying> {
    NSString * _buildId;
    struct { 
        unsigned int has_uncertainty : 1; 
        unsigned int has_xCoordinate : 1; 
        unsigned int has_yCoordinate : 1; 
    }  _flags;
    double  _uncertainty;
    double  _xCoordinate;
    double  _yCoordinate;
}

@property (nonatomic, retain) NSString *buildId;
@property (nonatomic, readonly) bool hasBuildId;
@property (nonatomic) bool hasUncertainty;
@property (nonatomic) bool hasXCoordinate;
@property (nonatomic) bool hasYCoordinate;
@property (nonatomic) double uncertainty;
@property (nonatomic) double xCoordinate;
@property (nonatomic) double yCoordinate;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)buildId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBuildId;
- (bool)hasUncertainty;
- (bool)hasXCoordinate;
- (bool)hasYCoordinate;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBuildId:(id)arg1;
- (void)setHasUncertainty:(bool)arg1;
- (void)setHasXCoordinate:(bool)arg1;
- (void)setHasYCoordinate:(bool)arg1;
- (void)setUncertainty:(double)arg1;
- (void)setXCoordinate:(double)arg1;
- (void)setYCoordinate:(double)arg1;
- (double)uncertainty;
- (void)writeTo:(id)arg1;
- (double)xCoordinate;
- (double)yCoordinate;

@end
