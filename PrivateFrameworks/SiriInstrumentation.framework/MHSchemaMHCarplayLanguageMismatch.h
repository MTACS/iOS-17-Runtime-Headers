
@interface MHSchemaMHCarplayLanguageMismatch : SISchemaInstrumentationMessage {
    NSString * _carHeadUnitSelectedLocale;
    int  _carplayTriggerMode;
    struct { 
        unsigned int carplayTriggerMode : 1; 
    }  _has;
    bool  _hasCarHeadUnitSelectedLocale;
}

@property (nonatomic, copy) NSString *carHeadUnitSelectedLocale;
@property (nonatomic) int carplayTriggerMode;
@property (nonatomic) bool hasCarHeadUnitSelectedLocale;
@property (nonatomic) bool hasCarplayTriggerMode;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)carHeadUnitSelectedLocale;
- (int)carplayTriggerMode;
- (void)deleteCarHeadUnitSelectedLocale;
- (void)deleteCarplayTriggerMode;
- (id)dictionaryRepresentation;
- (bool)hasCarHeadUnitSelectedLocale;
- (bool)hasCarplayTriggerMode;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCarHeadUnitSelectedLocale:(id)arg1;
- (void)setCarplayTriggerMode:(int)arg1;
- (void)setHasCarHeadUnitSelectedLocale:(bool)arg1;
- (void)setHasCarplayTriggerMode:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
