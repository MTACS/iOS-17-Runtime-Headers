
@interface PPM2NamedEntityInitialDonation : PBCodable <NSCopying> {
    NSString * _activeTreatments;
    int  _algorithm;
    struct { 
        unsigned int algorithm : 1; 
        unsigned int source : 1; 
    }  _has;
    int  _source;
}

@property (nonatomic, retain) NSString *activeTreatments;
@property (nonatomic) int algorithm;
@property (nonatomic, readonly) bool hasActiveTreatments;
@property (nonatomic) bool hasAlgorithm;
@property (nonatomic) bool hasSource;
@property (nonatomic) int source;

- (void).cxx_destruct;
- (int)StringAsAlgorithm:(id)arg1;
- (int)StringAsSource:(id)arg1;
- (id)activeTreatments;
- (int)algorithm;
- (id)algorithmAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActiveTreatments;
- (bool)hasAlgorithm;
- (bool)hasSource;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActiveTreatments:(id)arg1;
- (void)setAlgorithm:(int)arg1;
- (void)setHasAlgorithm:(bool)arg1;
- (void)setHasSource:(bool)arg1;
- (void)setSource:(int)arg1;
- (int)source;
- (id)sourceAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
