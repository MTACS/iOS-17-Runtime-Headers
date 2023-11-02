
@interface SISchemaDeviceDynamicContext : SISchemaInstrumentationMessage {
    NSString * _countryCode;
    struct { 
        unsigned int timeIntervalSince1970 : 1; 
    }  _has;
    bool  _hasCountryCode;
    bool  _hasLocation;
    SISchemaLocation * _location;
    double  _timeIntervalSince1970;
}

@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic) bool hasCountryCode;
@property (nonatomic) bool hasLocation;
@property (nonatomic) bool hasTimeIntervalSince1970;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaLocation *location;
@property (nonatomic) double timeIntervalSince1970;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)countryCode;
- (void)deleteCountryCode;
- (void)deleteLocation;
- (void)deleteTimeIntervalSince1970;
- (id)dictionaryRepresentation;
- (bool)hasCountryCode;
- (bool)hasLocation;
- (bool)hasTimeIntervalSince1970;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)location;
- (bool)readFrom:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setHasCountryCode:(bool)arg1;
- (void)setHasLocation:(bool)arg1;
- (void)setHasTimeIntervalSince1970:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setTimeIntervalSince1970:(double)arg1;
- (id)suppressMessageUnderConditions;
- (double)timeIntervalSince1970;
- (void)writeTo:(id)arg1;

@end
