
@interface _GEOTransitTripStop : NSObject <GEOTransitTripStop> {
    <GEOTransitDeparture> * _departure;
    bool  _isHidden;
    NSArray * _labelItems;
    GEOLatLng * _location;
    unsigned long long  _stationIdentifier;
    GEOStyleAttributes * _styleAttributes;
    NSTimeZone * _timeZone;
    NSString * _transitName;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <GEOTransitDeparture> *departure;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, nonatomic, readonly) bool hidden;
@property (nonatomic, readonly) NSArray *labelItems;
@property (nonatomic, readonly) GEOLatLng *location;
@property (nonatomic, readonly) unsigned long long stationIdentifier;
@property (nonatomic, readonly) GEOStyleAttributes *styleAttributes;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSTimeZone *timeZone;

+ (id)transitTripStopsForPlaceData:(id)arg1;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)departure;
- (id)displayName;
- (id)initWithTransitSnippet:(id)arg1 departureSequence:(id)arg2;
- (bool)isHidden;
- (id)labelItems;
- (id)location;
- (unsigned long long)stationIdentifier;
- (id)styleAttributes;
- (id)timeZone;

@end
