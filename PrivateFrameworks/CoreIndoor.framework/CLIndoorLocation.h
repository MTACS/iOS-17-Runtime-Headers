
@interface CLIndoorLocation : NSObject <NSSecureCoding> {
    struct { 
        int yieldType; 
        double prbPipelinedSaysYield; 
        double prbCoarseIndoorSaysIndoor; 
        double prbWifiSaysIndoor; 
        double prbGpsSaysIndoor; 
        double prbParticleFilterSaysYield; 
        double prbOnFloors; 
        double prbOnFloor[5]; 
        double prbInlier; 
        double prbLocalizerIoWrapperSaysWifiOk; 
        double prbInjectionOccupancyRetryLimitOk; 
        double prbInjectionGainRetryLimitOk; 
        int pfYieldStatusBeforeCalculatePose; 
        int yieldStatusBeforeCalculatePose; 
    }  _diagnosticReport;
    struct { 
        int suitability; 
        struct { 
            double latitude; 
            double longitude; 
        } coordinate; 
        double horizontalAccuracy; 
        double altitude; 
        double verticalAccuracy; 
        double speed; 
        double speedAccuracy; 
        double course; 
        double courseAccuracy; 
        double timestamp; 
        int confidence; 
        double lifespan; 
        int type; 
        struct { 
            double latitude; 
            double longitude; 
        } rawCoordinate; 
        double rawCourse; 
        int floor; 
        unsigned int integrity; 
        int referenceFrame; 
        int rawReferenceFrame; 
        int signalEnvironmentType; 
        double ellipsoidalAltitude; 
        bool fromSimulationController; 
    }  _location;
    NSString * _locationDescription;
    NSString * _locationId;
    struct { 
        double odometer; 
        double deltaDistance; 
        double deltaDistanceAccuracy; 
        double timestampGps; 
        double machtime; 
        float horzUncSemiMaj; 
        float horzUncSemiMin; 
        float horzUncSemiMajAz; 
        bool isFitnessMatch; 
        int matchQuality; 
        struct { 
            double latitude; 
            double longitude; 
        } matchCoordinate; 
        double matchCourse; 
        int matchFormOfWay; 
        int matchRoadClass; 
        bool matchShifted; 
        struct { 
            double rawUnmodifiedCourse; 
            double rawUnmodifiedCourseUnc; 
            bool isStatic; 
            bool isMounted; 
            int estimatedLane; 
            double estimatedLaneProbability; 
            long long estimatedLaneFeatureID; 
            double flowlineSnapLat; 
            double flowlineSnapLon; 
            double flowlineSnapCourse; 
        } mapMatcherData; 
        struct { 
            struct { 
                int lapCount; 
                double currentLapStartTime; 
                double currentLapDurationInSeconds; 
                double currentLapDistanceInMeters; 
                double previousLapDurationInSeconds; 
                double previousLapDistanceInMeters; 
                struct { 
                    double latitude; 
                    double longitude; 
                } previousLapPositionAtCompletionInDegrees; 
                double currentTrackRunSessionDurationInSeconds; 
                double currentTrackRunSessionDistanceInMeters; 
            } lapInformation; 
            int laneNumber; 
            unsigned long long trackId; 
            int estimatedLaneNumber; 
            int laneCount; 
            int estimatedLaneConfidence; 
            int trackProximity; 
            double distanceToTrackMeters; 
            bool odometerHasBeenCorrected; 
        } trackRunData; 
        struct { 
            double value; 
            double std; 
        } pressure; 
        int undulationModel; 
        float undulation; 
        struct { 
            double latitude; 
            double longitude; 
        } specialCoordinate; 
        double specialHorizontalAccuracy; 
        double machContinuousTime; 
        int originDevice; 
        bool isMatcherPropagatedCoordinates; 
        double slope; 
        double maxAbsSlope; 
        double groundAltitude; 
        double groundAltitudeUncertainty; 
        double rawHorizontalAccuracy; 
        double rawAltitude; 
        double rawVerticalAccuracy; 
        double rawCourseAccuracy; 
        bool isCoordinateFused; 
        bool isCoordinateFusedWithVL; 
        struct { 
            double latitude; 
            double longitude; 
        } fusedCoordinate; 
        double fusedHorizontalAccuracy; 
        int fusedReferenceFrame; 
        double fusedAltitude; 
        double fusedVerticalAccuracy; 
        double fusedCourse; 
        double fusedCourseAccuracy; 
        int positionContextState; 
        double probabilityPositionContextStateIndoor; 
        double probabilityPositionContextStateOutdoor; 
        int batchedLocationFixType; 
        struct { 
            unsigned int numberOfZaxisSlamApsUsed; 
        } wifiZaxisData; 
        struct { 
            int demNumContiguousFlatPoints; 
            float confidence; 
        } demFlatnessMetricData; 
    }  _locationPrivate;
    bool  _requestsGpsAssistance;
}

@property (nonatomic) struct { int x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8[5]; double x9; double x10; double x11; double x12; int x13; int x14; } diagnosticReport;
@property (nonatomic) struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; int x20; double x21; bool x22; } location;
@property (nonatomic, retain) NSString *locationDescription;
@property (nonatomic, retain) NSString *locationId;
@property (nonatomic) struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; float x8; bool x9; int x10; struct { double x_11_1_1; double x_11_1_2; } x11; double x12; int x13; int x14; bool x15; struct { double x_16_1_1; double x_16_1_2; bool x_16_1_3; bool x_16_1_4; int x_16_1_5; double x_16_1_6; long long x_16_1_7; double x_16_1_8; double x_16_1_9; double x_16_1_10; } x16; struct { struct { int x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; struct { double x_7_3_1; double x_7_3_2; } x_1_2_7; double x_1_2_8; double x_1_2_9; } x_17_1_1; int x_17_1_2; unsigned long long x_17_1_3; int x_17_1_4; int x_17_1_5; int x_17_1_6; int x_17_1_7; double x_17_1_8; bool x_17_1_9; } x17; struct { double x_18_1_1; double x_18_1_2; } x18; int x19; float x20; struct { double x_21_1_1; double x_21_1_2; } x21; double x22; double x23; int x24; bool x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; bool x34; bool x35; struct { double x_36_1_1; double x_36_1_2; } x36; } locationPrivate;
@property (nonatomic) bool requestsGpsAssistance;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (struct { int x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8[5]; double x9; double x10; double x11; double x12; int x13; int x14; })diagnosticReport;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; int x20; double x21; bool x22; })location;
- (id)locationDescription;
- (id)locationId;
- (struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; float x8; bool x9; int x10; struct { double x_11_1_1; double x_11_1_2; } x11; double x12; int x13; int x14; bool x15; struct { double x_16_1_1; double x_16_1_2; bool x_16_1_3; bool x_16_1_4; int x_16_1_5; double x_16_1_6; long long x_16_1_7; double x_16_1_8; double x_16_1_9; double x_16_1_10; } x16; struct { struct { int x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; struct { double x_7_3_1; double x_7_3_2; } x_1_2_7; double x_1_2_8; double x_1_2_9; } x_17_1_1; int x_17_1_2; unsigned long long x_17_1_3; int x_17_1_4; int x_17_1_5; int x_17_1_6; int x_17_1_7; double x_17_1_8; bool x_17_1_9; } x17; struct { double x_18_1_1; double x_18_1_2; } x18; int x19; float x20; struct { double x_21_1_1; double x_21_1_2; } x21; double x22; double x23; int x24; bool x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; bool x34; bool x35; struct { double x_36_1_1; double x_36_1_2; } x36; })locationPrivate;
- (bool)requestsGpsAssistance;
- (void)setDiagnosticReport:(struct { int x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8[5]; double x9; double x10; double x11; double x12; int x13; int x14; })arg1;
- (void)setLocation:(struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; int x20; double x21; bool x22; })arg1;
- (void)setLocationDescription:(id)arg1;
- (void)setLocationId:(id)arg1;
- (void)setLocationPrivate:(struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; float x8; bool x9; int x10; struct { double x_11_1_1; double x_11_1_2; } x11; double x12; int x13; int x14; bool x15; struct { double x_16_1_1; double x_16_1_2; bool x_16_1_3; bool x_16_1_4; int x_16_1_5; double x_16_1_6; long long x_16_1_7; double x_16_1_8; double x_16_1_9; double x_16_1_10; } x16; struct { struct { int x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; struct { double x_7_3_1; double x_7_3_2; } x_1_2_7; double x_1_2_8; double x_1_2_9; } x_17_1_1; int x_17_1_2; unsigned long long x_17_1_3; int x_17_1_4; int x_17_1_5; int x_17_1_6; int x_17_1_7; double x_17_1_8; bool x_17_1_9; } x17; struct { double x_18_1_1; double x_18_1_2; } x18; int x19; float x20; struct { double x_21_1_1; double x_21_1_2; } x21; double x22; double x23; int x24; bool x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; bool x34; bool x35; struct { double x_36_1_1; double x_36_1_2; } x36; })arg1;
- (void)setRequestsGpsAssistance:(bool)arg1;

@end
