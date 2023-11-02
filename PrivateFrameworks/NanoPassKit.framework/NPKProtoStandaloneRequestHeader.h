
@interface NPKProtoStandaloneRequestHeader : PBCodable <NSCopying> {
    NSMutableArray * _cachedHeroImages;
    int  _protocolVersion;
    NSString * _sessionIdentifier;
    NSString * _stepIdentifier;
}

@property (nonatomic, retain) NSMutableArray *cachedHeroImages;
@property (nonatomic, readonly) bool hasSessionIdentifier;
@property (nonatomic, readonly) bool hasStepIdentifier;
@property (nonatomic) int protocolVersion;
@property (nonatomic, retain) NSString *sessionIdentifier;
@property (nonatomic, retain) NSString *stepIdentifier;

+ (Class)cachedHeroImagesType;

- (void).cxx_destruct;
- (int)StringAsProtocolVersion:(id)arg1;
- (void)addCachedHeroImages:(id)arg1;
- (id)cachedHeroImages;
- (id)cachedHeroImagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)cachedHeroImagesCount;
- (void)clearCachedHeroImages;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSessionIdentifier;
- (bool)hasStepIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)protocolVersion;
- (id)protocolVersionAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (id)sessionIdentifier;
- (void)setCachedHeroImages:(id)arg1;
- (void)setProtocolVersion:(int)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setStepIdentifier:(id)arg1;
- (id)stepIdentifier;
- (void)writeTo:(id)arg1;

@end
