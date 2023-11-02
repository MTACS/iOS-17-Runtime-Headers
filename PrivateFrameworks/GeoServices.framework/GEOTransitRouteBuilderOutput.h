
@interface GEOTransitRouteBuilderOutput : GEORouteBuilderOutput {
    bool  _isWalkingOnlyRoute;
    NSArray * _rideSelections;
    NSArray * _sectionOptions;
}

@property (nonatomic, readonly) bool isWalkingOnlyRoute;
@property (nonatomic, readonly) NSArray *rideSelections;
@property (nonatomic, readonly) NSArray *sectionOptions;

- (void).cxx_destruct;
- (bool)isWalkingOnlyRoute;
- (id)rideSelections;
- (id)sectionOptions;
- (void)setIsWalkingOnlyRoute:(bool)arg1;
- (void)setRideSelections:(id)arg1;
- (void)setSectionOptions:(id)arg1;

@end
