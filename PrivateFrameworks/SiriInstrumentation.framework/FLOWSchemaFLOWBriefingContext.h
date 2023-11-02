
@interface FLOWSchemaFLOWBriefingContext : SISchemaInstrumentationMessage {
    int  _briefingAttribute;
    NSArray * _enabledFeatures;
    struct { 
        unsigned int briefingAttribute : 1; 
    }  _has;
}

@property (nonatomic) int briefingAttribute;
@property (nonatomic, copy) NSArray *enabledFeatures;
@property (nonatomic) bool hasBriefingAttribute;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addEnabledFeatures:(int)arg1;
- (int)briefingAttribute;
- (void)clearEnabledFeatures;
- (void)deleteBriefingAttribute;
- (void)deleteEnabledFeatures;
- (id)dictionaryRepresentation;
- (id)enabledFeatures;
- (int)enabledFeaturesAtIndex:(unsigned long long)arg1;
- (unsigned long long)enabledFeaturesCount;
- (bool)hasBriefingAttribute;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setBriefingAttribute:(int)arg1;
- (void)setEnabledFeatures:(id)arg1;
- (void)setHasBriefingAttribute:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
