
@interface CLPLOGENTRYVISIONVLLocation : PBCodable <NSCopying> {
    CLPLOGENTRYVISIONSimdDoubleM * _coordinate;
    struct { 
        unsigned int horizontalAccuracy : 1; 
    }  _has;
    double  _horizontalAccuracy;
}

@property (nonatomic, retain) CLPLOGENTRYVISIONSimdDoubleM *coordinate;
@property (nonatomic, readonly) bool hasCoordinate;
@property (nonatomic) bool hasHorizontalAccuracy;
@property (nonatomic) double horizontalAccuracy;

- (void).cxx_destruct;
- (id)coordinate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCoordinate;
- (bool)hasHorizontalAccuracy;
- (unsigned long long)hash;
- (double)horizontalAccuracy;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCoordinate:(id)arg1;
- (void)setHasHorizontalAccuracy:(bool)arg1;
- (void)setHorizontalAccuracy:(double)arg1;
- (void)writeTo:(id)arg1;

@end
