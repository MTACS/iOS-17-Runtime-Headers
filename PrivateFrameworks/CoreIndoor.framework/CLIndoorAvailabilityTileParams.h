
@interface CLIndoorAvailabilityTileParams : NSObject {
    double  _availabilityZScoreConfidenceInterval;
    unsigned int  _cyclingToNonFitnessSeconds;
    bool  _hasCyclingToNonFitnessSeconds;
    bool  _hasMotionActivityDebounceParameters;
    bool  _hasNonFitnessToCyclingSeconds;
    bool  _hasNonFitnessToRunningSeconds;
    bool  _hasRegionalPrefetchMaxFloorCount;
    bool  _hasRunningToNonFitnessSeconds;
    unsigned int  _indoorLocationOfInterestMergeRadiusKM;
    float  _indoorNumberOfDaysBeforeTileRedownload;
    unsigned int  _indoorPrefetchMaxFloorCount;
    unsigned int  _indoorPrefetchMaxTotalBytes;
    unsigned int  _indoorPrefetchRadiusKM;
    unsigned int  _nonFitnessToCyclingSeconds;
    unsigned int  _nonFitnessToRunningSeconds;
    struct optional<proto::params::LocalizerParameters> { 
        bool m_initialized; 
        struct aligned_storage<proto::params::LocalizerParameters> { 
            union dummy_u { 
                BOOL data[312]; 
                struct a8 { } aligner_; 
            } dummy_; 
        } m_storage; 
    }  _optionalParams;
    unsigned int  _preferPredictionWithinNActivityCycles;
    unsigned int  _regionalLocationOfInterestMergeRadiusKM;
    float  _regionalNumberOfDaysBeforeTileRedownload;
    unsigned int  _regionalPrefetchMaxFloorCount;
    unsigned int  _regionalPrefetchMaxTotalBytes;
    unsigned int  _regionalPrefetchRadiusKM;
    unsigned int  _runningToNonFitnessSeconds;
}

@property (nonatomic, readonly) double availabilityZScoreConfidenceInterval;
@property (nonatomic, readonly) unsigned int cyclingToNonFitnessSeconds;
@property (nonatomic, readonly) bool hasCyclingToNonFitnessSeconds;
@property (nonatomic, readonly) bool hasMotionActivityDebounceParameters;
@property (nonatomic, readonly) bool hasNonFitnessToCyclingSeconds;
@property (nonatomic, readonly) bool hasNonFitnessToRunningSeconds;
@property (nonatomic, readonly) bool hasRegionalPrefetchMaxFloorCount;
@property (nonatomic, readonly) bool hasRunningToNonFitnessSeconds;
@property (nonatomic, readonly) unsigned int indoorLocationOfInterestMergeRadiusKM;
@property (nonatomic, readonly) float indoorNumberOfDaysBeforeTileRedownload;
@property (nonatomic, readonly) unsigned int indoorPrefetchMaxFloorCount;
@property (nonatomic, readonly) unsigned int indoorPrefetchMaxTotalBytes;
@property (nonatomic, readonly) unsigned int indoorPrefetchRadiusKM;
@property (nonatomic, readonly) unsigned int nonFitnessToCyclingSeconds;
@property (nonatomic, readonly) unsigned int nonFitnessToRunningSeconds;
@property (nonatomic, readonly) unsigned int preferPredictionWithinNActivityCycles;
@property (nonatomic, readonly) unsigned int regionalLocationOfInterestMergeRadiusKM;
@property (nonatomic, readonly) float regionalNumberOfDaysBeforeTileRedownload;
@property (nonatomic, readonly) unsigned int regionalPrefetchMaxFloorCount;
@property (nonatomic, readonly) unsigned int regionalPrefetchMaxTotalBytes;
@property (nonatomic, readonly) unsigned int regionalPrefetchRadiusKM;
@property (nonatomic, readonly) unsigned int runningToNonFitnessSeconds;

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)availabilityZScoreConfidenceInterval;
- (unsigned int)cyclingToNonFitnessSeconds;
- (bool)hasCyclingToNonFitnessSeconds;
- (bool)hasMotionActivityDebounceParameters;
- (bool)hasNonFitnessToCyclingSeconds;
- (bool)hasNonFitnessToRunningSeconds;
- (bool)hasRegionalPrefetchMaxFloorCount;
- (bool)hasRunningToNonFitnessSeconds;
- (unsigned int)indoorLocationOfInterestMergeRadiusKM;
- (float)indoorNumberOfDaysBeforeTileRedownload;
- (unsigned int)indoorPrefetchMaxFloorCount;
- (unsigned int)indoorPrefetchMaxTotalBytes;
- (unsigned int)indoorPrefetchRadiusKM;
- (id)init;
- (id)initWithAvailabilityTile:(void*)arg1;
- (struct optional<proto::params::LocalizerParameters> { bool x1; struct aligned_storage<proto::params::LocalizerParameters> { union dummy_u { BOOL x_1_2_1[312]; struct a8 { } x_1_2_2; } x_2_1_1; } x2; })localizerParams;
- (unsigned int)nonFitnessToCyclingSeconds;
- (unsigned int)nonFitnessToRunningSeconds;
- (unsigned int)preferPredictionWithinNActivityCycles;
- (unsigned int)regionalLocationOfInterestMergeRadiusKM;
- (float)regionalNumberOfDaysBeforeTileRedownload;
- (unsigned int)regionalPrefetchMaxFloorCount;
- (unsigned int)regionalPrefetchMaxTotalBytes;
- (unsigned int)regionalPrefetchRadiusKM;
- (unsigned int)runningToNonFitnessSeconds;

@end
