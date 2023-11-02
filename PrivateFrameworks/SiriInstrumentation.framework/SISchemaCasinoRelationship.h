
@interface SISchemaCasinoRelationship : SISchemaInstrumentationMessage {
    int  _casinoFromType;
    struct { 
        unsigned int casinoFromType : 1; 
    }  _has;
    bool  _hasViewIDFrom;
    bool  _hasViewIDTo;
    NSString * _viewIDFrom;
    NSString * _viewIDTo;
}

@property (nonatomic) int casinoFromType;
@property (nonatomic) bool hasCasinoFromType;
@property (nonatomic) bool hasViewIDFrom;
@property (nonatomic) bool hasViewIDTo;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *viewIDFrom;
@property (nonatomic, copy) NSString *viewIDTo;

- (void).cxx_destruct;
- (int)casinoFromType;
- (void)deleteCasinoFromType;
- (void)deleteViewIDFrom;
- (void)deleteViewIDTo;
- (id)dictionaryRepresentation;
- (bool)hasCasinoFromType;
- (bool)hasViewIDFrom;
- (bool)hasViewIDTo;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCasinoFromType:(int)arg1;
- (void)setHasCasinoFromType:(bool)arg1;
- (void)setHasViewIDFrom:(bool)arg1;
- (void)setHasViewIDTo:(bool)arg1;
- (void)setViewIDFrom:(id)arg1;
- (void)setViewIDTo:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)viewIDFrom;
- (id)viewIDTo;
- (void)writeTo:(id)arg1;

@end
