
@interface SISchemaHardwareButtonInvocationContext : SISchemaInstrumentationMessage {
    float  _hardwareButtonActivationThresholdInSec;
    int  _hardwareButtonLongPressBehavior;
    struct { 
        unsigned int hardwareButtonLongPressBehavior : 1; 
        unsigned int hardwareButtonActivationThresholdInSec : 1; 
    }  _has;
}

@property (nonatomic) float hardwareButtonActivationThresholdInSec;
@property (nonatomic) int hardwareButtonLongPressBehavior;
@property (nonatomic) bool hasHardwareButtonActivationThresholdInSec;
@property (nonatomic) bool hasHardwareButtonLongPressBehavior;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteHardwareButtonActivationThresholdInSec;
- (void)deleteHardwareButtonLongPressBehavior;
- (id)dictionaryRepresentation;
- (float)hardwareButtonActivationThresholdInSec;
- (int)hardwareButtonLongPressBehavior;
- (bool)hasHardwareButtonActivationThresholdInSec;
- (bool)hasHardwareButtonLongPressBehavior;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHardwareButtonActivationThresholdInSec:(float)arg1;
- (void)setHardwareButtonLongPressBehavior:(int)arg1;
- (void)setHasHardwareButtonActivationThresholdInSec:(bool)arg1;
- (void)setHasHardwareButtonLongPressBehavior:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
