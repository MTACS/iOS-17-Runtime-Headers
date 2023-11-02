
@interface SISchemaAnnounceNotifications : SISchemaInstrumentationMessage {
    int  _carPlayStatus;
    struct { 
        unsigned int isEnabled : 1; 
        unsigned int proxCardSeen : 1; 
        unsigned int replyWithoutConfirmation : 1; 
        unsigned int carPlayStatus : 1; 
        unsigned int isEnabledForHeadphones : 1; 
        unsigned int isCarPlayMuted : 1; 
    }  _has;
    bool  _isCarPlayMuted;
    bool  _isEnabled;
    bool  _isEnabledForHeadphones;
    bool  _proxCardSeen;
    bool  _replyWithoutConfirmation;
}

@property (nonatomic) int carPlayStatus;
@property (nonatomic) bool hasCarPlayStatus;
@property (nonatomic) bool hasIsCarPlayMuted;
@property (nonatomic) bool hasIsEnabled;
@property (nonatomic) bool hasIsEnabledForHeadphones;
@property (nonatomic) bool hasProxCardSeen;
@property (nonatomic) bool hasReplyWithoutConfirmation;
@property (nonatomic) bool isCarPlayMuted;
@property (nonatomic) bool isEnabled;
@property (nonatomic) bool isEnabledForHeadphones;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) bool proxCardSeen;
@property (nonatomic) bool replyWithoutConfirmation;

- (int)carPlayStatus;
- (void)deleteCarPlayStatus;
- (void)deleteIsCarPlayMuted;
- (void)deleteIsEnabled;
- (void)deleteIsEnabledForHeadphones;
- (void)deleteProxCardSeen;
- (void)deleteReplyWithoutConfirmation;
- (id)dictionaryRepresentation;
- (bool)hasCarPlayStatus;
- (bool)hasIsCarPlayMuted;
- (bool)hasIsEnabled;
- (bool)hasIsEnabledForHeadphones;
- (bool)hasProxCardSeen;
- (bool)hasReplyWithoutConfirmation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isCarPlayMuted;
- (bool)isEnabled;
- (bool)isEnabledForHeadphones;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)proxCardSeen;
- (bool)readFrom:(id)arg1;
- (bool)replyWithoutConfirmation;
- (void)setCarPlayStatus:(int)arg1;
- (void)setHasCarPlayStatus:(bool)arg1;
- (void)setHasIsCarPlayMuted:(bool)arg1;
- (void)setHasIsEnabled:(bool)arg1;
- (void)setHasIsEnabledForHeadphones:(bool)arg1;
- (void)setHasProxCardSeen:(bool)arg1;
- (void)setHasReplyWithoutConfirmation:(bool)arg1;
- (void)setIsCarPlayMuted:(bool)arg1;
- (void)setIsEnabled:(bool)arg1;
- (void)setIsEnabledForHeadphones:(bool)arg1;
- (void)setProxCardSeen:(bool)arg1;
- (void)setReplyWithoutConfirmation:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
