
@interface PPM2LocationDonation : PBCodable <NSCopying> {
    NSString * _activeTreatments;
    int  _donationSource;
    NSString * _groupId;
    struct { 
        unsigned int donationSource : 1; 
    }  _has;
}

@property (nonatomic, retain) NSString *activeTreatments;
@property (nonatomic) int donationSource;
@property (nonatomic, retain) NSString *groupId;
@property (nonatomic, readonly) bool hasActiveTreatments;
@property (nonatomic) bool hasDonationSource;
@property (nonatomic, readonly) bool hasGroupId;

- (void).cxx_destruct;
- (int)StringAsDonationSource:(id)arg1;
- (id)activeTreatments;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)donationSource;
- (id)donationSourceAsString:(int)arg1;
- (id)groupId;
- (bool)hasActiveTreatments;
- (bool)hasDonationSource;
- (bool)hasGroupId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActiveTreatments:(id)arg1;
- (void)setDonationSource:(int)arg1;
- (void)setGroupId:(id)arg1;
- (void)setHasDonationSource:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
