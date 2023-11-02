
@interface POMMESSchemaPOMMESPegasusSearchQueryAmpUserState : SISchemaInstrumentationMessage {
    struct { 
        unsigned int hasAmpSubscriptionStatus : 1; 
        unsigned int hasItunesSubscriptionStatus : 1; 
        unsigned int hasUserToken : 1; 
        unsigned int hasSharedUserId : 1; 
    }  _has;
    bool  _hasAmpSubscriptionStatus;
    bool  _hasItunesSubscriptionStatus;
    bool  _hasSharedUserId;
    bool  _hasUserToken;
}

@property (nonatomic) bool hasAmpSubscriptionStatus;
@property (nonatomic) bool hasHasAmpSubscriptionStatus;
@property (nonatomic) bool hasHasItunesSubscriptionStatus;
@property (nonatomic) bool hasHasSharedUserId;
@property (nonatomic) bool hasHasUserToken;
@property (nonatomic) bool hasItunesSubscriptionStatus;
@property (nonatomic) bool hasSharedUserId;
@property (nonatomic) bool hasUserToken;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteHasAmpSubscriptionStatus;
- (void)deleteHasItunesSubscriptionStatus;
- (void)deleteHasSharedUserId;
- (void)deleteHasUserToken;
- (id)dictionaryRepresentation;
- (bool)hasAmpSubscriptionStatus;
- (bool)hasHasAmpSubscriptionStatus;
- (bool)hasHasItunesSubscriptionStatus;
- (bool)hasHasSharedUserId;
- (bool)hasHasUserToken;
- (bool)hasItunesSubscriptionStatus;
- (bool)hasSharedUserId;
- (bool)hasUserToken;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasAmpSubscriptionStatus:(bool)arg1;
- (void)setHasHasAmpSubscriptionStatus:(bool)arg1;
- (void)setHasHasItunesSubscriptionStatus:(bool)arg1;
- (void)setHasHasSharedUserId:(bool)arg1;
- (void)setHasHasUserToken:(bool)arg1;
- (void)setHasItunesSubscriptionStatus:(bool)arg1;
- (void)setHasSharedUserId:(bool)arg1;
- (void)setHasUserToken:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
