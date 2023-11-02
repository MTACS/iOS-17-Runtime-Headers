
@interface PPM2DonationInterval : PBCodable <NSCopying> {
    int  _domain;
    struct { 
        unsigned int domain : 1; 
        unsigned int interval : 1; 
        unsigned int source : 1; 
        unsigned int isFirstDonation : 1; 
    }  _has;
    unsigned int  _interval;
    bool  _isFirstDonation;
    int  _source;
}

@property (nonatomic) int domain;
@property (nonatomic) bool hasDomain;
@property (nonatomic) bool hasInterval;
@property (nonatomic) bool hasIsFirstDonation;
@property (nonatomic) bool hasSource;
@property (nonatomic) unsigned int interval;
@property (nonatomic) bool isFirstDonation;
@property (nonatomic) int source;

- (int)StringAsDomain:(id)arg1;
- (int)StringAsSource:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)domain;
- (id)domainAsString:(int)arg1;
- (bool)hasDomain;
- (bool)hasInterval;
- (bool)hasIsFirstDonation;
- (bool)hasSource;
- (unsigned long long)hash;
- (unsigned int)interval;
- (bool)isEqual:(id)arg1;
- (bool)isFirstDonation;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDomain:(int)arg1;
- (void)setHasDomain:(bool)arg1;
- (void)setHasInterval:(bool)arg1;
- (void)setHasIsFirstDonation:(bool)arg1;
- (void)setHasSource:(bool)arg1;
- (void)setInterval:(unsigned int)arg1;
- (void)setIsFirstDonation:(bool)arg1;
- (void)setSource:(int)arg1;
- (int)source;
- (id)sourceAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
