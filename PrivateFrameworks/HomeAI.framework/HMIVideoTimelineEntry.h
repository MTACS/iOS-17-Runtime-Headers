
@interface HMIVideoTimelineEntry : HMFObject <HMIVideoEvent> {
    NSDate * _date;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _time;
}

@property (readonly) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } time;

- (void).cxx_destruct;
- (id)date;
- (id)description;
- (id)initWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 date:(id)arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;

@end
