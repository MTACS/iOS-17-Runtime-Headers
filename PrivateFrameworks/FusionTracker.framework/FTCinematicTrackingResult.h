
@interface FTCinematicTrackingResult : NSObject <NSSecureCoding> {
    bool  _detectorDidRun;
    NSDictionary * _metadata;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _mostRecentTapTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _sourceFrameTimestamp;
    FTCinematicTapResponse * _tapResponse;
    NSArray * _tracks;
}

@property (nonatomic) bool detectorDidRun;
@property (nonatomic, retain) NSDictionary *metadata;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } mostRecentTapTime;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } sourceFrameTimestamp;
@property (nonatomic, retain) FTCinematicTapResponse *tapResponse;
@property (nonatomic, retain) NSArray *tracks;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)detectorDidRun;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)metadata;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })mostRecentTapTime;
- (void)setDetectorDidRun:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMostRecentTapTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setSourceFrameTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setTapResponse:(id)arg1;
- (void)setTracks:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })sourceFrameTimestamp;
- (id)tapResponse;
- (id)tracks;

@end
