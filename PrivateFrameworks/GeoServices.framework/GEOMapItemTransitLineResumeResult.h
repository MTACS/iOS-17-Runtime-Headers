
@interface GEOMapItemTransitLineResumeResult : NSObject {
    bool  _blocked;
    <GEOTransitDepartureSequence> * _departureSequence;
    NSDate * _earliestNextDepartureDate;
}

@property (nonatomic) bool blocked;
@property (nonatomic, retain) <GEOTransitDepartureSequence> *departureSequence;
@property (nonatomic, retain) NSDate *earliestNextDepartureDate;

- (void).cxx_destruct;
- (bool)blocked;
- (id)departureSequence;
- (id)earliestNextDepartureDate;
- (void)setBlocked:(bool)arg1;
- (void)setDepartureSequence:(id)arg1;
- (void)setEarliestNextDepartureDate:(id)arg1;

@end
