
@interface EXPSchemaEXPTrialRolloutNamespace : SISchemaInstrumentationMessage {
    unsigned int  _compatibilityVersion;
    NSString * _factorPackId;
    struct { 
        unsigned int compatibilityVersion : 1; 
    }  _has;
    bool  _hasFactorPackId;
    bool  _hasName;
    NSString * _name;
}

@property (nonatomic) unsigned int compatibilityVersion;
@property (nonatomic, copy) NSString *factorPackId;
@property (nonatomic) bool hasCompatibilityVersion;
@property (nonatomic) bool hasFactorPackId;
@property (nonatomic) bool hasName;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (unsigned int)compatibilityVersion;
- (void)deleteCompatibilityVersion;
- (void)deleteFactorPackId;
- (void)deleteName;
- (id)dictionaryRepresentation;
- (id)factorPackId;
- (bool)hasCompatibilityVersion;
- (bool)hasFactorPackId;
- (bool)hasName;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setCompatibilityVersion:(unsigned int)arg1;
- (void)setFactorPackId:(id)arg1;
- (void)setHasCompatibilityVersion:(bool)arg1;
- (void)setHasFactorPackId:(bool)arg1;
- (void)setHasName:(bool)arg1;
- (void)setName:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
