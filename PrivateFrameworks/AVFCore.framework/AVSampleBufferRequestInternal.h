
@interface AVSampleBufferRequestInternal : NSObject {
    long long  direction;
    AVSampleCursor * limitCursor;
    long long  maxSampleCount;
    long long  mode;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  overrideTime;
    long long  preferredMinSampleCount;
    AVSampleCursor * startCursor;
}

@end
