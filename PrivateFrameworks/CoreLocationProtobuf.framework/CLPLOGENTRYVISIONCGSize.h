
@interface CLPLOGENTRYVISIONCGSize : PBCodable <NSCopying> {
    struct { 
        unsigned int height : 1; 
        unsigned int width : 1; 
    }  _has;
    double  _height;
    double  _width;
}

@property (nonatomic) bool hasHeight;
@property (nonatomic) bool hasWidth;
@property (nonatomic) double height;
@property (nonatomic) double width;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHeight;
- (bool)hasWidth;
- (unsigned long long)hash;
- (double)height;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasHeight:(bool)arg1;
- (void)setHasWidth:(bool)arg1;
- (void)setHeight:(double)arg1;
- (void)setWidth:(double)arg1;
- (double)width;
- (void)writeTo:(id)arg1;

@end
