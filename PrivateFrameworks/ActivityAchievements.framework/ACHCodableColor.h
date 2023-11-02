
@interface ACHCodableColor : PBCodable <NSCopying> {
    double  _blue;
    double  _green;
    struct { 
        unsigned int blue : 1; 
        unsigned int green : 1; 
        unsigned int red : 1; 
    }  _has;
    double  _red;
}

@property (nonatomic) double blue;
@property (nonatomic) double green;
@property (nonatomic) bool hasBlue;
@property (nonatomic) bool hasGreen;
@property (nonatomic) bool hasRed;
@property (nonatomic) double red;

- (double)blue;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)green;
- (bool)hasBlue;
- (bool)hasGreen;
- (bool)hasRed;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (double)red;
- (void)setBlue:(double)arg1;
- (void)setGreen:(double)arg1;
- (void)setHasBlue:(bool)arg1;
- (void)setHasGreen:(bool)arg1;
- (void)setHasRed:(bool)arg1;
- (void)setRed:(double)arg1;
- (void)writeTo:(id)arg1;

@end
