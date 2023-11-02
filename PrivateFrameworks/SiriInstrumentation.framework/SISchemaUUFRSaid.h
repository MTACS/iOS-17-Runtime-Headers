
@interface SISchemaUUFRSaid : SISchemaInstrumentationMessage {
    NSString * _aceViewClass;
    NSString * _aceViewID;
    NSString * _dialogIdentifier;
    struct { 
        unsigned int sonicResponse : 1; 
    }  _has;
    bool  _hasAceViewClass;
    bool  _hasAceViewID;
    bool  _hasDialogIdentifier;
    bool  _hasSiriResponseContext;
    SISchemaSiriResponseContext * _siriResponseContext;
    int  _sonicResponse;
}

@property (nonatomic, copy) NSString *aceViewClass;
@property (nonatomic, copy) NSString *aceViewID;
@property (nonatomic, copy) NSString *dialogIdentifier;
@property (nonatomic) bool hasAceViewClass;
@property (nonatomic) bool hasAceViewID;
@property (nonatomic) bool hasDialogIdentifier;
@property (nonatomic) bool hasSiriResponseContext;
@property (nonatomic) bool hasSonicResponse;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaSiriResponseContext *siriResponseContext;
@property (nonatomic) int sonicResponse;

- (void).cxx_destruct;
- (id)aceViewClass;
- (id)aceViewID;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteAceViewClass;
- (void)deleteAceViewID;
- (void)deleteDialogIdentifier;
- (void)deleteSiriResponseContext;
- (void)deleteSonicResponse;
- (id)dialogIdentifier;
- (id)dictionaryRepresentation;
- (bool)hasAceViewClass;
- (bool)hasAceViewID;
- (bool)hasDialogIdentifier;
- (bool)hasSiriResponseContext;
- (bool)hasSonicResponse;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAceViewClass:(id)arg1;
- (void)setAceViewID:(id)arg1;
- (void)setDialogIdentifier:(id)arg1;
- (void)setHasAceViewClass:(bool)arg1;
- (void)setHasAceViewID:(bool)arg1;
- (void)setHasDialogIdentifier:(bool)arg1;
- (void)setHasSiriResponseContext:(bool)arg1;
- (void)setHasSonicResponse:(bool)arg1;
- (void)setSiriResponseContext:(id)arg1;
- (void)setSonicResponse:(int)arg1;
- (id)siriResponseContext;
- (int)sonicResponse;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
