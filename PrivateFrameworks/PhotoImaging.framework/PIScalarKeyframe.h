
@interface PIScalarKeyframe : NSObject <PIDictionaryRepresentable> {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _time;
    double  _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)keyframeInArray:(id)arg1 closestToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;

- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 value:(double)arg2;
- (void)nu_updateDigest:(id)arg1;

@end
