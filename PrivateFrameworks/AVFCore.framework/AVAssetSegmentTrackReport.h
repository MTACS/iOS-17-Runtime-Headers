
@interface AVAssetSegmentTrackReport : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _duration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _earliestPresentationTimeStamp;
    AVAssetSegmentReportSampleInformation * _firstVideoSampleInformation;
    NSString * _mediaType;
    int  _trackID;
}

@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } earliestPresentationTimeStamp;
@property (nonatomic, readonly) AVAssetSegmentReportSampleInformation *firstVideoSampleInformation;
@property (nonatomic, readonly) NSString *mediaType;
@property (nonatomic, readonly) int trackID;

- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })earliestPresentationTimeStamp;
- (id)firstVideoSampleInformation;
- (id)initWithFigSegmentTrackReportDictionary:(id)arg1;
- (id)mediaType;
- (int)trackID;

@end
