
@interface VCPTimeMeasurement : NSObject {
    double  _elapsedTimeSeconds;
    unsigned long long  _start;
    bool  _started;
    struct mach_timebase_info { 
        unsigned int numer; 
        unsigned int denom; 
    }  _timebase;
}

@property (readonly) double elapsedTimeSeconds;
@property (readonly) bool started;

- (double)elapsedTimeSeconds;
- (id)init;
- (void)reset;
- (int)start;
- (bool)started;
- (int)stop;

@end
