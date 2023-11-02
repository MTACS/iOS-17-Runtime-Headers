
@interface PIReframeKeyframe : NSObject {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _homography;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _time;
}

@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } homography;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } time;

+ (id)keyframesFromDictionaryRepresentations:(id)arg1;

- (id)description;
- (id)dictionaryRepresentation;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })homography;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 homography:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;

@end
