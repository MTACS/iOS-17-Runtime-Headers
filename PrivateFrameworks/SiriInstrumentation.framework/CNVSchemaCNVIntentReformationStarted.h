
@interface CNVSchemaCNVIntentReformationStarted : SISchemaInstrumentationMessage {
    struct { 
        unsigned int transformer : 1; 
        unsigned int targetPlugin : 1; 
    }  _has;
    int  _targetPlugin;
    int  _transformer;
}

@property (nonatomic) bool hasTargetPlugin;
@property (nonatomic) bool hasTransformer;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int targetPlugin;
@property (nonatomic) int transformer;

- (void)deleteTargetPlugin;
- (void)deleteTransformer;
- (id)dictionaryRepresentation;
- (bool)hasTargetPlugin;
- (bool)hasTransformer;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasTargetPlugin:(bool)arg1;
- (void)setHasTransformer:(bool)arg1;
- (void)setTargetPlugin:(int)arg1;
- (void)setTransformer:(int)arg1;
- (id)suppressMessageUnderConditions;
- (int)targetPlugin;
- (int)transformer;
- (void)writeTo:(id)arg1;

@end
