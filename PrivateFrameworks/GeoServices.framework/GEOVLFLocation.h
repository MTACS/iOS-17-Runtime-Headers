
@interface GEOVLFLocation : PBCodable <NSCopying> {
    struct GEOECEFCoordinate { 
        double _x; 
        double _y; 
        double _z; 
        struct { 
            unsigned int x : 1; 
            unsigned int y : 1; 
            unsigned int z : 1; 
        } _has; 
    }  _ecefLocation;
    struct { 
        unsigned int has_ecefLocation : 1; 
        unsigned int has_heading : 1; 
        unsigned int has_horizontalAccuracy : 1; 
        unsigned int has_verticalAccuracy : 1; 
        unsigned int has_type : 1; 
        unsigned int has_isFused : 1; 
    }  _flags;
    double  _heading;
    double  _horizontalAccuracy;
    bool  _isFused;
    GEOLatLng * _location;
    int  _type;
    double  _verticalAccuracy;
}

@property (nonatomic) struct GEOECEFCoordinate { double x1; double x2; double x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; } ecefLocation;
@property (nonatomic) bool hasEcefLocation;
@property (nonatomic) bool hasHeading;
@property (nonatomic) bool hasHorizontalAccuracy;
@property (nonatomic) bool hasIsFused;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic) bool hasType;
@property (nonatomic) bool hasVerticalAccuracy;
@property (nonatomic) double heading;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) bool isFused;
@property (nonatomic, retain) GEOLatLng *location;
@property (nonatomic) int type;
@property (nonatomic) double verticalAccuracy;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (struct GEOECEFCoordinate { double x1; double x2; double x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })ecefLocation;
- (bool)hasEcefLocation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasHeading;
- (bool)hasHorizontalAccuracy;
- (bool)hasIsFused;
- (bool)hasLocation;
- (bool)hasType;
- (bool)hasVerticalAccuracy;
- (unsigned long long)hash;
- (double)heading;
- (double)horizontalAccuracy;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFused;
- (id)jsonRepresentation;
- (id)location;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEcefLocation:(struct GEOECEFCoordinate { double x1; double x2; double x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })arg1;
- (void)setHasEcefLocation:(bool)arg1;
- (void)setHasHeading:(bool)arg1;
- (void)setHasHorizontalAccuracy:(bool)arg1;
- (void)setHasIsFused:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHasVerticalAccuracy:(bool)arg1;
- (void)setHeading:(double)arg1;
- (void)setHorizontalAccuracy:(double)arg1;
- (void)setIsFused:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setType:(int)arg1;
- (void)setVerticalAccuracy:(double)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (double)verticalAccuracy;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/VisualLocalization.framework/VisualLocalization

- (id)initWithCLLocation:(id)arg1 location:(const struct { double x1[3]; float x2; int x3; int x4; }*)arg2 heading:(double)arg3;

@end
