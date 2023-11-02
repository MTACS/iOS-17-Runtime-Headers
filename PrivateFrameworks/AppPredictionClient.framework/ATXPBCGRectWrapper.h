
@interface ATXPBCGRectWrapper : PBCodable <NSCopying> {
    double  _height;
    double  _width;
    double  _x;
    double  _y;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
