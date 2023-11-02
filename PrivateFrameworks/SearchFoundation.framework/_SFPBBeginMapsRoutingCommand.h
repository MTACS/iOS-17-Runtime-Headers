
@interface _SFPBBeginMapsRoutingCommand : PBCodable <NSSecureCoding, _SFPBBeginMapsRoutingCommand> {
    int  _directionsMode;
    _SFPBLatLng * _location;
    NSData * _mapsData;
    NSString * _name;
    bool  _shouldSearchDirectionsAlongCurrentRoute;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int directionsMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) _SFPBLatLng *location;
@property (nonatomic, copy) NSData *mapsData;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) bool shouldSearchDirectionsAlongCurrentRoute;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (int)directionsMode;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)location;
- (id)mapsData;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setDirectionsMode:(int)arg1;
- (void)setLocation:(id)arg1;
- (void)setMapsData:(id)arg1;
- (void)setName:(id)arg1;
- (void)setShouldSearchDirectionsAlongCurrentRoute:(bool)arg1;
- (bool)shouldSearchDirectionsAlongCurrentRoute;
- (void)writeTo:(id)arg1;

@end
