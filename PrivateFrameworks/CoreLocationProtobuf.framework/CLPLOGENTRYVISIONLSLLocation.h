
@interface CLPLOGENTRYVISIONLSLLocation : PBCodable <NSCopying> {
    double  _altitude;
    CLPLOGENTRYVISIONLSLLocationCoordinate * _coordinate;
    struct { 
        unsigned int altitude : 1; 
    }  _has;
    CLPLOGENTRYVISIONTimeStamp * _timestamp;
}

@property (nonatomic) double altitude;
@property (nonatomic, retain) CLPLOGENTRYVISIONLSLLocationCoordinate *coordinate;
@property (nonatomic) bool hasAltitude;
@property (nonatomic, readonly) bool hasCoordinate;
@property (nonatomic, readonly) bool hasTimestamp;
@property (nonatomic, retain) CLPLOGENTRYVISIONTimeStamp *timestamp;

- (void).cxx_destruct;
- (double)altitude;
- (id)coordinate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAltitude;
- (bool)hasCoordinate;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAltitude:(double)arg1;
- (void)setCoordinate:(id)arg1;
- (void)setHasAltitude:(bool)arg1;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;
- (void)writeTo:(id)arg1;

@end
