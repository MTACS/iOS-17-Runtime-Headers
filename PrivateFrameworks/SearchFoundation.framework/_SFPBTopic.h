
@interface _SFPBTopic : PBCodable <NSSecureCoding, _SFPBTopic> {
    _SFPBFlightDetails * _flight;
    NSString * _identifier;
    NSString * _query;
    _SFPBSportsDetail * _sports;
    int  _type;
    _SFPBWeatherDetails * _weather;
    unsigned long long  _whichDetail;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _SFPBFlightDetails *flight;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *query;
@property (nonatomic, retain) _SFPBSportsDetail *sports;
@property (readonly) Class superclass;
@property (nonatomic) int type;
@property (nonatomic, retain) _SFPBWeatherDetails *weather;
@property (nonatomic, readonly) unsigned long long whichDetail;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)flight;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithSFTopic:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)query;
- (bool)readFrom:(id)arg1;
- (void)setFlight:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setSports:(id)arg1;
- (void)setType:(int)arg1;
- (void)setWeather:(id)arg1;
- (id)sports;
- (int)type;
- (id)weather;
- (unsigned long long)whichDetail;
- (void)writeTo:(id)arg1;

@end
