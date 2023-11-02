
@interface SISchemaRedactableString : SISchemaInstrumentationMessage {
    bool  _hasRedactionState;
    bool  _hasValue;
    int  _redactionState;
    NSString * _value;
    unsigned long long  _which_String;
}

@property (nonatomic) bool hasRedactionState;
@property (nonatomic) bool hasValue;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int redactionState;
@property (nonatomic, copy) NSString *value;
@property (nonatomic, readonly) unsigned long long which_String;

- (void).cxx_destruct;
- (void)deleteRedactionState;
- (void)deleteValue;
- (id)dictionaryRepresentation;
- (bool)hasRedactionState;
- (bool)hasValue;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)redactionState;
- (void)setHasRedactionState:(bool)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setRedactionState:(int)arg1;
- (void)setValue:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)value;
- (unsigned long long)which_String;
- (void)writeTo:(id)arg1;

@end
