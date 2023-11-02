
@interface SISchemaSiriResponseContext : SISchemaInstrumentationMessage {
    NSString * _dialogPhase;
    struct { 
        unsigned int presentationType : 1; 
        unsigned int siriResponseMode : 1; 
    }  _has;
    bool  _hasDialogPhase;
    int  _presentationType;
    int  _siriResponseMode;
}

@property (nonatomic, copy) NSString *dialogPhase;
@property (nonatomic) bool hasDialogPhase;
@property (nonatomic) bool hasPresentationType;
@property (nonatomic) bool hasSiriResponseMode;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int presentationType;
@property (nonatomic) int siriResponseMode;

- (void).cxx_destruct;
- (void)deleteDialogPhase;
- (void)deletePresentationType;
- (void)deleteSiriResponseMode;
- (id)dialogPhase;
- (id)dictionaryRepresentation;
- (bool)hasDialogPhase;
- (bool)hasPresentationType;
- (bool)hasSiriResponseMode;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)presentationType;
- (bool)readFrom:(id)arg1;
- (void)setDialogPhase:(id)arg1;
- (void)setHasDialogPhase:(bool)arg1;
- (void)setHasPresentationType:(bool)arg1;
- (void)setHasSiriResponseMode:(bool)arg1;
- (void)setPresentationType:(int)arg1;
- (void)setSiriResponseMode:(int)arg1;
- (int)siriResponseMode;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
