
@interface SISchemaEngagedAccessoryContext : SISchemaInstrumentationMessage {
    NSString * _accessoryBrand;
    SISchemaUUID * _accessoryId;
    NSString * _accessoryModel;
    struct { 
        unsigned int homeKitAccessoryType : 1; 
        unsigned int isAudioPlaybackCapable : 1; 
        unsigned int isThirdPartyMusicEnabled : 1; 
    }  _has;
    bool  _hasAccessoryBrand;
    bool  _hasAccessoryId;
    bool  _hasAccessoryModel;
    int  _homeKitAccessoryType;
    bool  _isAudioPlaybackCapable;
    bool  _isThirdPartyMusicEnabled;
}

@property (nonatomic, copy) NSString *accessoryBrand;
@property (nonatomic, retain) SISchemaUUID *accessoryId;
@property (nonatomic, copy) NSString *accessoryModel;
@property (nonatomic) bool hasAccessoryBrand;
@property (nonatomic) bool hasAccessoryId;
@property (nonatomic) bool hasAccessoryModel;
@property (nonatomic) bool hasHomeKitAccessoryType;
@property (nonatomic) bool hasIsAudioPlaybackCapable;
@property (nonatomic) bool hasIsThirdPartyMusicEnabled;
@property (nonatomic) int homeKitAccessoryType;
@property (nonatomic) bool isAudioPlaybackCapable;
@property (nonatomic) bool isThirdPartyMusicEnabled;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)accessoryBrand;
- (id)accessoryId;
- (id)accessoryModel;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteAccessoryBrand;
- (void)deleteAccessoryId;
- (void)deleteAccessoryModel;
- (void)deleteHomeKitAccessoryType;
- (void)deleteIsAudioPlaybackCapable;
- (void)deleteIsThirdPartyMusicEnabled;
- (id)dictionaryRepresentation;
- (bool)hasAccessoryBrand;
- (bool)hasAccessoryId;
- (bool)hasAccessoryModel;
- (bool)hasHomeKitAccessoryType;
- (bool)hasIsAudioPlaybackCapable;
- (bool)hasIsThirdPartyMusicEnabled;
- (unsigned long long)hash;
- (int)homeKitAccessoryType;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isAudioPlaybackCapable;
- (bool)isEqual:(id)arg1;
- (bool)isThirdPartyMusicEnabled;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAccessoryBrand:(id)arg1;
- (void)setAccessoryId:(id)arg1;
- (void)setAccessoryModel:(id)arg1;
- (void)setHasAccessoryBrand:(bool)arg1;
- (void)setHasAccessoryId:(bool)arg1;
- (void)setHasAccessoryModel:(bool)arg1;
- (void)setHasHomeKitAccessoryType:(bool)arg1;
- (void)setHasIsAudioPlaybackCapable:(bool)arg1;
- (void)setHasIsThirdPartyMusicEnabled:(bool)arg1;
- (void)setHomeKitAccessoryType:(int)arg1;
- (void)setIsAudioPlaybackCapable:(bool)arg1;
- (void)setIsThirdPartyMusicEnabled:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
