
@interface BWBoxedOutputDetectionTimingInfo : NSObject {
    int  _lastDetectionCount;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _previousDetectionDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _previousDetectionPTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _previousNoDetectionPTS;
}

- (id)init;

@end
