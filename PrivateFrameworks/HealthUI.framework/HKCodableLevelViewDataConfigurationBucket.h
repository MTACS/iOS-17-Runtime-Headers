
@interface HKCodableLevelViewDataConfigurationBucket : PBCodable <NSCopying> {
    bool  _highlighted;
    HKCodableClosedRange * _range;
}

@property (nonatomic) bool highlighted;
@property (nonatomic, retain) HKCodableClosedRange *range;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)highlighted;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)range;
- (bool)readFrom:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setRange:(id)arg1;
- (void)writeTo:(id)arg1;

@end
