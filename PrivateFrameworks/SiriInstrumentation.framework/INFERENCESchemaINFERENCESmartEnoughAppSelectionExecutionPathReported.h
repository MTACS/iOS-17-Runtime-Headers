
@interface INFERENCESchemaINFERENCESmartEnoughAppSelectionExecutionPathReported : SISchemaInstrumentationMessage {
    int  _executionPath;
    struct { 
        unsigned int executionPath : 1; 
        unsigned int projectIntent : 1; 
    }  _has;
    int  _projectIntent;
}

@property (nonatomic) int executionPath;
@property (nonatomic) bool hasExecutionPath;
@property (nonatomic) bool hasProjectIntent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int projectIntent;

- (void)deleteExecutionPath;
- (void)deleteProjectIntent;
- (id)dictionaryRepresentation;
- (int)executionPath;
- (bool)hasExecutionPath;
- (bool)hasProjectIntent;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)projectIntent;
- (bool)readFrom:(id)arg1;
- (void)setExecutionPath:(int)arg1;
- (void)setHasExecutionPath:(bool)arg1;
- (void)setHasProjectIntent:(bool)arg1;
- (void)setProjectIntent:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
