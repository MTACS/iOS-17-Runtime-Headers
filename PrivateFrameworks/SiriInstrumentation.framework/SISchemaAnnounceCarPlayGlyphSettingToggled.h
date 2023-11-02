
@interface SISchemaAnnounceCarPlayGlyphSettingToggled : SISchemaInstrumentationMessage {
    bool  _announcementsMuted;
    struct { 
        unsigned int announcementsMuted : 1; 
    }  _has;
}

@property (nonatomic) bool announcementsMuted;
@property (nonatomic) bool hasAnnouncementsMuted;
@property (nonatomic, readonly) NSData *jsonData;

- (bool)announcementsMuted;
- (void)deleteAnnouncementsMuted;
- (id)dictionaryRepresentation;
- (bool)hasAnnouncementsMuted;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAnnouncementsMuted:(bool)arg1;
- (void)setHasAnnouncementsMuted:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
