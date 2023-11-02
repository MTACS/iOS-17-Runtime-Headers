
@interface PPM2ExperimentDeployed : PBCodable <NSCopying> {
    NSString * _activeTreatments;
    unsigned int  _delay;
    struct { 
        unsigned int delay : 1; 
    }  _has;
    NSString * _namespaceName;
}

@property (nonatomic, retain) NSString *activeTreatments;
@property (nonatomic) unsigned int delay;
@property (nonatomic, readonly) bool hasActiveTreatments;
@property (nonatomic) bool hasDelay;
@property (nonatomic, readonly) bool hasNamespaceName;
@property (nonatomic, retain) NSString *namespaceName;

- (void).cxx_destruct;
- (id)activeTreatments;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)delay;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActiveTreatments;
- (bool)hasDelay;
- (bool)hasNamespaceName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)namespaceName;
- (bool)readFrom:(id)arg1;
- (void)setActiveTreatments:(id)arg1;
- (void)setDelay:(unsigned int)arg1;
- (void)setHasDelay:(bool)arg1;
- (void)setNamespaceName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
