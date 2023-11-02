
@interface PPM2NamedEntitiesPerDonation : PBCodable <NSCopying> {
    NSString * _activeTreatments;
    int  _algorithm;
    int  _donationSource;
    NSString * _groupId;
    struct { 
        unsigned int algorithm : 1; 
        unsigned int donationSource : 1; 
    }  _has;
}

@property (nonatomic, retain) NSString *activeTreatments;
@property (nonatomic) int algorithm;
@property (nonatomic) int donationSource;
@property (nonatomic, retain) NSString *groupId;
@property (nonatomic, readonly) bool hasActiveTreatments;
@property (nonatomic) bool hasAlgorithm;
@property (nonatomic) bool hasDonationSource;
@property (nonatomic, readonly) bool hasGroupId;

- (void).cxx_destruct;
- (int)StringAsAlgorithm:(id)arg1;
- (int)StringAsDonationSource:(id)arg1;
- (id)activeTreatments;
- (int)algorithm;
- (id)algorithmAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)donationSource;
- (id)donationSourceAsString:(int)arg1;
- (id)groupId;
- (bool)hasActiveTreatments;
- (bool)hasAlgorithm;
- (bool)hasDonationSource;
- (bool)hasGroupId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActiveTreatments:(id)arg1;
- (void)setAlgorithm:(int)arg1;
- (void)setDonationSource:(int)arg1;
- (void)setGroupId:(id)arg1;
- (void)setHasAlgorithm:(bool)arg1;
- (void)setHasDonationSource:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
