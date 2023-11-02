
@interface IntelligencePlatform.KTSDataAggregateRepresentation : IntelligencePlatform.KTSDataRepresentation {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  avgElevationGainInMeters;
    void avgNumAccelEvents;
    void avgNumBrakingEvents;
    void avgNumHighSpeedEvents;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  avgTripDistanceInMeters;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  maxElevationGainInMeters;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  maxTripDistanceInMeters;
    void mostEfficientDriveScore;
    void percentDistanceTraveledAtRelativeSpeeds;
    void percentDistanceTraveledAtSpeedBuckets;
    void percentDistanceTraveledAtTrafficBuckets;
    void percentDistanceTraveledForRoadTypes;
    void percentDistanceTraveledInTerrainTypes;
    void percentDistanceTraveledInWeatherTypes;
    void percentTimeSpentAtRelativeSpeeds;
    void percentTimeSpentAtRoadTypes;
    void percentTimeSpentAtSpeedBuckets;
    void percentTimeSpentAtTrafficBuckets;
    void percentTimeSpentInTerrainTypes;
    void percentTimeSpentInWeatherTypes;
    void routeHeatMap;
    void scorePerRelativeSpeed;
    void scorePerRoadType;
    void scorePerSpeedBucket;
    void scorePerTerrainType;
    void scorePerTrafficBucket;
    void scorePerWeatherType;
}

@end
