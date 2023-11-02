
@interface HALSchemaHALCrossDeviceCommandExecutionEnded : SISchemaInstrumentationMessage {
    int  _action;
    int  _actionResult;
    struct { 
        unsigned int action : 1; 
        unsigned int actionResult : 1; 
        unsigned int homeKitTarget : 1; 
    }  _has;
    int  _homeKitTarget;
    NSArray * _selecteds;
}

@property (nonatomic) int action;
@property (nonatomic) int actionResult;
@property (nonatomic) bool hasAction;
@property (nonatomic) bool hasActionResult;
@property (nonatomic) bool hasHomeKitTarget;
@property (nonatomic) int homeKitTarget;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *selecteds;

- (void).cxx_destruct;
- (int)action;
- (int)actionResult;
- (void)addSelected:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearSelected;
- (void)deleteAction;
- (void)deleteActionResult;
- (void)deleteHomeKitTarget;
- (void)deleteSelected;
- (id)dictionaryRepresentation;
- (bool)hasAction;
- (bool)hasActionResult;
- (bool)hasHomeKitTarget;
- (unsigned long long)hash;
- (int)homeKitTarget;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)selectedAtIndex:(unsigned long long)arg1;
- (unsigned long long)selectedCount;
- (id)selecteds;
- (void)setAction:(int)arg1;
- (void)setActionResult:(int)arg1;
- (void)setHasAction:(bool)arg1;
- (void)setHasActionResult:(bool)arg1;
- (void)setHasHomeKitTarget:(bool)arg1;
- (void)setHomeKitTarget:(int)arg1;
- (void)setSelecteds:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
