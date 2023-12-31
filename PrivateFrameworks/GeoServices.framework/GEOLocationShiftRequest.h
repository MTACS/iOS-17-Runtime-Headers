
@interface GEOLocationShiftRequest : PBRequest <NSCopying> {
    struct GEOPixelPoint { 
        double _x; 
        double _y; 
        int _z; 
        struct { 
            unsigned int z : 1; 
        } _has; 
    }  _pixel;
}

@property (nonatomic) struct GEOPixelPoint { double x1; double x2; int x3; struct { unsigned int x_4_1_1 : 1; } x4; } pixel;

+ (bool)isValid:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (struct GEOPixelPoint { double x1; double x2; int x3; struct { unsigned int x_4_1_1 : 1; } x4; })pixel;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setPixel:(struct GEOPixelPoint { double x1; double x2; int x3; struct { unsigned int x_4_1_1 : 1; } x4; })arg1;
- (void)writeTo:(id)arg1;

@end
