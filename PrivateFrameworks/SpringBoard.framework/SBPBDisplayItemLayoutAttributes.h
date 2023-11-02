
@interface SBPBDisplayItemLayoutAttributes : PBCodable <NSCopying> {
    double  _centerX;
    double  _centerY;
    long long  _contentOrientation;
    long long  _lastInteractionTime;
    bool  _positionIsSystemManaged;
    double  _referenceBoundsHeightBeforeOverlapping;
    double  _referenceBoundsHeightForSize;
    double  _referenceBoundsWidthBeforeOverlapping;
    double  _referenceBoundsWidthForSize;
    int  _semanticSizeTypeBeforeOverlapping;
    int  _semanticSizeTypeForSize;
    double  _sizeHeight;
    double  _sizeWidth;
    long long  _sizingPolicy;
    double  _userSizeBeforeOverlappingInBoundsHeight;
    double  _userSizeBeforeOverlappingInBoundsWidth;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
