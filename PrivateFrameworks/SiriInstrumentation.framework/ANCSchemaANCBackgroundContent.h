
@interface ANCSchemaANCBackgroundContent : SISchemaInstrumentationMessage {
    struct { 
        unsigned int mediaType : 1; 
        unsigned int isFocusModeEnabled : 1; 
    }  _has;
    bool  _isFocusModeEnabled;
    int  _mediaType;
}

@property (nonatomic) bool hasIsFocusModeEnabled;
@property (nonatomic) bool hasMediaType;
@property (nonatomic) bool isFocusModeEnabled;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int mediaType;

- (void)deleteIsFocusModeEnabled;
- (void)deleteMediaType;
- (id)dictionaryRepresentation;
- (bool)hasIsFocusModeEnabled;
- (bool)hasMediaType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFocusModeEnabled;
- (id)jsonData;
- (int)mediaType;
- (bool)readFrom:(id)arg1;
- (void)setHasIsFocusModeEnabled:(bool)arg1;
- (void)setHasMediaType:(bool)arg1;
- (void)setIsFocusModeEnabled:(bool)arg1;
- (void)setMediaType:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
