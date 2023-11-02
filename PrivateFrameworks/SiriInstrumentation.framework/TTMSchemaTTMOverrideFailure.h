
@interface TTMSchemaTTMOverrideFailure : SISchemaInstrumentationMessage {
    struct { 
        unsigned int overrideType : 1; 
        unsigned int reason : 1; 
    }  _has;
    int  _overrideType;
    int  _reason;
}

@property (nonatomic) bool hasOverrideType;
@property (nonatomic) bool hasReason;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int overrideType;
@property (nonatomic) int reason;

- (void)deleteOverrideType;
- (void)deleteReason;
- (id)dictionaryRepresentation;
- (bool)hasOverrideType;
- (bool)hasReason;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)overrideType;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (void)setHasOverrideType:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setOverrideType:(int)arg1;
- (void)setReason:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
