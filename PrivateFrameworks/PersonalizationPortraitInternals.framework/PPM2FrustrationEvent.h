
@interface PPM2FrustrationEvent : PBCodable <NSCopying> {
    NSString * _activeTreatments;
    NSString * _bundleId;
    NSString * _clientId;
    int  _domain;
    struct { 
        unsigned int domain : 1; 
    }  _has;
}

@property (nonatomic, retain) NSString *activeTreatments;
@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic, retain) NSString *clientId;
@property (nonatomic) int domain;
@property (nonatomic, readonly) bool hasActiveTreatments;
@property (nonatomic, readonly) bool hasBundleId;
@property (nonatomic, readonly) bool hasClientId;
@property (nonatomic) bool hasDomain;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsDomain:(id)arg1;
- (id)activeTreatments;
- (id)bundleId;
- (id)clientId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)domain;
- (id)domainAsString:(int)arg1;
- (bool)hasActiveTreatments;
- (bool)hasBundleId;
- (bool)hasClientId;
- (bool)hasDomain;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActiveTreatments:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setClientId:(id)arg1;
- (void)setDomain:(int)arg1;
- (void)setHasDomain:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
