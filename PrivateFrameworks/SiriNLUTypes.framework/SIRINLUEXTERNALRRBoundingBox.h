
@interface SIRINLUEXTERNALRRBoundingBox : PBCodable <NSCopying> {
    struct { 
        unsigned int height : 1; 
        unsigned int width : 1; 
        unsigned int xCoordinate : 1; 
        unsigned int yCoordinate : 1; 
    }  _has;
    double  _height;
    double  _width;
    double  _xCoordinate;
    double  _yCoordinate;
}

@property (nonatomic) bool hasHeight;
@property (nonatomic) bool hasWidth;
@property (nonatomic) bool hasXCoordinate;
@property (nonatomic) bool hasYCoordinate;
@property (nonatomic) double height;
@property (nonatomic) double width;
@property (nonatomic) double xCoordinate;
@property (nonatomic) double yCoordinate;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHeight;
- (bool)hasWidth;
- (bool)hasXCoordinate;
- (bool)hasYCoordinate;
- (unsigned long long)hash;
- (double)height;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasHeight:(bool)arg1;
- (void)setHasWidth:(bool)arg1;
- (void)setHasXCoordinate:(bool)arg1;
- (void)setHasYCoordinate:(bool)arg1;
- (void)setHeight:(double)arg1;
- (void)setWidth:(double)arg1;
- (void)setXCoordinate:(double)arg1;
- (void)setYCoordinate:(double)arg1;
- (double)width;
- (void)writeTo:(id)arg1;
- (double)xCoordinate;
- (double)yCoordinate;

@end
