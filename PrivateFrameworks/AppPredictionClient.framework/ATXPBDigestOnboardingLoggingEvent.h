
@interface ATXPBDigestOnboardingLoggingEvent : PBCodable <NSCopying> {
    NSMutableArray * _deliveryTimes;
    bool  _didSelectShowMore;
    int  _digestOnboardingOutcome;
    int  _entrySource;
    int  _finalUIShown;
    struct { 
        unsigned int timeTaken : 1; 
        unsigned int digestOnboardingOutcome : 1; 
        unsigned int entrySource : 1; 
        unsigned int finalUIShown : 1; 
        unsigned int didSelectShowMore : 1; 
    }  _has;
    NSString * _sessionUUID;
    double  _timeTaken;
}

@property (nonatomic, retain) NSMutableArray *deliveryTimes;
@property (nonatomic) bool didSelectShowMore;
@property (nonatomic) int digestOnboardingOutcome;
@property (nonatomic) int entrySource;
@property (nonatomic) int finalUIShown;
@property (nonatomic) bool hasDidSelectShowMore;
@property (nonatomic) bool hasDigestOnboardingOutcome;
@property (nonatomic) bool hasEntrySource;
@property (nonatomic) bool hasFinalUIShown;
@property (nonatomic, readonly) bool hasSessionUUID;
@property (nonatomic) bool hasTimeTaken;
@property (nonatomic, retain) NSString *sessionUUID;
@property (nonatomic) double timeTaken;

+ (Class)deliveryTimesType;

- (void).cxx_destruct;
- (int)StringAsDigestOnboardingOutcome:(id)arg1;
- (int)StringAsEntrySource:(id)arg1;
- (int)StringAsFinalUIShown:(id)arg1;
- (void)addDeliveryTimes:(id)arg1;
- (void)clearDeliveryTimes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deliveryTimes;
- (id)deliveryTimesAtIndex:(unsigned long long)arg1;
- (unsigned long long)deliveryTimesCount;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)didSelectShowMore;
- (int)digestOnboardingOutcome;
- (id)digestOnboardingOutcomeAsString:(int)arg1;
- (int)entrySource;
- (id)entrySourceAsString:(int)arg1;
- (int)finalUIShown;
- (id)finalUIShownAsString:(int)arg1;
- (bool)hasDidSelectShowMore;
- (bool)hasDigestOnboardingOutcome;
- (bool)hasEntrySource;
- (bool)hasFinalUIShown;
- (bool)hasSessionUUID;
- (bool)hasTimeTaken;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sessionUUID;
- (void)setDeliveryTimes:(id)arg1;
- (void)setDidSelectShowMore:(bool)arg1;
- (void)setDigestOnboardingOutcome:(int)arg1;
- (void)setEntrySource:(int)arg1;
- (void)setFinalUIShown:(int)arg1;
- (void)setHasDidSelectShowMore:(bool)arg1;
- (void)setHasDigestOnboardingOutcome:(bool)arg1;
- (void)setHasEntrySource:(bool)arg1;
- (void)setHasFinalUIShown:(bool)arg1;
- (void)setHasTimeTaken:(bool)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setTimeTaken:(double)arg1;
- (double)timeTaken;
- (void)writeTo:(id)arg1;

@end
