
@interface TRITrialAssetPurgeFields : PBCodable <NSCopying> {
    struct { 
        unsigned int purgeabilityLevel : 1; 
    }  _has;
    int  _purgeabilityLevel;
}

@property (nonatomic) bool hasPurgeabilityLevel;
@property (nonatomic) int purgeabilityLevel;

+ (int)assetPurgeFieldsPurgeabilityLevelFromPurgeabilityLevel:(int)arg1;

- (int)StringAsPurgeabilityLevel:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPurgeabilityLevel;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)purgeabilityLevel;
- (id)purgeabilityLevelAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasPurgeabilityLevel:(bool)arg1;
- (void)setPurgeabilityLevel:(int)arg1;
- (void)writeTo:(id)arg1;

@end
