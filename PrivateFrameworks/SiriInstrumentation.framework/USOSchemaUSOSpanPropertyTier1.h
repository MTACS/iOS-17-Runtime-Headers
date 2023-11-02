
@interface USOSchemaUSOSpanPropertyTier1 : SISchemaInstrumentationMessage {
    struct { 
        unsigned int valueInt : 1; 
        unsigned int valueFloat : 1; 
    }  _has;
    bool  _hasKey;
    bool  _hasValueString;
    NSString * _key;
    float  _valueFloat;
    int  _valueInt;
    NSString * _valueString;
}

@property (nonatomic) bool hasKey;
@property (nonatomic) bool hasValueFloat;
@property (nonatomic) bool hasValueInt;
@property (nonatomic) bool hasValueString;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *key;
@property (nonatomic) float valueFloat;
@property (nonatomic) int valueInt;
@property (nonatomic, copy) NSString *valueString;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteKey;
- (void)deleteValueFloat;
- (void)deleteValueInt;
- (void)deleteValueString;
- (id)dictionaryRepresentation;
- (bool)hasKey;
- (bool)hasValueFloat;
- (bool)hasValueInt;
- (bool)hasValueString;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)key;
- (bool)readFrom:(id)arg1;
- (void)setHasKey:(bool)arg1;
- (void)setHasValueFloat:(bool)arg1;
- (void)setHasValueInt:(bool)arg1;
- (void)setHasValueString:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setValueFloat:(float)arg1;
- (void)setValueInt:(int)arg1;
- (void)setValueString:(id)arg1;
- (id)suppressMessageUnderConditions;
- (float)valueFloat;
- (int)valueInt;
- (id)valueString;
- (void)writeTo:(id)arg1;

@end
