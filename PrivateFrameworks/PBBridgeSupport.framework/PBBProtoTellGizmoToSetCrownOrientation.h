
@interface PBBProtoTellGizmoToSetCrownOrientation : PBCodable <NSCopying> {
    bool  _crownOrientationRight;
    struct { 
        unsigned int crownOrientationRight : 1; 
    }  _has;
}

@property (nonatomic) bool crownOrientationRight;
@property (nonatomic) bool hasCrownOrientationRight;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)crownOrientationRight;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCrownOrientationRight;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCrownOrientationRight:(bool)arg1;
- (void)setHasCrownOrientationRight:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
