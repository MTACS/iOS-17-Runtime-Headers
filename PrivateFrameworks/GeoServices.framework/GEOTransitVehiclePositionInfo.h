
@interface GEOTransitVehiclePositionInfo : PBCodable <GEOTransitVehicleEntries, NSCopying> {
    NSMutableArray * _departureEntrys;
    PBUnknownFields * _unknownFields;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSMutableArray *departureEntrys;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long firstTripID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long tripIDForNextUpcomingDeparture;
@property (nonatomic, readonly, copy) NSArray *tripIDs;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, readonly, copy) NSArray *upcomingTripIDs;

+ (Class)departureEntryType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addDepartureEntry:(id)arg1;
- (void)clearDepartureEntrys;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)departureEntryAtIndex:(unsigned long long)arg1;
- (id)departureEntrys;
- (unsigned long long)departureEntrysCount;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)firstTripID;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDepartureEntrys:(id)arg1;
- (unsigned long long)tripIDForNextUpcomingDeparture;
- (id)tripIDs;
- (id)unknownFields;
- (id)upcomingTripIDs;
- (void)writeTo:(id)arg1;

@end
