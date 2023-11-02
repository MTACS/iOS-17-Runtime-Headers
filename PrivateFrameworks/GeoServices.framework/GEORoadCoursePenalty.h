
@interface GEORoadCoursePenalty : NSObject <GEORoadMatcherPenalty> {
    GEOLocation * _location;
    bool  _useRawLocations;
}

@property (nonatomic) bool useRawLocations;

- (void).cxx_destruct;
- (id)init;
- (id)initWithLocation:(id)arg1;
- (double)penaltyForCandidate:(id)arg1;
- (void)setUseRawLocations:(bool)arg1;
- (bool)useRawLocations;

@end
