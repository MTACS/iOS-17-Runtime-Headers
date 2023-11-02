
@interface NACEUVolumeLimitMessage : PBCodable <NSCopying> {
    NSString * _category;
    float  _eUVolumeLimit;
    struct { 
        unsigned int eUVolumeLimit : 1; 
        unsigned int originIdentifier : 1; 
    }  _has;
    int  _originIdentifier;
}

@property (nonatomic, retain) NSString *category;
@property (nonatomic) float eUVolumeLimit;
@property (nonatomic, readonly) bool hasCategory;
@property (nonatomic) bool hasEUVolumeLimit;
@property (nonatomic) bool hasOriginIdentifier;
@property (nonatomic) int originIdentifier;

- (void).cxx_destruct;
- (id)category;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (float)eUVolumeLimit;
- (bool)hasCategory;
- (bool)hasEUVolumeLimit;
- (bool)hasOriginIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)originIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setEUVolumeLimit:(float)arg1;
- (void)setHasEUVolumeLimit:(bool)arg1;
- (void)setHasOriginIdentifier:(bool)arg1;
- (void)setOriginIdentifier:(int)arg1;
- (void)writeTo:(id)arg1;

@end
