
@interface ATXPBPredictionAmbientLightContext : PBCodable <NSCopying> {
    int  _ambientLightType;
    struct { 
        unsigned int ambientLightType : 1; 
    }  _has;
}

@property (nonatomic) int ambientLightType;
@property (nonatomic) bool hasAmbientLightType;

- (int)StringAsAmbientLightType:(id)arg1;
- (int)ambientLightType;
- (id)ambientLightTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAmbientLightType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAmbientLightType:(int)arg1;
- (void)setHasAmbientLightType:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
