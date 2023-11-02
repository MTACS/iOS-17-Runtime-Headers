
@interface SISchemaAnnounceEnabledStatus : SISchemaInstrumentationMessage {
    bool  _announceCallsEnabled;
    bool  _announceMessagesEnabled;
    SISchemaAnnounceNotifications * _announceNotifications;
    struct { 
        unsigned int announceMessagesEnabled : 1; 
        unsigned int announceCallsEnabled : 1; 
    }  _has;
    bool  _hasAnnounceNotifications;
}

@property (nonatomic) bool announceCallsEnabled;
@property (nonatomic) bool announceMessagesEnabled;
@property (nonatomic, retain) SISchemaAnnounceNotifications *announceNotifications;
@property (nonatomic) bool hasAnnounceCallsEnabled;
@property (nonatomic) bool hasAnnounceMessagesEnabled;
@property (nonatomic) bool hasAnnounceNotifications;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (bool)announceCallsEnabled;
- (bool)announceMessagesEnabled;
- (id)announceNotifications;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteAnnounceCallsEnabled;
- (void)deleteAnnounceMessagesEnabled;
- (void)deleteAnnounceNotifications;
- (id)dictionaryRepresentation;
- (bool)hasAnnounceCallsEnabled;
- (bool)hasAnnounceMessagesEnabled;
- (bool)hasAnnounceNotifications;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAnnounceCallsEnabled:(bool)arg1;
- (void)setAnnounceMessagesEnabled:(bool)arg1;
- (void)setAnnounceNotifications:(id)arg1;
- (void)setHasAnnounceCallsEnabled:(bool)arg1;
- (void)setHasAnnounceMessagesEnabled:(bool)arg1;
- (void)setHasAnnounceNotifications:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
