
@interface HKCodableMenstrualCyclesProjectionHighlightTileViewModel : PBCodable <NSCopying> {
    struct APPLE_HKCodableMenstrualCyclesProjectionHighlightTileViewModel_1 { 
        unsigned int latestSupportedVersion : 1; 
        unsigned int minimumSupportedVersion : 1; 
    }  _has;
    long long  _latestSupportedVersion;
    long long  _minimumSupportedVersion;
    HKCodableMenstrualCyclesProjection * _projection;
    HKCodableMenstrualCyclesProjectionKind * _projectionKind;
}

@property (nonatomic) bool hasLatestSupportedVersion;
@property (nonatomic) bool hasMinimumSupportedVersion;
@property (nonatomic, readonly) bool hasProjection;
@property (nonatomic, readonly) bool hasProjectionKind;
@property (nonatomic) long long latestSupportedVersion;
@property (nonatomic) long long minimumSupportedVersion;
@property (nonatomic, retain) HKCodableMenstrualCyclesProjection *projection;
@property (nonatomic, retain) HKCodableMenstrualCyclesProjectionKind *projectionKind;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLatestSupportedVersion;
- (bool)hasMinimumSupportedVersion;
- (bool)hasProjection;
- (bool)hasProjectionKind;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)latestSupportedVersion;
- (void)mergeFrom:(id)arg1;
- (long long)minimumSupportedVersion;
- (id)projection;
- (id)projectionKind;
- (bool)readFrom:(id)arg1;
- (void)setHasLatestSupportedVersion:(bool)arg1;
- (void)setHasMinimumSupportedVersion:(bool)arg1;
- (void)setLatestSupportedVersion:(long long)arg1;
- (void)setMinimumSupportedVersion:(long long)arg1;
- (void)setProjection:(id)arg1;
- (void)setProjectionKind:(id)arg1;
- (void)writeTo:(id)arg1;

@end
