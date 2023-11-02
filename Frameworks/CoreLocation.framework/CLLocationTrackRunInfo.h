
@interface CLLocationTrackRunInfo : NSObject <NSCopying, NSSecureCoding> {
    int  _estimatedLaneConfidence;
    long long  _estimatedLaneNumber;
    long long  _laneCount;
    long long  _laneNumber;
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
    }  _lapInfo;
    NSNumber * _trackId;
    int  _trackProximity;
}

@property (nonatomic, readonly) int estimatedLaneConfidence;
@property (nonatomic, readonly) long long estimatedLaneNumber;
@property (nonatomic, readonly) long long laneCount;
@property (nonatomic, readonly) long long laneNumber;
@property (nonatomic, readonly) struct { int x1; double x2; double x3; double x4; double x5; double x6; struct { double x_7_1_1; double x_7_1_2; } x7; double x8; double x9; } lapInfo;
@property (nonatomic, readonly) NSNumber *trackId;
@property (nonatomic, readonly) int trackProximity;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (int)estimatedLaneConfidence;
- (long long)estimatedLaneNumber;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLapInfo:(struct { int x1; double x2; double x3; double x4; double x5; double x6; struct { double x_7_1_1; double x_7_1_2; } x7; double x8; double x9; })arg1 laneNumber:(long long)arg2 laneCount:(long long)arg3 trackId:(id)arg4 estimatedLaneNumber:(long long)arg5 estimatedLaneConfidence:(int)arg6 trackProximity:(int)arg7;
- (long long)laneCount;
- (long long)laneNumber;
- (struct { int x1; double x2; double x3; double x4; double x5; double x6; struct { double x_7_1_1; double x_7_1_2; } x7; double x8; double x9; })lapInfo;
- (id)trackId;
- (int)trackProximity;

@end
