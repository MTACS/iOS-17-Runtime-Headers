
@interface FLOWSchemaFLOWMediaPlayerPlaylistContext : SISchemaInstrumentationMessage {
    struct { 
        unsigned int playlistSubtype : 1; 
    }  _has;
    int  _playlistSubtype;
}

@property (nonatomic) bool hasPlaylistSubtype;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int playlistSubtype;

- (void)deletePlaylistSubtype;
- (id)dictionaryRepresentation;
- (bool)hasPlaylistSubtype;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)playlistSubtype;
- (bool)readFrom:(id)arg1;
- (void)setHasPlaylistSubtype:(bool)arg1;
- (void)setPlaylistSubtype:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
