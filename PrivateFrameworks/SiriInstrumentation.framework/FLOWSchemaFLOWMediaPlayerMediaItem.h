
@interface FLOWSchemaFLOWMediaPlayerMediaItem : SISchemaInstrumentationMessage {
    NSString * _artist;
    NSString * _entityId;
    struct { 
        unsigned int mediaType : 1; 
        unsigned int isAlternative : 1; 
    }  _has;
    bool  _hasArtist;
    bool  _hasEntityId;
    bool  _hasTitle;
    bool  _isAlternative;
    int  _mediaType;
    NSString * _title;
}

@property (nonatomic, copy) NSString *artist;
@property (nonatomic, copy) NSString *entityId;
@property (nonatomic) bool hasArtist;
@property (nonatomic) bool hasEntityId;
@property (nonatomic) bool hasIsAlternative;
@property (nonatomic) bool hasMediaType;
@property (nonatomic) bool hasTitle;
@property (nonatomic) bool isAlternative;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int mediaType;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)artist;
- (void)deleteArtist;
- (void)deleteEntityId;
- (void)deleteIsAlternative;
- (void)deleteMediaType;
- (void)deleteTitle;
- (id)dictionaryRepresentation;
- (id)entityId;
- (bool)hasArtist;
- (bool)hasEntityId;
- (bool)hasIsAlternative;
- (bool)hasMediaType;
- (bool)hasTitle;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isAlternative;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)mediaType;
- (bool)readFrom:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setEntityId:(id)arg1;
- (void)setHasArtist:(bool)arg1;
- (void)setHasEntityId:(bool)arg1;
- (void)setHasIsAlternative:(bool)arg1;
- (void)setHasMediaType:(bool)arg1;
- (void)setHasTitle:(bool)arg1;
- (void)setIsAlternative:(bool)arg1;
- (void)setMediaType:(int)arg1;
- (void)setTitle:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)title;
- (void)writeTo:(id)arg1;

@end
