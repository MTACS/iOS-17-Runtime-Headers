
@interface PGPublicEventCriteria : NSObject {
    bool  _allowsExpandingTimeAttendance;
    NSArray * _disambiguationCriteria;
    NSString * _eventCategory;
    NSArray * _highConfidenceCriteria;
    double  _maximumDistance;
    long long  _minimumAttendance;
    double  _minimumTimeAttendance;
    NSArray * _prohibitedCriteria;
    bool  _promoteToHighConfidenceBasedOnCategory;
    bool  _shouldCheckForTemporalEventMatches;
    double  _temporalEventDistanceThreshold;
}

@property (nonatomic) bool allowsExpandingTimeAttendance;
@property (nonatomic, retain) NSArray *disambiguationCriteria;
@property (nonatomic, retain) NSString *eventCategory;
@property (nonatomic, readonly) bool hasMinimumAttendance;
@property (nonatomic, retain) NSArray *highConfidenceCriteria;
@property (nonatomic) double maximumDistance;
@property (nonatomic) long long minimumAttendance;
@property (nonatomic) double minimumTimeAttendance;
@property (nonatomic, retain) NSArray *prohibitedCriteria;
@property (nonatomic) bool promoteToHighConfidenceBasedOnCategory;
@property (nonatomic) bool shouldCheckForTemporalEventMatches;
@property (nonatomic) double temporalEventDistanceThreshold;

- (void).cxx_destruct;
- (bool)_hasSufficientTimeOverlapForEvent:(id)arg1 matchingOptions:(id)arg2;
- (bool)_isMatchingMeaningDisambiguationForEvent:(id)arg1 matchingOptions:(id)arg2 withHighConfidence:(bool*)arg3;
- (bool)_isMatchingTemporalClusterEventForEvent:(id)arg1 matchingOptions:(id)arg2;
- (id)_localizedEventNameTerms:(id)arg1;
- (id)_localizedSubcategoryTerms:(id)arg1;
- (bool)_promoteToHighConfidenceBasedOnEvent:(id)arg1;
- (bool)allowsExpandingTimeAttendance;
- (id)disambiguationCriteria;
- (id)eventCategory;
- (bool)hasMinimumAttendance;
- (id)highConfidenceCriteria;
- (bool)isMatchingEvent:(id)arg1 matchingOptions:(id)arg2 withHighConfidence:(bool*)arg3 matchingDistance:(double*)arg4;
- (double)maximumDistance;
- (long long)minimumAttendance;
- (double)minimumTimeAttendance;
- (id)prohibitedCriteria;
- (bool)promoteToHighConfidenceBasedOnCategory;
- (void)setAllowsExpandingTimeAttendance:(bool)arg1;
- (void)setDisambiguationCriteria:(id)arg1;
- (void)setEventCategory:(id)arg1;
- (void)setHighConfidenceCriteria:(id)arg1;
- (void)setMaximumDistance:(double)arg1;
- (void)setMinimumAttendance:(long long)arg1;
- (void)setMinimumTimeAttendance:(double)arg1;
- (void)setProhibitedCriteria:(id)arg1;
- (void)setPromoteToHighConfidenceBasedOnCategory:(bool)arg1;
- (void)setShouldCheckForTemporalEventMatches:(bool)arg1;
- (void)setTemporalEventDistanceThreshold:(double)arg1;
- (bool)shouldCheckForTemporalEventMatches;
- (double)temporalEventDistanceThreshold;

@end
