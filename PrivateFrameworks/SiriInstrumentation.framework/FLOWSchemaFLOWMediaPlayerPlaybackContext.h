
@interface FLOWSchemaFLOWMediaPlayerPlaybackContext : SISchemaInstrumentationMessage {
    int  _contentSource;
    int  _endpoint;
    int  _executionSource;
    struct { 
        unsigned int executionSource : 1; 
        unsigned int endpoint : 1; 
        unsigned int contentSource : 1; 
    }  _has;
    bool  _hasLinkId;
    bool  _hasPlaylistContext;
    bool  _hasRadioStationContext;
    SISchemaUUID * _linkId;
    FLOWSchemaFLOWMediaPlayerPlaylistContext * _playlistContext;
    FLOWSchemaFLOWMediaPlayerRadioStationContext * _radioStationContext;
    unsigned long long  _whichContenttype;
}

@property (nonatomic) int contentSource;
@property (nonatomic) int endpoint;
@property (nonatomic) int executionSource;
@property (nonatomic) bool hasContentSource;
@property (nonatomic) bool hasEndpoint;
@property (nonatomic) bool hasExecutionSource;
@property (nonatomic) bool hasLinkId;
@property (nonatomic) bool hasPlaylistContext;
@property (nonatomic) bool hasRadioStationContext;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;
@property (nonatomic, retain) FLOWSchemaFLOWMediaPlayerPlaylistContext *playlistContext;
@property (nonatomic, retain) FLOWSchemaFLOWMediaPlayerRadioStationContext *radioStationContext;
@property (nonatomic, readonly) unsigned long long whichContenttype;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)contentSource;
- (void)deleteContentSource;
- (void)deleteEndpoint;
- (void)deleteExecutionSource;
- (void)deleteLinkId;
- (void)deletePlaylistContext;
- (void)deleteRadioStationContext;
- (id)dictionaryRepresentation;
- (int)endpoint;
- (int)executionSource;
- (bool)hasContentSource;
- (bool)hasEndpoint;
- (bool)hasExecutionSource;
- (bool)hasLinkId;
- (bool)hasPlaylistContext;
- (bool)hasRadioStationContext;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (id)playlistContext;
- (id)radioStationContext;
- (bool)readFrom:(id)arg1;
- (void)setContentSource:(int)arg1;
- (void)setEndpoint:(int)arg1;
- (void)setExecutionSource:(int)arg1;
- (void)setHasContentSource:(bool)arg1;
- (void)setHasEndpoint:(bool)arg1;
- (void)setHasExecutionSource:(bool)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setHasPlaylistContext:(bool)arg1;
- (void)setHasRadioStationContext:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (void)setPlaylistContext:(id)arg1;
- (void)setRadioStationContext:(id)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichContenttype;
- (void)writeTo:(id)arg1;

@end
