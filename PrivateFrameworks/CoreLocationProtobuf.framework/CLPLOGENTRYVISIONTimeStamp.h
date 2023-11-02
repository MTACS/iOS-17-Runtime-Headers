
@interface CLPLOGENTRYVISIONTimeStamp : PBCodable <NSCopying> {
    double  _cfAbsoluteTimeS;
    struct { 
        unsigned int cfAbsoluteTimeS : 1; 
        unsigned int machAbsoluteTimeS : 1; 
        unsigned int machContinuousTimeS : 1; 
    }  _has;
    double  _machAbsoluteTimeS;
    double  _machContinuousTimeS;
}

@property (nonatomic) double cfAbsoluteTimeS;
@property (nonatomic) bool hasCfAbsoluteTimeS;
@property (nonatomic) bool hasMachAbsoluteTimeS;
@property (nonatomic) bool hasMachContinuousTimeS;
@property (nonatomic) double machAbsoluteTimeS;
@property (nonatomic) double machContinuousTimeS;

- (double)cfAbsoluteTimeS;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCfAbsoluteTimeS;
- (bool)hasMachAbsoluteTimeS;
- (bool)hasMachContinuousTimeS;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)machAbsoluteTimeS;
- (double)machContinuousTimeS;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCfAbsoluteTimeS:(double)arg1;
- (void)setHasCfAbsoluteTimeS:(bool)arg1;
- (void)setHasMachAbsoluteTimeS:(bool)arg1;
- (void)setHasMachContinuousTimeS:(bool)arg1;
- (void)setMachAbsoluteTimeS:(double)arg1;
- (void)setMachContinuousTimeS:(double)arg1;
- (void)writeTo:(id)arg1;

@end
