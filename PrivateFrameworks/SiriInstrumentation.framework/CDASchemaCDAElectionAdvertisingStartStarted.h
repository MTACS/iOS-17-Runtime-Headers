
@interface CDASchemaCDAElectionAdvertisingStartStarted : SISchemaInstrumentationMessage {
    float  _advertisementDelay;
    float  _advertisementInterval;
    struct { 
        unsigned int state : 1; 
        unsigned int advertisementInterval : 1; 
        unsigned int advertisementDelay : 1; 
    }  _has;
    int  _state;
}

@property (nonatomic) float advertisementDelay;
@property (nonatomic) float advertisementInterval;
@property (nonatomic) bool hasAdvertisementDelay;
@property (nonatomic) bool hasAdvertisementInterval;
@property (nonatomic) bool hasState;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int state;

- (float)advertisementDelay;
- (float)advertisementInterval;
- (void)deleteAdvertisementDelay;
- (void)deleteAdvertisementInterval;
- (void)deleteState;
- (id)dictionaryRepresentation;
- (bool)hasAdvertisementDelay;
- (bool)hasAdvertisementInterval;
- (bool)hasState;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAdvertisementDelay:(float)arg1;
- (void)setAdvertisementInterval:(float)arg1;
- (void)setHasAdvertisementDelay:(bool)arg1;
- (void)setHasAdvertisementInterval:(bool)arg1;
- (void)setHasState:(bool)arg1;
- (void)setState:(int)arg1;
- (int)state;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
