
@interface SCSchemaSCCheckUndoResponse : SISchemaInstrumentationMessage {
    struct { 
        unsigned int undoType : 1; 
        unsigned int reason : 1; 
    }  _has;
    int  _reason;
    int  _undoType;
}

@property (nonatomic) bool hasReason;
@property (nonatomic) bool hasUndoType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int reason;
@property (nonatomic) int undoType;

- (void)deleteReason;
- (void)deleteUndoType;
- (id)dictionaryRepresentation;
- (bool)hasReason;
- (bool)hasUndoType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (void)setHasReason:(bool)arg1;
- (void)setHasUndoType:(bool)arg1;
- (void)setReason:(int)arg1;
- (void)setUndoType:(int)arg1;
- (id)suppressMessageUnderConditions;
- (int)undoType;
- (void)writeTo:(id)arg1;

@end
