
@interface _SFPBWeatherColor : PBCodable <NSSecureCoding, _SFPBWeatherColor> {
    NSString * _condition;
    _SFPBDate * _date;
    _SFPBLatLng * _location;
}

@property (nonatomic, copy) NSString *condition;
@property (nonatomic, retain) _SFPBDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) _SFPBLatLng *location;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)condition;
- (id)date;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)location;
- (bool)readFrom:(id)arg1;
- (void)setCondition:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)writeTo:(id)arg1;

@end
