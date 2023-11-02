
@interface LTSchemaTTSSpeechTranslationEvent : SISchemaInstrumentationMessage {
    struct { 
        unsigned int responseTimeMs : 1; 
        unsigned int playbackBeginTimeMs : 1; 
    }  _has;
    bool  _hasRequestID;
    bool  _hasSelectedLocale;
    unsigned int  _playbackBeginTimeMs;
    NSString * _requestID;
    unsigned int  _responseTimeMs;
    NSString * _selectedLocale;
}

@property (nonatomic) bool hasPlaybackBeginTimeMs;
@property (nonatomic) bool hasRequestID;
@property (nonatomic) bool hasResponseTimeMs;
@property (nonatomic) bool hasSelectedLocale;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int playbackBeginTimeMs;
@property (nonatomic, copy) NSString *requestID;
@property (nonatomic) unsigned int responseTimeMs;
@property (nonatomic, copy) NSString *selectedLocale;

- (void).cxx_destruct;
- (void)deletePlaybackBeginTimeMs;
- (void)deleteRequestID;
- (void)deleteResponseTimeMs;
- (void)deleteSelectedLocale;
- (id)dictionaryRepresentation;
- (bool)hasPlaybackBeginTimeMs;
- (bool)hasRequestID;
- (bool)hasResponseTimeMs;
- (bool)hasSelectedLocale;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)playbackBeginTimeMs;
- (bool)readFrom:(id)arg1;
- (id)requestID;
- (unsigned int)responseTimeMs;
- (id)selectedLocale;
- (void)setHasPlaybackBeginTimeMs:(bool)arg1;
- (void)setHasRequestID:(bool)arg1;
- (void)setHasResponseTimeMs:(bool)arg1;
- (void)setHasSelectedLocale:(bool)arg1;
- (void)setPlaybackBeginTimeMs:(unsigned int)arg1;
- (void)setRequestID:(id)arg1;
- (void)setResponseTimeMs:(unsigned int)arg1;
- (void)setSelectedLocale:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
