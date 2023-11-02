
@interface USOSchemaUSOEntityIdentifierTier1 : SISchemaInstrumentationMessage {
    NSString * _backingAppBundleId;
    struct { 
        unsigned int index : 1; 
    }  _has;
    bool  _hasBackingAppBundleId;
    bool  _hasValue;
    unsigned int  _index;
    NSString * _value;
}

@property (nonatomic, copy) NSString *backingAppBundleId;
@property (nonatomic) bool hasBackingAppBundleId;
@property (nonatomic) bool hasIndex;
@property (nonatomic) bool hasValue;
@property (nonatomic) unsigned int index;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *value;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)backingAppBundleId;
- (void)deleteBackingAppBundleId;
- (void)deleteIndex;
- (void)deleteValue;
- (id)dictionaryRepresentation;
- (bool)hasBackingAppBundleId;
- (bool)hasIndex;
- (bool)hasValue;
- (unsigned long long)hash;
- (unsigned int)index;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setBackingAppBundleId:(id)arg1;
- (void)setHasBackingAppBundleId:(bool)arg1;
- (void)setHasIndex:(bool)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setIndex:(unsigned int)arg1;
- (void)setValue:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)value;
- (void)writeTo:(id)arg1;

@end
