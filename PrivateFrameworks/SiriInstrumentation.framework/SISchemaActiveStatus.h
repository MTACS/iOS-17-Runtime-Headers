
@interface SISchemaActiveStatus : SISchemaInstrumentationMessage {
    NSArray * _audioDevicesActiveWithin24Hours;
    NSArray * _carBluetoothHeadUnitsActiveWithinLast24Hours;
    bool  _carPlayActiveWithin24Hours;
    struct { 
        unsigned int carPlayActiveWithin24Hours : 1; 
    }  _has;
}

@property (nonatomic, copy) NSArray *audioDevicesActiveWithin24Hours;
@property (nonatomic, copy) NSArray *carBluetoothHeadUnitsActiveWithinLast24Hours;
@property (nonatomic) bool carPlayActiveWithin24Hours;
@property (nonatomic) bool hasCarPlayActiveWithin24Hours;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addAudioDevicesActiveWithin24Hours:(id)arg1;
- (void)addCarBluetoothHeadUnitsActiveWithinLast24Hours:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)audioDevicesActiveWithin24Hours;
- (id)audioDevicesActiveWithin24HoursAtIndex:(unsigned long long)arg1;
- (unsigned long long)audioDevicesActiveWithin24HoursCount;
- (id)carBluetoothHeadUnitsActiveWithinLast24Hours;
- (id)carBluetoothHeadUnitsActiveWithinLast24HoursAtIndex:(unsigned long long)arg1;
- (unsigned long long)carBluetoothHeadUnitsActiveWithinLast24HoursCount;
- (bool)carPlayActiveWithin24Hours;
- (void)clearAudioDevicesActiveWithin24Hours;
- (void)clearCarBluetoothHeadUnitsActiveWithinLast24Hours;
- (void)deleteAudioDevicesActiveWithin24Hours;
- (void)deleteCarBluetoothHeadUnitsActiveWithinLast24Hours;
- (void)deleteCarPlayActiveWithin24Hours;
- (id)dictionaryRepresentation;
- (bool)hasCarPlayActiveWithin24Hours;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAudioDevicesActiveWithin24Hours:(id)arg1;
- (void)setCarBluetoothHeadUnitsActiveWithinLast24Hours:(id)arg1;
- (void)setCarPlayActiveWithin24Hours:(bool)arg1;
- (void)setHasCarPlayActiveWithin24Hours:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
