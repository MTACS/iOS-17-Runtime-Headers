
@interface _GEOTransitDepartureSequence : NSObject <GEOTransitDepartureSequence> {
    GEOPDDepartureSequenceContainer * _container;
    long long  _displayStyle;
    <GEOTransitLine> * _line;
    NSSet * _nextStopIDs;
    GEOPDDepartureSequence * _sequence;
    GEOPDStopInfo * _stopInfo;
}

@property (nonatomic, readonly) NSString *containerDisplayName;
@property (nonatomic, readonly) NSArray *containerLabelItems;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long departureTimeDisplayStyle;
@property (nonatomic, readonly) NSArray *departures;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *direction;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) long long displayStyle;
@property (nonatomic, readonly) NSArray *frequencies;
@property (nonatomic, readonly) bool hasWalkingETA;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *headsign;
@property (nonatomic, readonly) bool isLowFrequency;
@property (nonatomic, readonly) <GEOTransitLine> *line;
@property (nonatomic, readonly) NSSet *nextStopIDs;
@property (nonatomic, readonly) NSArray *operatingHours;
@property (nonatomic, readonly) NSString *originName;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSTimeZone *timeZone;
@property (nonatomic, readonly) unsigned long long transitId;
@property (nonatomic, readonly) unsigned long long walkingETA;

- (void).cxx_destruct;
- (void)_enumerateDeparturesValidForDate:(id)arg1 withBlock:(id /* block */)arg2;
- (bool)areOperatingHours:(id)arg1 activeForDate:(id)arg2;
- (id)containerDisplayName;
- (id)containerLabelItems;
- (unsigned long long)departureTimeDisplayStyle;
- (id)departures;
- (id)departuresValidForDate:(id)arg1;
- (id)direction;
- (id)displayName;
- (long long)displayStyle;
- (id)firstDepartureAfterDate:(id)arg1;
- (id)firstDepartureFrequencyOnOrAfterDate:(id)arg1;
- (id)firstDepartureOnOrAfterDate:(id)arg1;
- (id)firstDepartureValidForDate:(id)arg1;
- (id)firstOpenOperatingDateOnOrAfterDate:(id)arg1;
- (id)frequencies;
- (double)frequencyForSortingAtDate:(id)arg1;
- (id)frequencyToDescribeAtDate:(id)arg1;
- (bool)hasFrequencyAtDate:(id)arg1;
- (bool)hasWalkingETA;
- (id)headsign;
- (id)initWithSequence:(id)arg1 line:(id)arg2 pbLine:(id)arg3 stopInfo:(id)arg4 container:(id)arg5;
- (bool)isDepartureDateInactive:(id)arg1 withReferenceDate:(id)arg2;
- (bool)isLowFrequency;
- (bool)isValidForDate:(id)arg1 inTimeZone:(id)arg2;
- (id)line;
- (id)nextStopIDs;
- (unsigned long long)numberOfDeparturesAfterDate:(id)arg1;
- (id)operatingHours;
- (id)operatingHoursForDate:(id)arg1 inTimeZone:(id)arg2;
- (id)originName;
- (id)serviceResumesAfterDate:(id)arg1;
- (unsigned long long)stopId;
- (id)timeZone;
- (unsigned long long)transitId;
- (unsigned long long)walkingETA;

@end
