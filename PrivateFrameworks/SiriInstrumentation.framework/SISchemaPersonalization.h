
@interface SISchemaPersonalization : SISchemaInstrumentationMessage {
    bool  _appleMusicSubscriber;
    struct { 
        unsigned int personalDomainsSetup : 1; 
        unsigned int appleMusicSubscriber : 1; 
    }  _has;
    bool  _hasVoiceSettings;
    bool  _personalDomainsSetup;
    SISchemaVoiceSettings * _voiceSettings;
}

@property (nonatomic) bool appleMusicSubscriber;
@property (nonatomic) bool hasAppleMusicSubscriber;
@property (nonatomic) bool hasPersonalDomainsSetup;
@property (nonatomic) bool hasVoiceSettings;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) bool personalDomainsSetup;
@property (nonatomic, retain) SISchemaVoiceSettings *voiceSettings;

- (void).cxx_destruct;
- (bool)appleMusicSubscriber;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteAppleMusicSubscriber;
- (void)deletePersonalDomainsSetup;
- (void)deleteVoiceSettings;
- (id)dictionaryRepresentation;
- (bool)hasAppleMusicSubscriber;
- (bool)hasPersonalDomainsSetup;
- (bool)hasVoiceSettings;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)personalDomainsSetup;
- (bool)readFrom:(id)arg1;
- (void)setAppleMusicSubscriber:(bool)arg1;
- (void)setHasAppleMusicSubscriber:(bool)arg1;
- (void)setHasPersonalDomainsSetup:(bool)arg1;
- (void)setHasVoiceSettings:(bool)arg1;
- (void)setPersonalDomainsSetup:(bool)arg1;
- (void)setVoiceSettings:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)voiceSettings;
- (void)writeTo:(id)arg1;

@end
