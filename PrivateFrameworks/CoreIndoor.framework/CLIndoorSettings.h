
@interface CLIndoorSettings : NSObject {
    struct duration<long double, std::ratio<1>> { 
        long double__rep_; 
    }  _debounceInterval;
    NSSet * _disabledVenues;
    struct duration<long long, std::ratio<1, 1000000000>> { 
        long long __rep_; 
    }  _errorBackoffDuration;
    CLGpsPosition * _fakeLastFix;
    NSSet * _forcedVenues;
    NSString * _indoorAvailabilityTilesServerUrl;
    struct optional<double> { 
        bool m_initialized; 
        double m_storage; 
    }  _indoorPrefetchClusterMergeRadius;
    struct optional<unsigned long> { 
        bool m_initialized; 
        unsigned long long m_storage; 
    }  _indoorTilePrefetchMaxCount;
    struct optional<double> { 
        bool m_initialized; 
        double m_storage; 
    }  _indoorTilePrefetchRadius;
    bool  _pipelinedEnabled;
    struct optional<double> { 
        bool m_initialized; 
        double m_storage; 
    }  _prefetchClusterMergeRadius;
    struct optional<double> { 
        bool m_initialized; 
        double m_storage; 
    }  _regionalPrefetchClusterMergeRadius;
    struct optional<unsigned long> { 
        bool m_initialized; 
        unsigned long long m_storage; 
    }  _regionalTilePrefetchMaxCount;
    struct optional<double> { 
        bool m_initialized; 
        double m_storage; 
    }  _regionalTilePrefetchRadius;
    struct duration<long long, std::ratio<1>> { 
        long long __rep_; 
    }  _tilePrefetchActivityInterval;
    struct optional<unsigned long> { 
        bool m_initialized; 
        unsigned long long m_storage; 
    }  _tilePrefetchMaxCount;
    struct optional<unsigned int> { 
        bool m_initialized; 
        unsigned int m_storage; 
    }  _tilePrefetchPredictionActivityCycleAllowance;
    struct optional<double> { 
        bool m_initialized; 
        double m_storage; 
    }  _tilePrefetchRadius;
    struct duration<long long, std::ratio<1>> { 
        long long __rep_; 
    }  _tilePrefetchRelevancyWindow;
    double  _venueGroupDistance;
}

@property (nonatomic) /* Warning: unhandled struct encoding: '{duration<long double' */ struct  debounceInterval; /* unknown property attribute:  std::ratio<1>>=D} */
@property (nonatomic, copy) NSSet *disabledVenues;
@property (nonatomic) /* Warning: unhandled struct encoding: '{duration<long long' */ struct  errorBackoffDuration; /* unknown property attribute:  1000000000>>=q} */
@property (nonatomic, retain) CLGpsPosition *fakeLastFix;
@property (nonatomic, copy) NSSet *forcedVenues;
@property (nonatomic, copy) NSString *indoorAvailabilityTilesServerUrl;
@property (nonatomic) struct optional<double> { bool x1; double x2; } indoorPrefetchClusterMergeRadius;
@property (nonatomic) struct optional<unsigned long> { bool x1; unsigned long long x2; } indoorTilePrefetchMaxCount;
@property (nonatomic) struct optional<double> { bool x1; double x2; } indoorTilePrefetchRadius;
@property (nonatomic) bool pipelinedEnabled;
@property (nonatomic) struct optional<double> { bool x1; double x2; } prefetchClusterMergeRadius;
@property (nonatomic) struct optional<double> { bool x1; double x2; } regionalPrefetchClusterMergeRadius;
@property (nonatomic) struct optional<unsigned long> { bool x1; unsigned long long x2; } regionalTilePrefetchMaxCount;
@property (nonatomic) struct optional<double> { bool x1; double x2; } regionalTilePrefetchRadius;
@property (nonatomic) /* Warning: unhandled struct encoding: '{duration<long long' */ struct  tilePrefetchActivityInterval; /* unknown property attribute:  std::ratio<1>>=q} */
@property (nonatomic) struct optional<unsigned long> { bool x1; unsigned long long x2; } tilePrefetchMaxCount;
@property (nonatomic) struct optional<unsigned int> { bool x1; unsigned int x2; } tilePrefetchPredictionActivityCycleAllowance;
@property (nonatomic) struct optional<double> { bool x1; double x2; } tilePrefetchRadius;
@property (nonatomic) /* Warning: unhandled struct encoding: '{duration<long long' */ struct  tilePrefetchRelevancyWindow; /* unknown property attribute:  std::ratio<1>>=q} */
@property (nonatomic) double venueGroupDistance;

+ (id)settingToSet:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct duration<long double, std::ratio<1>> { long doublex1; })debounceInterval;
- (id)disabledVenues;
- (struct duration<long long, std::ratio<1, 1000000000>> { long long x1; })errorBackoffDuration;
- (id)fakeLastFix;
- (id)forcedVenues;
- (id)indoorAvailabilityTilesServerUrl;
- (struct optional<double> { bool x1; double x2; })indoorPrefetchClusterMergeRadius;
- (struct optional<unsigned long> { bool x1; unsigned long long x2; })indoorTilePrefetchMaxCount;
- (struct optional<double> { bool x1; double x2; })indoorTilePrefetchRadius;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (bool)pipelinedEnabled;
- (const void*)prefetchClusterMergeRadius;
- (struct optional<double> { bool x1; double x2; })regionalPrefetchClusterMergeRadius;
- (struct optional<unsigned long> { bool x1; unsigned long long x2; })regionalTilePrefetchMaxCount;
- (struct optional<double> { bool x1; double x2; })regionalTilePrefetchRadius;
- (void)setDebounceInterval:(struct duration<long double, std::ratio<1>> { long doublex1; })arg1;
- (void)setDisabledVenues:(id)arg1;
- (void)setErrorBackoffDuration:(struct duration<long long, std::ratio<1, 1000000000>> { long long x1; })arg1;
- (void)setFakeLastFix:(id)arg1;
- (void)setForcedVenues:(id)arg1;
- (void)setIndoorAvailabilityTilesServerUrl:(id)arg1;
- (void)setIndoorPrefetchClusterMergeRadius:(struct optional<double> { bool x1; double x2; })arg1;
- (void)setIndoorTilePrefetchMaxCount:(struct optional<unsigned long> { bool x1; unsigned long long x2; })arg1;
- (void)setIndoorTilePrefetchRadius:(struct optional<double> { bool x1; double x2; })arg1;
- (void)setPipelinedEnabled:(bool)arg1;
- (void)setPrefetchClusterMergeRadius:(struct optional<double> { bool x1; double x2; })arg1;
- (void)setRegionalPrefetchClusterMergeRadius:(struct optional<double> { bool x1; double x2; })arg1;
- (void)setRegionalTilePrefetchMaxCount:(struct optional<unsigned long> { bool x1; unsigned long long x2; })arg1;
- (void)setRegionalTilePrefetchRadius:(struct optional<double> { bool x1; double x2; })arg1;
- (void)setTilePrefetchActivityInterval:(struct duration<long long, std::ratio<1>> { long long x1; })arg1;
- (void)setTilePrefetchMaxCount:(struct optional<unsigned long> { bool x1; unsigned long long x2; })arg1;
- (void)setTilePrefetchPredictionActivityCycleAllowance:(struct optional<unsigned int> { bool x1; unsigned int x2; })arg1;
- (void)setTilePrefetchRadius:(struct optional<double> { bool x1; double x2; })arg1;
- (void)setTilePrefetchRelevancyWindow:(struct duration<long long, std::ratio<1>> { long long x1; })arg1;
- (void)setVenueGroupDistance:(double)arg1;
- (struct duration<long long, std::ratio<1>> { long long x1; })tilePrefetchActivityInterval;
- (const void*)tilePrefetchMaxCount;
- (struct optional<unsigned int> { bool x1; unsigned int x2; })tilePrefetchPredictionActivityCycleAllowance;
- (const void*)tilePrefetchRadius;
- (struct duration<long long, std::ratio<1>> { long long x1; })tilePrefetchRelevancyWindow;
- (double)venueGroupDistance;

@end
