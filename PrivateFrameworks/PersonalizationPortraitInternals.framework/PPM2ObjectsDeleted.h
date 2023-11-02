
@interface PPM2ObjectsDeleted : PBCodable <NSCopying> {
    int  _domain;
    int  _donationSource;
    bool  _error;
    struct { 
        unsigned int domain : 1; 
        unsigned int donationSource : 1; 
        unsigned int error : 1; 
    }  _has;
}

@property (nonatomic) int domain;
@property (nonatomic) int donationSource;
@property (nonatomic) bool error;
@property (nonatomic) bool hasDomain;
@property (nonatomic) bool hasDonationSource;
@property (nonatomic) bool hasError;

+ (id)options;

- (int)StringAsDomain:(id)arg1;
- (int)StringAsDonationSource:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)domain;
- (id)domainAsString:(int)arg1;
- (int)donationSource;
- (id)donationSourceAsString:(int)arg1;
- (bool)error;
- (bool)hasDomain;
- (bool)hasDonationSource;
- (bool)hasError;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDomain:(int)arg1;
- (void)setDonationSource:(int)arg1;
- (void)setError:(bool)arg1;
- (void)setHasDomain:(bool)arg1;
- (void)setHasDonationSource:(bool)arg1;
- (void)setHasError:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
