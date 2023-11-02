
@interface PSESchemaPSEMessage : SISchemaInstrumentationMessage {
    int  _contactMatch;
    struct { 
        unsigned int hasUserInitiatedFollowup : 1; 
        unsigned int userFollowupEventDonationTimeInSecondsSince2001 : 1; 
        unsigned int messageUserFollowupAction : 1; 
        unsigned int contactMatch : 1; 
    }  _has;
    bool  _hasUserInitiatedFollowup;
    int  _messageUserFollowupAction;
    double  _userFollowupEventDonationTimeInSecondsSince2001;
}

@property (nonatomic) int contactMatch;
@property (nonatomic) bool hasContactMatch;
@property (nonatomic) bool hasHasUserInitiatedFollowup;
@property (nonatomic) bool hasMessageUserFollowupAction;
@property (nonatomic) bool hasUserFollowupEventDonationTimeInSecondsSince2001;
@property (nonatomic) bool hasUserInitiatedFollowup;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int messageUserFollowupAction;
@property (nonatomic) double userFollowupEventDonationTimeInSecondsSince2001;

- (int)contactMatch;
- (void)deleteContactMatch;
- (void)deleteHasUserInitiatedFollowup;
- (void)deleteMessageUserFollowupAction;
- (void)deleteUserFollowupEventDonationTimeInSecondsSince2001;
- (id)dictionaryRepresentation;
- (bool)hasContactMatch;
- (bool)hasHasUserInitiatedFollowup;
- (bool)hasMessageUserFollowupAction;
- (bool)hasUserFollowupEventDonationTimeInSecondsSince2001;
- (bool)hasUserInitiatedFollowup;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)messageUserFollowupAction;
- (bool)readFrom:(id)arg1;
- (void)setContactMatch:(int)arg1;
- (void)setHasContactMatch:(bool)arg1;
- (void)setHasHasUserInitiatedFollowup:(bool)arg1;
- (void)setHasMessageUserFollowupAction:(bool)arg1;
- (void)setHasUserFollowupEventDonationTimeInSecondsSince2001:(bool)arg1;
- (void)setHasUserInitiatedFollowup:(bool)arg1;
- (void)setMessageUserFollowupAction:(int)arg1;
- (void)setUserFollowupEventDonationTimeInSecondsSince2001:(double)arg1;
- (id)suppressMessageUnderConditions;
- (double)userFollowupEventDonationTimeInSecondsSince2001;
- (void)writeTo:(id)arg1;

@end
