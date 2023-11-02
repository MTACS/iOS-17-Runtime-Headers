
@interface CLRacingRouteManager : NSObject {
    struct CLRacingRoute { 
        struct CLDistanceCalc { 
            double fM; 
            double fN; 
            double fRefLatRads; 
            double fRefLatDegs; 
            double fCosRefLat; 
        } fDistanceCalculator; 
        int fSignalEnvironmentType; 
        int fWorkoutActivity; 
        NSMutableArray *fRoutePoints; 
        struct RouteBoundingBox { 
            double fMinLatitude_deg; 
            double fMaxLatitude_deg; 
            double fMinLongitude_deg; 
            double fMaxLongitude_deg; 
            int fRows; 
            int fColumns; 
        } fRouteBoundingBox; 
        struct vector<std::vector<std::pair<int, int>>, std::allocator<std::vector<std::pair<int, int>>>> { 
            void *__begin_; 
            void *__end_; 
            struct __compressed_pair<std::vector<std::pair<int, int>> *, std::allocator<std::vector<std::pair<int, int>>>> { 
                void *__value_; 
            } __end_cap_; 
        } fRouteMatrixIndexVec; 
        struct RacingRouteState { 
            double fLatitude_deg; 
            double fLongitude_deg; 
            double fAltitude_m; 
            double fOdometer_m; 
            double fTimestamp_s; 
            double fTimeSinceStartOfRace_s; 
            double fOffRouteTraveledTime_s; 
            double fDistanceSinceStartOfRace_m; 
            double fOffRouteTraveledDistance_m; 
            double fAveragePace_s_per_m; 
            double fDistanceAlongReferenceRoute_m; 
        } fRaceStartPointOnCurrentRoute; 
        struct RacingRouteState { 
            double fLatitude_deg; 
            double fLongitude_deg; 
            double fAltitude_m; 
            double fOdometer_m; 
            double fTimestamp_s; 
            double fTimeSinceStartOfRace_s; 
            double fOffRouteTraveledTime_s; 
            double fDistanceSinceStartOfRace_m; 
            double fOffRouteTraveledDistance_m; 
            double fAveragePace_s_per_m; 
            double fDistanceAlongReferenceRoute_m; 
        } fRaceStartPointOnReferenceRoute; 
        struct RacingRouteState { 
            double fLatitude_deg; 
            double fLongitude_deg; 
            double fAltitude_m; 
            double fOdometer_m; 
            double fTimestamp_s; 
            double fTimeSinceStartOfRace_s; 
            double fOffRouteTraveledTime_s; 
            double fDistanceSinceStartOfRace_m; 
            double fOffRouteTraveledDistance_m; 
            double fAveragePace_s_per_m; 
            double fDistanceAlongReferenceRoute_m; 
        } fLastOnRouteDataPoint; 
        struct RacingRouteState { 
            double fLatitude_deg; 
            double fLongitude_deg; 
            double fAltitude_m; 
            double fOdometer_m; 
            double fTimestamp_s; 
            double fTimeSinceStartOfRace_s; 
            double fOffRouteTraveledTime_s; 
            double fDistanceSinceStartOfRace_m; 
            double fOffRouteTraveledDistance_m; 
            double fAveragePace_s_per_m; 
            double fDistanceAlongReferenceRoute_m; 
        } fLastProjectedDataPoint; 
        bool fRoutePointsArrayInitialized; 
        bool fRecoveryMode; 
        bool fRaceStartPointDetected; 
        bool fRaceEndPointDetected; 
        bool fUserIsOffRoute; 
        bool fProjectedOnNearestPoint; 
        bool fRaceSessionExpired; 
        bool fRollingBufferReachedEndOfReferenceRoute; 
        bool fRouteConfigurationSuccessful; 
        bool fRacingRouteAnalyticsSent; 
        bool fPrematureRaceEndDetected; 
        bool fReferenceRouteTotalLengthDetermined; 
        bool fLocationPointIsOutsideOfAcceptedRange; 
        bool fLocationPointNotMatched; 
        int fRoutePointsBufferSize; 
        int fNumberOfRoutePointsToAdd; 
        int fOffRouteGraceDuration_s; 
        int fMatchedPointCounter; 
        int fReferenceRouteDataPointCounter; 
        int fCurrentRouteDataPointCounter; 
        int fOffRouteDataPointCounter; 
        int fInutileDataPointCounter; 
        int fRollingBufferUpdateCounter; 
        int fLastMatchedPointIndex; 
        int fLastMatchedPointIndexOnReferenceRoute; 
        int fRollingBufferStartIndexOnReferenceRoute; 
        int fMatrixCellIndexForLastMatchedPoint; 
        int fRaceStartLineProximityIndex; 
        double fReferenceRouteTotalLength_m; 
        double fTimestampOfLastMatchedPointOnReferenceRoute_s; 
        double fRegisteredTimeAtThresholdDistance_s; 
        double fEndOfRaceTimeThreshold_s; 
        double fNearestNeighborMaximumAcceptedDistance_m; 
    }  clrr;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)addRoutePoints:(id)arg1;
- (id)advanceToPoint:(id)arg1;
- (unsigned long long)configureWithWorkoutActivityType:(unsigned long long)arg1 bufferSize:(unsigned long long)arg2 offRouteGraceDurationInSec:(unsigned long long)arg3;
- (id)getRaceParameters;
- (unsigned long long)numberOfRoutePointsToAdd;
- (double)recoverRaceAtTimestamp;
- (void)reset;
- (bool)setRaceParameters:(id)arg1;

@end
