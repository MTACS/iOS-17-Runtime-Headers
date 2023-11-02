
@interface GEORoadMatcher : NSObject {
    GEOMapFeatureAccess * _mapFeatureAccess;
    GEORoadMatcherCandidateSegment * _previousMatch;
    double  _searchRadius;
    bool  _useRawLocations;
}

@property (nonatomic, readonly) GEOApplicationAuditToken *auditToken;
@property (nonatomic, retain) GEORoadMatcherCandidateSegment *previousMatch;
@property (nonatomic) double searchRadius;
@property (nonatomic) bool useRawLocations;

- (void).cxx_destruct;
- (id)_bestCandidateSegmentForLocation:(id)arg1 transportType:(int)arg2;
- (id)auditToken;
- (void)dealloc;
- (id)init;
- (id)initWithAuditToken:(id)arg1;
- (id)matchLocation:(id)arg1 forTransportType:(int)arg2;
- (id)previousMatch;
- (double)searchRadius;
- (void)setPreviousMatch:(id)arg1;
- (void)setSearchRadius:(double)arg1;
- (void)setUseRawLocations:(bool)arg1;
- (bool)useRawLocations;

@end
