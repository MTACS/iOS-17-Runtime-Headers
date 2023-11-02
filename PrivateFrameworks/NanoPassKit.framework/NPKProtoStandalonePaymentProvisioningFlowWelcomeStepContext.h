
@interface NPKProtoStandalonePaymentProvisioningFlowWelcomeStepContext : PBCodable <NSCopying> {
    NSMutableArray * _heroImages;
}

@property (nonatomic, retain) NSMutableArray *heroImages;

+ (Class)heroImagesType;

- (void).cxx_destruct;
- (void)addHeroImages:(id)arg1;
- (void)clearHeroImages;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)heroImages;
- (id)heroImagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)heroImagesCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHeroImages:(id)arg1;
- (void)writeTo:(id)arg1;

@end
