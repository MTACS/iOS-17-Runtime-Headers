
@interface ORCHSchemaORCHPowerContextPolicyReported : SISchemaInstrumentationMessage {
    bool  _hasPowerContextPolicies;
    bool  _hasVisionPowerState;
    ORCHSchemaORCHPowerContextPolicies * _powerContextPolicies;
    ORCHSchemaORCHVisionPowerState * _visionPowerState;
    unsigned long long  _whichPlatformspecificpowerstates;
}

@property (nonatomic) bool hasPowerContextPolicies;
@property (nonatomic) bool hasVisionPowerState;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) ORCHSchemaORCHPowerContextPolicies *powerContextPolicies;
@property (nonatomic, retain) ORCHSchemaORCHVisionPowerState *visionPowerState;
@property (nonatomic, readonly) unsigned long long whichPlatformspecificpowerstates;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deletePowerContextPolicies;
- (void)deleteVisionPowerState;
- (id)dictionaryRepresentation;
- (bool)hasPowerContextPolicies;
- (bool)hasVisionPowerState;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)powerContextPolicies;
- (bool)readFrom:(id)arg1;
- (void)setHasPowerContextPolicies:(bool)arg1;
- (void)setHasVisionPowerState:(bool)arg1;
- (void)setPowerContextPolicies:(id)arg1;
- (void)setVisionPowerState:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)visionPowerState;
- (unsigned long long)whichPlatformspecificpowerstates;
- (void)writeTo:(id)arg1;

@end
