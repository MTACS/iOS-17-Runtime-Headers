
@interface GEOPDLensProjection : PBCodable <NSCopying> {
    double  _cx;
    double  _cy;
    struct { 
        unsigned int has_cx : 1; 
        unsigned int has_cy : 1; 
        unsigned int has_fovH : 1; 
        unsigned int has_fovS : 1; 
        unsigned int has_k2 : 1; 
        unsigned int has_k3 : 1; 
        unsigned int has_k4 : 1; 
        unsigned int has_lx : 1; 
        unsigned int has_ly : 1; 
        unsigned int has_type : 1; 
    }  _flags;
    double  _fovH;
    double  _fovS;
    double  _k2;
    double  _k3;
    double  _k4;
    double  _lx;
    double  _ly;
    int  _type;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
