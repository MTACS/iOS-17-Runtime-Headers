
@interface SISchemaUEIUUFRReady : SISchemaInstrumentationMessage {
    NSString * _aceCommandClass;
    NSString * _aceViewId;
    NSArray * _dialogIdentifiers;
    int  _dialogPhase;
    bool  _exists;
    struct { 
        unsigned int exists : 1; 
        unsigned int uufrReadySource : 1; 
        unsigned int dialogPhase : 1; 
    }  _has;
    bool  _hasAceCommandClass;
    bool  _hasAceViewId;
    int  _uufrReadySource;
}

@property (nonatomic, copy) NSString *aceCommandClass;
@property (nonatomic, copy) NSString *aceViewId;
@property (nonatomic, copy) NSArray *dialogIdentifiers;
@property (nonatomic) int dialogPhase;
@property (nonatomic) bool exists;
@property (nonatomic) bool hasAceCommandClass;
@property (nonatomic) bool hasAceViewId;
@property (nonatomic) bool hasDialogPhase;
@property (nonatomic) bool hasExists;
@property (nonatomic) bool hasUufrReadySource;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int uufrReadySource;

- (void).cxx_destruct;
- (id)aceCommandClass;
- (id)aceViewId;
- (void)addDialogIdentifiers:(id)arg1;
- (void)clearDialogIdentifiers;
- (void)deleteAceCommandClass;
- (void)deleteAceViewId;
- (void)deleteDialogIdentifiers;
- (void)deleteDialogPhase;
- (void)deleteExists;
- (void)deleteUufrReadySource;
- (id)dialogIdentifiers;
- (id)dialogIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)dialogIdentifiersCount;
- (int)dialogPhase;
- (id)dictionaryRepresentation;
- (bool)exists;
- (bool)hasAceCommandClass;
- (bool)hasAceViewId;
- (bool)hasDialogPhase;
- (bool)hasExists;
- (bool)hasUufrReadySource;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAceCommandClass:(id)arg1;
- (void)setAceViewId:(id)arg1;
- (void)setDialogIdentifiers:(id)arg1;
- (void)setDialogPhase:(int)arg1;
- (void)setExists:(bool)arg1;
- (void)setHasAceCommandClass:(bool)arg1;
- (void)setHasAceViewId:(bool)arg1;
- (void)setHasDialogPhase:(bool)arg1;
- (void)setHasExists:(bool)arg1;
- (void)setHasUufrReadySource:(bool)arg1;
- (void)setUufrReadySource:(int)arg1;
- (id)suppressMessageUnderConditions;
- (int)uufrReadySource;
- (void)writeTo:(id)arg1;

@end
