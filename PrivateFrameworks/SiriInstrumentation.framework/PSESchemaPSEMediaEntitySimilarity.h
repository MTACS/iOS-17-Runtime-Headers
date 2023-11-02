
@interface PSESchemaPSEMediaEntitySimilarity : SISchemaInstrumentationMessage {
    struct { 
        unsigned int isSameMediaTitle : 1; 
        unsigned int isSameMediaArtist : 1; 
        unsigned int isSameMediaAlbum : 1; 
        unsigned int isSameMediaItem : 1; 
    }  _has;
    bool  _isSameMediaAlbum;
    bool  _isSameMediaArtist;
    bool  _isSameMediaItem;
    bool  _isSameMediaTitle;
}

@property (nonatomic) bool hasIsSameMediaAlbum;
@property (nonatomic) bool hasIsSameMediaArtist;
@property (nonatomic) bool hasIsSameMediaItem;
@property (nonatomic) bool hasIsSameMediaTitle;
@property (nonatomic) bool isSameMediaAlbum;
@property (nonatomic) bool isSameMediaArtist;
@property (nonatomic) bool isSameMediaItem;
@property (nonatomic) bool isSameMediaTitle;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteIsSameMediaAlbum;
- (void)deleteIsSameMediaArtist;
- (void)deleteIsSameMediaItem;
- (void)deleteIsSameMediaTitle;
- (id)dictionaryRepresentation;
- (bool)hasIsSameMediaAlbum;
- (bool)hasIsSameMediaArtist;
- (bool)hasIsSameMediaItem;
- (bool)hasIsSameMediaTitle;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSameMediaAlbum;
- (bool)isSameMediaArtist;
- (bool)isSameMediaItem;
- (bool)isSameMediaTitle;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasIsSameMediaAlbum:(bool)arg1;
- (void)setHasIsSameMediaArtist:(bool)arg1;
- (void)setHasIsSameMediaItem:(bool)arg1;
- (void)setHasIsSameMediaTitle:(bool)arg1;
- (void)setIsSameMediaAlbum:(bool)arg1;
- (void)setIsSameMediaArtist:(bool)arg1;
- (void)setIsSameMediaItem:(bool)arg1;
- (void)setIsSameMediaTitle:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
