
@interface GEOLogMsgStateLookAroundView : PBCodable <NSCopying> {
    struct { 
        unsigned int has_zoomLevel : 1; 
        unsigned int has_heading : 1; 
        unsigned int has_numberPoisInView : 1; 
        unsigned int has_isLabelingShown : 1; 
    }  _flags;
    unsigned int  _heading;
    bool  _isLabelingShown;
    GEOLocation * _location;
    unsigned int  _numberPoisInView;
    double  _zoomLevel;
}

@property (nonatomic) bool hasHeading;
@property (nonatomic) bool hasIsLabelingShown;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic) bool hasNumberPoisInView;
@property (nonatomic) bool hasZoomLevel;
@property (nonatomic) unsigned int heading;
@property (nonatomic) bool isLabelingShown;
@property (nonatomic, retain) GEOLocation *location;
@property (nonatomic) unsigned int numberPoisInView;
@property (nonatomic) double zoomLevel;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasHeading;
- (bool)hasIsLabelingShown;
- (bool)hasLocation;
- (bool)hasNumberPoisInView;
- (bool)hasZoomLevel;
- (unsigned long long)hash;
- (unsigned int)heading;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLabelingShown;
- (id)jsonRepresentation;
- (id)location;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numberPoisInView;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasHeading:(bool)arg1;
- (void)setHasIsLabelingShown:(bool)arg1;
- (void)setHasNumberPoisInView:(bool)arg1;
- (void)setHasZoomLevel:(bool)arg1;
- (void)setHeading:(unsigned int)arg1;
- (void)setIsLabelingShown:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setNumberPoisInView:(unsigned int)arg1;
- (void)setZoomLevel:(double)arg1;
- (void)writeTo:(id)arg1;
- (double)zoomLevel;

@end
