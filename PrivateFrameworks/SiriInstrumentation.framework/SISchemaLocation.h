
@interface SISchemaLocation : SISchemaInstrumentationMessage {
    struct { 
        unsigned int latitude : 1; 
        unsigned int longitude : 1; 
        unsigned int horizontalAccuracyInMeters : 1; 
    }  _has;
    float  _horizontalAccuracyInMeters;
    float  _latitude;
    float  _longitude;
}

@property (nonatomic) bool hasHorizontalAccuracyInMeters;
@property (nonatomic) bool hasLatitude;
@property (nonatomic) bool hasLongitude;
@property (nonatomic) float horizontalAccuracyInMeters;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) float latitude;
@property (nonatomic) float longitude;

- (void)deleteHorizontalAccuracyInMeters;
- (void)deleteLatitude;
- (void)deleteLongitude;
- (id)dictionaryRepresentation;
- (bool)hasHorizontalAccuracyInMeters;
- (bool)hasLatitude;
- (bool)hasLongitude;
- (unsigned long long)hash;
- (float)horizontalAccuracyInMeters;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (float)latitude;
- (float)longitude;
- (bool)readFrom:(id)arg1;
- (void)setHasHorizontalAccuracyInMeters:(bool)arg1;
- (void)setHasLatitude:(bool)arg1;
- (void)setHasLongitude:(bool)arg1;
- (void)setHorizontalAccuracyInMeters:(float)arg1;
- (void)setLatitude:(float)arg1;
- (void)setLongitude:(float)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
