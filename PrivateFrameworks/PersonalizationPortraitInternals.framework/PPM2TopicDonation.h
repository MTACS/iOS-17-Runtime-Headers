
@interface PPM2TopicDonation : PBCodable <NSCopying> {
    NSString * _activeTreatments;
    int  _donationSource;
    struct { 
        unsigned int donationSource : 1; 
    }  _has;
}

@property (nonatomic, retain) NSString *activeTreatments;
@property (nonatomic) int donationSource;
@property (nonatomic, readonly) bool hasActiveTreatments;
@property (nonatomic) bool hasDonationSource;

- (void).cxx_destruct;
- (int)StringAsDonationSource:(id)arg1;
- (id)activeTreatments;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)donationSource;
- (id)donationSourceAsString:(int)arg1;
- (bool)hasActiveTreatments;
- (bool)hasDonationSource;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActiveTreatments:(id)arg1;
- (void)setDonationSource:(int)arg1;
- (void)setHasDonationSource:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
