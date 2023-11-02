
@interface SISchemaUUID : SISchemaInstrumentationMessage {
    bool  _hasValue;
    NSData * _value;
}

@property (nonatomic) bool hasValue;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSData *value;

// Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation

- (void).cxx_destruct;
- (void)deleteValue;
- (id)dictionaryRepresentation;
- (bool)hasValue;
- (unsigned long long)hash;
- (id)initWithBytesAsData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithNSUUID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setValue:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)toNSUUID;
- (id)toSafeNSUUID;
- (id)value;
- (void)willProduceDictionaryRepresentation:(id)arg1;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TranslationDaemon.framework/TranslationDaemon

- (id)ltd_safeUUID;

@end
