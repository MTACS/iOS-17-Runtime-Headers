
@interface PPM2LocationItemDonation : PBCodable <NSCopying> {
    NSString * _activeTreatments;
    int  _algorithm;
    int  _donationSource;
    NSString * _groupId;
    struct { 
        unsigned int rank : 1; 
        unsigned int algorithm : 1; 
        unsigned int donationSource : 1; 
        unsigned int newItem : 1; 
        unsigned int userCreated : 1; 
    }  _has;
    bool  _newItem;
    long long  _rank;
    bool  _userCreated;
}

@property (nonatomic, retain) NSString *activeTreatments;
@property (nonatomic) int algorithm;
@property (nonatomic) int donationSource;
@property (nonatomic, retain) NSString *groupId;
@property (nonatomic, readonly) bool hasActiveTreatments;
@property (nonatomic) bool hasAlgorithm;
@property (nonatomic) bool hasDonationSource;
@property (nonatomic, readonly) bool hasGroupId;
@property (nonatomic) bool hasNewItem;
@property (nonatomic) bool hasRank;
@property (nonatomic) bool hasUserCreated;
@property (nonatomic) bool newItem;
@property (nonatomic) long long rank;
@property (nonatomic) bool userCreated;

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
- (bool)hasNewItem;
- (bool)hasRank;
- (bool)hasUserCreated;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)newItem;
- (long long)rank;
- (bool)readFrom:(id)arg1;
- (void)setActiveTreatments:(id)arg1;
- (void)setAlgorithm:(int)arg1;
- (void)setDonationSource:(int)arg1;
- (void)setGroupId:(id)arg1;
- (void)setHasAlgorithm:(bool)arg1;
- (void)setHasDonationSource:(bool)arg1;
- (void)setHasNewItem:(bool)arg1;
- (void)setHasRank:(bool)arg1;
- (void)setHasUserCreated:(bool)arg1;
- (void)setNewItem:(bool)arg1;
- (void)setRank:(long long)arg1;
- (void)setUserCreated:(bool)arg1;
- (bool)userCreated;
- (void)writeTo:(id)arg1;

@end
