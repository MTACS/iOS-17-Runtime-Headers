
@interface SISchemaUEIVisionSnippetDismissed : SISchemaInstrumentationMessage {
    struct { 
        unsigned int startLocation : 1; 
        unsigned int wasMoved : 1; 
        unsigned int reason : 1; 
    }  _has;
    int  _reason;
    int  _startLocation;
    bool  _wasMoved;
}

@property (nonatomic) bool hasReason;
@property (nonatomic) bool hasStartLocation;
@property (nonatomic) bool hasWasMoved;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int reason;
@property (nonatomic) int startLocation;
@property (nonatomic) bool wasMoved;

- (void)deleteReason;
- (void)deleteStartLocation;
- (void)deleteWasMoved;
- (id)dictionaryRepresentation;
- (bool)hasReason;
- (bool)hasStartLocation;
- (bool)hasWasMoved;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (void)setHasReason:(bool)arg1;
- (void)setHasStartLocation:(bool)arg1;
- (void)setHasWasMoved:(bool)arg1;
- (void)setReason:(int)arg1;
- (void)setStartLocation:(int)arg1;
- (void)setWasMoved:(bool)arg1;
- (int)startLocation;
- (id)suppressMessageUnderConditions;
- (bool)wasMoved;
- (void)writeTo:(id)arg1;

@end
