
@interface CMStrideCalibrationEntry : NSObject <NSCopying, NSSecureCoding> {
    struct CLStrideCalEntry { 
        int recordId; 
        double startTime; 
        unsigned int pacebin; 
        double kvalue; 
        double kvalueTrack; 
        double score; 
        double endTime; 
        double distance; 
        int steps; 
        int session; 
        double speed; 
        double percentGrade; 
        int gpsSource; 
        double timestamp; 
        double runningFormStrideLength; 
        int runningFormStrideLengthMetrics; 
    }  _strideCalStruct;
}

@property (nonatomic, readonly) double distance;
@property (nonatomic, readonly) double endTime;
@property (nonatomic, readonly) long long gpsSource;
@property (nonatomic, readonly) double meanRunningStrideLength;
@property (nonatomic, readonly) long long numberRunningStrideLengthSamples;
@property (nonatomic, readonly) double percentGrade;
@property (nonatomic, readonly) double speed;
@property (nonatomic, readonly) double startTime;
@property (nonatomic, readonly) int steps;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)distance;
- (void)encodeWithCoder:(id)arg1;
- (double)endTime;
- (long long)gpsSource;
- (id)initWithCLStrideCalEntry:(struct CLStrideCalEntry { int x1; double x2; unsigned int x3; double x4; double x5; double x6; double x7; double x8; int x9; int x10; double x11; double x12; int x13; double x14; double x15; int x16; })arg1;
- (id)initWithCoder:(id)arg1;
- (double)kvalue;
- (double)kvalueTrack;
- (double)meanRunningStrideLength;
- (long long)numberRunningStrideLengthSamples;
- (unsigned int)pacebin;
- (double)percentGrade;
- (double)score;
- (int)session;
- (double)speed;
- (double)startTime;
- (int)steps;

@end
