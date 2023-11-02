
@interface _GEOTransitNearbyScheduleLine : NSObject <GEOTransitNearbyScheduleCell> {
    GEOPDDepartureSequenceContainer * _departureSequenceContainer;
    NSArray * _departureSequences;
}

@property (nonatomic, readonly) NSArray *artworks;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *departureSequences;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSignificant;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)artworks;
- (id)departureSequences;
- (id)displayName;
- (id)initWithDepartureSequenceContainer:(id)arg1 departureSequences:(id)arg2;
- (bool)isSignificant;

@end
